/*
 * merge_two_sorted_list.cpp
 *
 *  Created on: Sep 8, 2024
 *      Author: Rajeev
 *
 *
 *
 You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.



Example 1:


Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]
Example 2:

Input: list1 = [], list2 = []
Output: []


Appr:
	a. check if the list is empty , if both are empty return empty , if one is empty return the other.
	b. travese through the list compare the values, which ever value is lower in the 2 list add to result list  and move the lower value list ahead.
	c. finally return the head of the result list.

 */


#include <iostream>
using namespace std;


struct ListNode{
	int val;
	ListNode *next;
	ListNode(): val(0), next(NULL) {}
	ListNode(int x): val(x), next(NULL) {}
	ListNode(int x, ListNode *ptr): val(x), next(ptr) {}
};




ListNode* mergeTwoList (ListNode *l1 , ListNode *l2){

	ListNode dummy = NULL, *res = &dummy;        // Mistake made while initialization of res & dummy.
	if (l1 == NULL && l2 == NULL) return res;

	if (l1 == NULL && l2 != NULL) return l2;
	if (l1 != NULL && l2 == NULL) return l1;


	while ((l1 != NULL) && (l2 != NULL)){       // Mistake made: to run the loop until both list has some values.

		if (l1 -> val < l2 -> val){
			res -> next = new ListNode (l1 -> val);
			l1 = l1 ? l1 -> next: NULL;
		}else{
			res -> next = new ListNode (l2 -> val);
			l2 = l2 ? l2 -> next : NULL;
		}
		res = res -> next;
	}

	if (l1){
		res -> next = l1;
	}else if (l2){
		res -> next = l2;
	}

	return dummy.next;
}
