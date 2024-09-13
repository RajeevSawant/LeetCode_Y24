/*
 * imp_stack_using_queues.cpp
 *
 *  Created on: Sep 12, 2024
 *      Author: Rajeev Sawant
 *
 *
 *
 *
 *
 *
 *
 *Implement a last-in-first-out (LIFO) stack using only two queues.
 *Implement The implemented stack should support all the functions of a normal stack (push, top, pop, and empty).

Implement the MyStack class:

void push(int x) Pushes element x to the top of the stack.
int pop() Removes the element on the top of the stack and returns it.
int top() Returns the element on the top of the stack.
boolean empty() Returns true if the stack is empty, false otherwise.
Notes:

You must use only standard operations of a queue, which means that only push to back, peek/pop from front, size and is empty operations are valid.
Depending on your language, the queue may not be supported natively. You may simulate a queue using a list or deque (double-ended queue) as long as you use only a queue's standard operations.


Example 1:

Input
["MyStack", "push", "push", "top", "pop", "empty"]
[[], [1], [2], [], [], []]
Output
[null, null, null, 2, 2, false]

Explanation


Appr:
- We need a global queue
	1. To implement push
		a. we need to rotate the elements of the queue



 */

#include <iostream>
#include <queue>
using namespace std;


queue<int> que;

void stack_push(int param){

	que.push(param);

	for (int pos = 0; pos < que.size() - 1; pos++){
		que.push(que.front());
		que.pop();
	}

}


int stack_pop(){
	int val = (que.empty())? NULL : que.front();
	que.pop();

	return val;
}



int stack_top(){
	int val = que.front();

	return val;
}


bool stack_empty(){
	return (que.empty());
}

int main(){

}










