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

template <typename T>
inline void assignLeft(Tree<T> *parent, Tree<T> *child) {
	parent->left = child;
}

template <typename T>
inline void assignRight(Tree<T> *parent, Tree<T> *child) {
	parent->right = child;
}

template <typename T>
inline Tree<T> *createTree(T dat) {
	auto *tree = new Tree(dat);
	return tree;
}
/*
				2
			3		4
		5				6
	7
*/

template <typename T>
inline void traverseLeft(Tree<T> *t) {
	
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

template <typename T>
inline void traverseRight(Tree<T> *t) {
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

template <typename T>
inline void traverse(Tree<T> *t) {
	traverseLeft(t);
	traverseRight(t);
}
