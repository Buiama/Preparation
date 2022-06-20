#include "Functions.h"
#include "Class.h"

int main()
{
    /*string a; cout << "Name: "; cin >> a;
    int b; cout << "count: "; cin >> b;
    float c; cout << "cost"; cin >> c;
    TGoods k(a, b, c);*/
    TGoods one("comb", 30000, 2.49), two("Mukha", 1, 300);
    one.print();
    two.print();
    
    vector <TGoods> listOfGoods = input(one, two);
    
    double totalPrice = counter(listOfGoods);
    cout << "totalPrice = " << totalPrice;
}









/*
class TComplex {
    double Re;
    double Im;
public:
    TComplex(double x, double y) : Re(x), Im(y) {}
    TComplex(TComplex& z) { Re = z.Re; Im = z.Im; }
    ~TComplex() {}
    void print();
    TComplex operator-() {
        Re = -Re; Im = -Im;
        return *this;
    }
};

void TComplex::print() {
    cout << setw(10) << fixed << Re << " + i*" << Im << endl;
}

int main()
{
    TComplex z(1, 1), u(0, 0);
    z.print();
    u = -z;
    u.print();
    cin.get();
    cout << "Hello World!\n";
}
*/