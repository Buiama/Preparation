#pragma once
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class TGoods {
    string name;
    int count;
    float price;
public:
    string getName();
    void setName(string);
    int getCount();
    void setCount(int);
    float getPrice();
    void setPrice(float);
    TGoods(string n, int c, float p) : name(n), count(c), price(p) {}
    ~TGoods() {}
    void print();
};