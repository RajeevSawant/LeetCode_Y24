/*
 * Reverse_Linked_list.cpp
 *
 *  Created on: Sep 16, 2024
 *      Author: Rajeev Sawant
 *
Given the head of a singly linked list, reverse the list, and return the reversed list.


Example 1:

Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]



approach:
* recursive approach

 - create an another global node for return type



 */

#include <iostream>
using namespace std;

struct ListNode{
	int val;
	ListNode* next;
	ListNode(int x): val(x), next(NULL) {}
	ListNode(int x, ListNode* nextptr): val(x), next(nextptr) {}
};


ListNode* reverseList(ListNode* head){



}


