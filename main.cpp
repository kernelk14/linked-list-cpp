#include <iostream>
#include "node.hpp"
#include "tree.hpp"

using namespace std;

int main() {
	auto *first = new Node(10);
	auto *second = new Node(20);
	auto *third = new Node(30);

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

	Tree<int> *root = createTree(2);
	Tree<int> *sec = createTree(3);
	Tree<int> *thi = createTree(4);
	Tree<int> *fou = createTree(5);
	Tree<int> *fif = createTree(6);
	Tree<int> *six = createTree(7);

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

	free(first);
	free(second);
	free(third);

	return 0;
}