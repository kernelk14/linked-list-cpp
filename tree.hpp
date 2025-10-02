#pragma once
#include <iostream>
using namespace std;
/*
				a
			/      \
           b        c
		/    \	 /    \
*/

template <typename T>
struct Tree {
	
	T data;
	Tree* left;
	Tree* right;
	
	 explicit Tree(T new_data) : data(new_data), left(nullptr), right(nullptr) {}
};

inline void assignLeft(Tree<int> *parent, Tree<int> *child) {
	parent->left = child;
}

inline void assignRight(Tree<int> *parent, Tree<int> *child) {
	parent->right = child;
}

inline Tree<int> *createTree(const int dat) {
	auto *tree = new Tree(dat);
	return tree;
}
/*
				2
			3		4
		5				6
	7
*/

inline void traverseLeft(Tree<int> *t) {
	
	while (t != nullptr) {
		cout << t->data;
		if (t->left) {
			cout << " left ";
		}
		t = t->left;
		if (t == nullptr) break;
		else traverseLeft(t);
	}
	cout << endl;
}

inline void traverseRight(Tree<int> *t) {
	while (t != nullptr) {
		cout << t->data;
		if (t->right) {
			cout << " right ";
		}
		t = t->right;
		if (t == nullptr) break;
		else traverseRight(t);
	}
	cout << endl;
}

inline void traverse(Tree<int> *t) {
	traverseLeft(t);
	traverseRight(t);
}