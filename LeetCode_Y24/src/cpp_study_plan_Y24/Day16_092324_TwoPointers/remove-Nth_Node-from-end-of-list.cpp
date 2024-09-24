/*
 * remove-Nth_Node-from-end-of-list.cpp
 *
 *  Created on: Sep 23, 2024
 *      Author: Rajeev Sawant
 *
 *
Given the head of a linked list, remove the nth node from the end of the list and return its head.


Example 1:


Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]
 */



#include <iostream>
using namespace std;

struct ListNode{
	int val;
	ListNode *next;
	ListNode(): val(0), next(NULL) {}
	ListNode(int x): val(x), next(NULL) {}
};


ListNode* removeNthFromEnd(ListNode *head, int n){

	ListNode dummy;
	dummy.next = head;

	ListNode *front = &dummy, *back = &dummy;

	for (int i = 0; i < n; i++){
		front = front -> next;
	}


	while (front && front -> next && back){

		front = front -> next;
		back = back -> next;

	}

	ListNode *eraser = back -> next;
	back -> next = back -> next -> next;
	delete(eraser);

	return dummy.next;

}
