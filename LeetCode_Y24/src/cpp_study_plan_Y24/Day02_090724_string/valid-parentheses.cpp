/*
 * valid-parentheses.cpp
 *
 *  Created on: Sep 7, 2024
 *      Author: Rajeev
 *
 *
 *    Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.


Example 1:

Input: s = "()"

Output: true

Example 2:

Input: s = "()[]{}"

Output: true

Example 3:

Input: s = "(]"

Output: false
 *
 */


/*
 * Ques:
 * -> How is input provided ?
 * -> How is o/p to be returned ? any restrictions on DS?
 * -> what happens when there is no i/p ?
 *
 *
 * Appr:
 * 1. to check if the i/p is empty or not
 * 		a. if empty than true
 * 		b. if not empty , we traverse through the array,
 * 			a. we check if the i/p character is a open bracket, if it is open bracket than push in the stack.
 * 			b. if not an open bracket meaning its a close bracket
 * 				aa. check if the top of the stack is a open bracket of same kind. If yes than true , if not then false.
 *
 *
 *
 */


#include <iostream>
#include <stack>
using namespace std;

typedef long long size_bracket;

bool valid_parenthesis(string brackets){

		size_bracket size = brackets.size();
		// check if inp is empty
		if (size == 0) return true;
		if (size < 0){cout << "Invalid input size \n"; return false;}

		stack<char> st;

		for(int tra = 0; tra < size; tra++){
			if (brackets[tra] == '[' || brackets[tra] == '{' || brackets[tra] == '('){
				st.push(brackets[tra]);
			}else{
				if (tra == size || tra == 0) return false;
				else if(brackets[tra] == '}' && (st.top() != '{' || st.empty())){return false;}
				else if(brackets[tra] == ']' && (st.top() != '[' || st.empty())){return false;}
				else if(brackets[tra] == ')' && (st.top() != '(' || st.empty())){return false;}
				st.pop();
			}
		}


		if (!st.empty()) return false;

		return true;

}




