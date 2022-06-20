#include "Class.h"


string TGoods::getName() {
    return name;
}
void TGoods::setName(string n) {
    name = n;
}
int TGoods::getCount() {
    return count;
}
void TGoods::setCount(int c) {
    count = c;
}
float TGoods::getPrice() {
    return price;
}
void TGoods::setPrice(float p) {
    price = p;
}
void TGoods::print() {
    cout << "Name: " << name << endl;
    cout << "Count: " << count << endl;
    cout << "Price: " << price << endl << endl;
}