#ifndef COMPLEX2_H
#define COMPLEX2_H
#include <iostream>;
using namespace std;

struct ComplexNumber {
public:
    ComplexNumber();
    ComplexNumber(double a, double b);
    ComplexNumber plus(ComplexNumber&);
    ComplexNumber minus(ComplexNumber&);
    ComplexNumber multiply(ComplexNumber&);
    ComplexNumber divide(ComplexNumber&);
    void print();
    void setA(double a);
    void setB(double b);
    void read();
    double abs();
private:
    double a, b;
};
#endif