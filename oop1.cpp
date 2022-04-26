//#include "Complex2.h"
//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int menu() {
//    int answer;
//    cout << "\n1 - add\n"
//        << "2 - subtract\n"
//        << "3 - multiply\n"
//        << "4 - split\n"
//        << "5 - read text\n"
//        << "0 - Exit\n"
//        << "> ";
//    cin >> answer;
//    cout << endl;
//    return answer;
//}
//void text()
//{
//
//}
//
//int main() {
//    ComplexNumber a, b, result;
//    int answer;
//    do {
//        answer = menu();
//        if (answer != 0) {
//            cout << "Number A\n";
//            a.read();
//            cout << "Number B\n";
//            b.read();
//        }
//        switch (answer) {
//        case 0:
//            break;
//        case 1:
//            result = a.plus(b);
//            break;
//        case 2:
//            result = a.minus(b);
//            break;
//        case 3:
//            result = a.multiply(b);
//            break;
//        case 4:
//            result = a.divide(b);
//            break;
//        case 5:
//            result = a.divide(b);
//            break;
//        }
//        if (answer != 0) {
//            cout << "Result: ";
//            result.print();
//        }
//    } while (answer != 0);
//}
//
