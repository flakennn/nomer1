#include "complex2.h"
#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string line, real, imag;
    double I, R;
    int c, n = 0, j = 0;
    ComplexNumber a, b;
    ifstream in("File.txt");
    if (in.is_open())
    {
        while (getline(in, line))
        {
            n++;
        }
    }
    in.close();    
        ComplexNumber* P = new ComplexNumber[n];
    ifstream in2("File.txt");
    if (in2.is_open())
    {
        while (getline(in2, line))
        {
            for (int i = 0; i < line.length() - 1; i++)
            {
                if (line[i] == ' ') { c = i; }
            }
            for (int i = 0; i < line.length() - 1; i++)
            {
                if (i < c) { real += line[i]; }
                else if (i > c) { imag += line[i]; }
            }
            R = atof(real.c_str());
            I = atof(imag.c_str());
            P[j] = ComplexNumber(R, I);
            real = "";
            imag = "";
            j++;
        }
        in2.close();  
    }
    cout << "n (к-во комплексных чисел) = " << n << endl;
    cout << "P = " << endl;
    double Max_abs = 0;
    ComplexNumber Max;
    for (int i = 0; i < n; i++)
    {
        P[i].print();
        if (P[i].abs() > Max_abs) { 
            Max_abs = P[i].abs();
            Max = P[i];
        }

    }
    cout << " Комплексное число с максимальным модулем = ";
    Max.print();
}

