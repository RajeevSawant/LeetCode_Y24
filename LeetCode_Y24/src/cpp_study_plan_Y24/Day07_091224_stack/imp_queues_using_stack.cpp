/*
 * imp_queues_using_stack.cpp
 *
 *  Created on: Sep 12, 2024
 *      Author: Rajeev Sawant
 *
 *
 *
 *
Implement a first in first out (FIFO) queue using only two stacks.
The implemented queue should support all the functions of a normal queue (push, peek, pop, and empty).

Implement the MyQueue class:

void push(int x) Pushes element x to the back of the queue.
int pop() Removes the element from the front of the queue and returns it.
int peek() Returns the element at the front of the queue.
boolean empty() Returns true if the queue is empty, false otherwise.
Notes:

You must use only standard operations of a stack, which means only push to top, peek/pop from top, size, and is empty operations are valid.
Depending on your language, the stack may not be supported natively. You may simulate a stack using a list or deque (double-ended queue) as long as you use only a stack's standard operations.


Example 1:

Input
["MyQueue", "push", "push", "peek", "pop", "empty"]
[[], [1], [2], [], [], []]
Output
[null, null, null, 1, 1, false]

Explanation
MyQueue myQueue = new MyQueue();
myQueue.push(1); // queue is: [1]
myQueue.push(2); // queue is: [1, 2] (leftmost is front of the queue)
myQueue.peek(); // return 1
myQueue.pop(); // return 1, queue is [2]
myQueue.empty(); // return false




Appr:

--> Global stack is needed
	1. For Push operation
		a. push the element in stack
		b. pop and push in another stack

	2. For pop operation
		a. just pop the stack




 */

#include <iostream>
#include <stack>
using namespace std;

stack<int> st, helper;


void push_queue (int param){

	while (!st.empty()){
		helper.push(st.top());
		st.pop();
	}

	st.push(param);

	while(!helper.empty()){
		st.push(helper.top());
		helper.pop();
	}
}



int queue_pop(){
	int val = (!st.empty()) ? st.top() : NULL;

	st.pop();

	return val;
}



bool queue_empty(){
	return (st.empty());
}


int queue_peek(){
	return st.top();
}
