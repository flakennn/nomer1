#include <iostream>
using namespace std;
#include "Complex2.h"

ComplexNumber::ComplexNumber() {
    a = 0;
    b = 0;
}

ComplexNumber::ComplexNumber(double a, double b) {
    this->a = a;
    this->b = b;
}

void ComplexNumber::setA(double a) {
    this->a = a;
}

void ComplexNumber::setB(double b) {
    this->b = b;
}

void ComplexNumber::read() {
    cout << "Enter Im ";
    cin >> b;
    cout << "Enter Re ";
    cin >> a;
}

void ComplexNumber::print() {
    cout << a << (b > 0 ? "+" : "") << b << "*i\n";
}

double ComplexNumber::abs() {
    return sqrt(a * a + b * b);
}

ComplexNumber ComplexNumber::plus(ComplexNumber& right) {
    return ComplexNumber(this->a + right.a, this->b + right.b);
}

ComplexNumber ComplexNumber::minus(ComplexNumber& right) {
    return ComplexNumber(this->a - right.a, this->b - right.b);
}

ComplexNumber ComplexNumber::multiply(ComplexNumber& right) {
    double a = this->a,
        b = this->b,
        c = right.a,
        d = right.b;
    return ComplexNumber(a * c - b * d, b * c + a * d);
}

ComplexNumber ComplexNumber::divide(ComplexNumber& right) {
    double a = this->a,
        b = this->b,
        c = right.a,
        d = right.b;
    double resultA = (a * c + b * d) / (c * c + d * d),
        resultB = (b * c - a * d) / (c * c + d * d);
    return ComplexNumber(resultA, resultB);
}
