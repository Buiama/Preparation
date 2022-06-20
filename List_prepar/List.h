#pragma once
#include "Node.h"

class List {
	int size;
	Node* head;
	Node* tail;
public:
	List();

	int getSize() const;

	Node* begin();
	Node* end();

	Node* get(int index);

	void pushBack(int value);
	void insert(int index, int value);

	void popBack();
	void erase(int index);

	int& operator[](int index);

	void generate(int size, int min, int max);

	void print();

	~List();
};