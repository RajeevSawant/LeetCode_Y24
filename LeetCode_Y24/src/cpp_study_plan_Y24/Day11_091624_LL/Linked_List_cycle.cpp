/*
 * Linked_List_cycle.cpp
 *
 *  Created on: Sep 16, 2024
 *      Author: Rajeev Sawant
 *
 *
 *
 *
Given head, the head of a linked list, determine if the linked list has a cycle in it.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer.
Internally, pos is used to denote the index of the node that tail's next pointer is connected to.
Note that pos is not passed as a parameter.

Return true if there is a cycle in the linked list. Otherwise, return false.



Example 1:


Input: head = [3,2,0,-4], pos = 1
Output: true
Explanation: There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).

approach:


- traverse through the list
	- if the node already exist
		- return true
	- if it doesn't then save the node in a unordered_map with key as node and value as 1
 */

#include <iostream>
#include <unordered_map>
using namespace std;

struct ListNode{
	int val;
	ListNode* next;
	ListNode(int x): val(x), next(NULL) {}
	ListNode(int x, ListNode* nextptr): val(x), next(nextptr) {}
};


bool hasCycle(ListNode* list){

	unordered_map<ListNode* , int> mp;

	while(list != NULL){

		if (mp.find(list) != mp.end()){
			return true;
		}

		mp[list] = 1;
		list = list -> next;
	}

	return false;
}



