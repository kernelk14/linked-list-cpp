#pragma once
#include <iostream>

// Doubly linked list.
class Node {
	public:
		int data;
		Node* prev;
		Node* next;
		
		Node (int new_data) {
			this->data = new_data;
			this->prev = nullptr;
			this->next = nullptr;
		}
};


void printNextNodes(Node *head) {
	while (head != nullptr) {
		std::cout << head->data;
		if (head->next) {
			std::cout << " -> ";
		}
		head = head->next;
	}
}

void printPrevNodes(Node *tail) {
	while (tail != nullptr) {
		std::cout << tail->data;
		if (tail->prev) {
			std::cout << " -> ";
		}
		tail = tail->prev;
	}
}

int nthNode(Node *node, int haystack) {
	int ctr = 0;
	while (node != nullptr) {
		ctr++;
		if (node->data != haystack) {
			node = node->next;
		}
		else return ctr;
	}
}
