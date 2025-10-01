#include <iostream>
#include "node.hpp"
#include "tree.hpp"

using namespace std;

int main() {
	
	Node *first = new Node(10);
	Node *second = new Node(20);
	Node *third = new Node(30);
	
	first->next = second;
	second->next = third;
	second->prev = first;
	third->prev = second;
	
	cout << "Forward search: ";
	printNextNodes(first);
	cout << "\n";
	cout << "Backward search: ";
	printPrevNodes(third);
	cout << "\n";

	// cout << nthNode(first, 10) << endl;

	Tree *root = createTree(2);
	Tree *sec = createTree(3);
	Tree *thi = createTree(4);
	Tree *fou = createTree(5);
	Tree *fif = createTree(6);
	Tree *six = createTree(7);

/*
				2
			3		4
		5				6
	7
*/

	assignLeft(root, sec);
	assignRight(root, thi);
	assignLeft(sec, fou);
	assignRight(thi, fif);
	assignLeft(fou, six);

	traverse(root);

	return 0;
}