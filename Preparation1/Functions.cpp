#include "Functions.h"
#include "Class.h"

vector <TGoods> input(TGoods one, TGoods two) {
    vector <TGoods> listOfGoods;
    listOfGoods.push_back(one);
    listOfGoods.push_back(two);
    for (TGoods good : listOfGoods) {
        cout << good.getName() << endl;
    }
    return listOfGoods;
}

double counter(vector<TGoods>& listOfGoods) {
    double totalPrice = 0;
    for (TGoods good : listOfGoods) {
        totalPrice += good.getCount() * good.getPrice();
    }
    return totalPrice;
}