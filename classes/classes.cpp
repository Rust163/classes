#include <iostream>
using namespace std;

class Fraction {
    int numerator;
    int numerator1;
    int denominator;
    int denominator1;
public:
    Fraction(int num, int denom, int num1, int denom1) : numerator{ num }, denominator{ denom }, numerator1{ num1 }, denominator1{ denom1 } {
        cout << "Constructor fraction: " << this << endl;
    }

    Fraction() : Fraction(1, 1, 1, 1) {}
    ~Fraction() {
        cout << "Destructor fraction: " << this << endl;
    }

    void print() {
        cout << numerator << "/" << denominator << "\t\t" << numerator1 << "/" << denominator1;
    }

    void plus() {
        cout << numerator + numerator1 << "/" << denominator + denominator1;
    }

    void minus() {
        cout << numerator - numerator1 << "/" << denominator + denominator1;
    }

    void mult() {
        cout << numerator * numerator1 << "/" << denominator * denominator1;
    }

    void divide() {
        numerator != 0 ? numerator / numerator1 : 0;
        denominator != 0 ? denominator / denominator1 : 0;
        cout << numerator / numerator1 << "/" << denominator / denominator1;
    }
    
};
int main()
{
    Fraction a(6, 9 ,3 ,4);
    cout << endl;
    a.print();
    cout << endl;
    a.plus();
    cout << endl;
    a.minus();
    cout << endl;
    a.mult();
    cout << endl;
    a.divide();
    cout << endl;
   
}

