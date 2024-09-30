/*
 * Remove-Nodes-from-Linked-List.cpp
 *
 *  Created on: Sep 29, 2024
 *      Author: Rajeev Sawant
 *
 *
 *
 *      2487. Remove Nodes From Linked List

You are given the head of a linked list.

Remove every node which has a node with a greater value anywhere to the right side of it.

Return the head of the modified linked list.



Example 1:


Input: head = [5,2,13,3,8]
Output: [13,8]
Explanation: The nodes that should be removed are 5, 2 and 3.
- Node 13 is to the right of node 5.
- Node 13 is to the right of node 2.
- Node 8 is to the right of node 3.
Example 2:

Input: head = [1,1,1,1]
Output: [1,1,1,1]
Explanation: Every node has value 1, so no nodes are removed.





Ques:
	- if all values are postive  -->
	- Can there be duplicate values -->
	- can you share an example

Apr:
	- So




 */


#include <iostream>
#include <stack>
using namespace std;

struct ListNode{
	int val;
	ListNode* next;
	ListNode(): val(0), next(NULL) {}
	ListNode(int x): val(x), next(NULL) {}
	ListNode(int x, ListNode* NEXT): val(x), next(NEXT) {}
};


ListNode* removeNodes(ListNode* head){
	stack<ListNode*> stack;
	ListNode *current = head;


	// add the elements to stack FILO order
	while(current != NULL){
		stack.push(current);
		current = current -> next;
	}

	current = stack.top();
	stack.pop();

	int maximum = current -> val;

	ListNode *resultList = new ListNode(current -> val);

	while(!stack.empty()){

		current = stack.top();
		stack.pop();

		if (current -> val < maximum){
			continue;
		}else{

			ListNode * newNode = new ListNode (current -> val);
			newNode -> next = resultList;
			resultList = newNode;
			maximum = current -> val;
		}

	}

	return resultList;
}


// Time complexity O(n) , space complexity O(n)


