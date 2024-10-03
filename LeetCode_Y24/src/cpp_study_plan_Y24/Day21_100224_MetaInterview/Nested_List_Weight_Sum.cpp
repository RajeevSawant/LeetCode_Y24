/*
 * Nested_List_Weight_Sum.cpp
 *
 *  Created on: Oct 2, 2024
 *      Author: Rajeev Sawant
 *
 *
 *
 *      You are given a nested list of integers nestedList.
 *      Each element is either an integer or a list whose elements may also be integers or other lists.

The depth of an integer is the number of lists that it is inside of.
For example, the nested list [1,[2,2],[[3],2],1] has each integer's value set to its depth.

Return the sum of each integer in nestedList multiplied by its depth.



Example 1:


Input: nestedList = [[1,1],2,[1,1]]
Output: 10
Explanation: Four 1's at depth 2, one 2 at depth 1. 1*2 + 1*2 + 2*1 + 1*2 + 1*2 = 10.
Example 2:


Input: nestedList = [1,[4,[6]]]
Output: 27
Explanation: One 1 at depth 1, one 4 at depth 2, and one 6 at depth 3. 1*1 + 4*2 + 6*3 = 27.
 */




#include <vector>
#include <iostream>
using namespace std;


int depthSum(vector<NestedInteger>& nestedList){
	return dfs(nestedList, 1);
}

int dfs(vector<NestedInteger>& list, int depth){

	int total = 0;

	for (NestedInteger nested: list){

		if (nested.isInteger()){
			total += nested.getInteger()*depth;
		}else{
			total += dfs(nested.getList(), depth + 1);
		}

	}

	return total;
}



/*
 *
 * Complexity Analysis

Let N be the total number of nested elements in the input list.
For example, the list [ [[[[1]]]], 2 ] contains 4 nested lists and 2 nested integers (1 and 2), so N=6 for that particular case.

Time complexity : O(N).

Recursive functions can be a bit tricky to analyze, particularly when their implementation includes a loop.
A good strategy is to start by determining how many times the recursive function is called,
and then how many times the loop will iterate across all calls to the recursive function.

The recursive function, dfs(...) is called exactly once for each nested list.
As N also includes nested integers, we know that the number of recursive calls has to be less than N.

On each nested list, it iterates over all of the nested elements directly inside that list (in other words, not nested further).
As each nested element can only be directly inside one list, we know that there must only be one loop iteration for each nested element.
This is a total of N loop iterations.

So combined, we are performing at most 2⋅N recursive calls and loop iterations. We drop the 2 as it is a constant, leaving us with time complexity O(N).

Space complexity : O(N).

In terms of space, at most O(D) recursive calls are placed on the stack, where D is the maximum level of nesting in the input. For example, D=2 for the input [[1,1],2,[1,1]], and D=3 for the input [1,[4,[6]]].

In the worst case, D=N, (e.g. the list [[[[[[]]]]]]) so the worst-case space complexity is O(N).
 *
 */
