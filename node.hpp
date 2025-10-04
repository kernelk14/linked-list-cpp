#pragma once
#include <iostream>
#include <iterator>
#include <ostream>

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

Node *createNode(int value) {
    return new Node(value);
}

inline void printNextNodes(Node *head) {
	while (head != nullptr) {
		std::cout << head->data;
		if (head->next) {
			std::cout << " -> ";
		}
		head = head->next;
	}
}

inline void printPrevNodes(Node *tail) {
	while (tail != nullptr) {
		std::cout << tail->data;
		if (tail->prev) {
			std::cout << " -> ";
		}
		tail = tail->prev;
	}
}

inline void insertNode(Node *node, int value, int pos) {
    std::cout << "Is this working?\n";
    Node *insert = createNode(value);
    std::cout << "Defined an insert with value " << insert->data << "\n";
    std::cout << "Position of the node to be inserted: Position " << pos << std::endl;
    int i = 0;
    while (node != nullptr) {
        i++;
        std::cout << "Position " << i << " " << node->data << " " << std::endl;
        if (i == pos) {
            Node *capture = node;
            if (node->next) {
                node = node->next;
            }
            std::cout << "Current data: " << node->data << std::endl;
            
            node->prev = nullptr;
            Node *new_node = node;
            insert->next = new_node;
            capture->next = insert;
            insert->prev = capture;
            break;

        }

    }
    pos = 0;
}


inline int nthNode(Node *node, int haystack) {
	int ctr = 0;
    int ctr_handler;
	while (node != nullptr) {
		ctr++;
		if (node->data != haystack) {
			node = node->next;
		}
		else {
            ctr_handler = ctr;
            break;
        }
	}
    return ctr_handler;
}
