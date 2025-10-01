#pragma once
#include <iostream>
using namespace std;
/*
				a
			/      \
           b        c
		/    \	 /    \
*/

struct Tree {
	
	int data;
	Tree* left;
	Tree* right;
	
	Tree(int new_data) {
		data = new_data;
		left = nullptr;
		right = nullptr;
	}
};

void assignLeft(Tree *parent, Tree *child) {
	parent->left = child;
}

void assignRight(Tree *parent, Tree *child) {
	parent->right = child;
}

Tree *createTree(int dat) {
	Tree *tree = new Tree(dat);
	return tree;
}
/*
				2
			3		4
		5				6
	7
*/

void traverseLeft(Tree *t) {
	
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

void traverseRight(Tree *t) {
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

void traverse(Tree *t) {
	traverseLeft(t);
	traverseRight(t);
}