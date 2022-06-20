#pragma once

const int maxSize = 256;

class Queue {
	int* arr;
	int size;
public:
	Queue();

	int getSize() const;

	int* begin();
	int* end();

	int getFirst();
	int deleteFirst();
	void addLast(int value);

	void generate(int size, int min, int max);
	void print();

	~Queue();
};