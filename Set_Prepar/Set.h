#pragma once

const int maxSize = 256;

class Set {
	int* arr;
	int size;
public:
	Set();
	int getSize();

	void addValue(int value);
	void deleteValue(int value);

	int* find(int value);
	int* begin();
	int* end();

	void generate(int size, int min, int max);

	void print();

	~Set();
};