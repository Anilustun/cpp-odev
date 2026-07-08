#include <iostream>
using namespace std;

int main() {

    double sayi1, sayi2;
    char islem;

    cout << "Birinci sayi: ";
    cin >> sayi1;

    cout << "Islem (+, -, *, /): ";
    cin >> islem;

    cout << "Ikinci sayi: ";
    cin >> sayi2;

    switch(islem){

        case '+':
            cout << "Sonuc = " << sayi1 + sayi2;
            break;

        case '-':
            cout << "Sonuc = " << sayi1 - sayi2;
            break;

        case '*':
            cout << "Sonuc = " << sayi1 * sayi2;
            break;

        case '/':
            cout << "Sonuc = " << sayi1 / sayi2;
            break;

        default:
            cout << "Hatali islem!";
    }

    return 0;
}