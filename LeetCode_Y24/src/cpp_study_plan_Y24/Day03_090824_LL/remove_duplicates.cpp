/*
 * remove_duplicates.cpp
 *
 *  Created on: Sep 8, 2024
 *      Author: Rajeev
 *
 *
 *
 *
 *
 *
 Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.



Example 1:


Input: head = [1,1,2]
Output: [1,2]
Example 2:


Input: head = [1,1,2,3,3]
Output: [1,2,3]


Constraints:

The number of nodes in the list is in the range [0, 300].
-100 <= Node.val <= 100
The list is guaranteed to be sorted in ascending order.



Appr:

1. while l1 exist and current val & next val are same
	a. we remove the next node
	b. assign the current node to one after next node
	c. free the memory

 */

#include <iostream>
using namespace std;

struct ListNode{
	int val;
	ListNode *next;
	ListNode(): val(0), next(NULL) {}
	ListNode(int x): val(0), next(NULL) {}
	ListNode(int x, ListNode *ptr): val(x), next(ptr) {}

};


ListNode* remove_duplicate(ListNode *l1){

	ListNode *res = l1;

	while((l1 != NULL) && (l1 -> next != NULL)){
		if (l1 -> val == l1 -> next -> val){
			ListNode *temp = l1 -> next;
			l1 -> next = l1 -> next -> next;

			delete temp;
		}else{
			l1 = l1 ? l1 -> next : NULL;
		}
	}

	return res;
}
