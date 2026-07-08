#include <iostream>
using namespace std;

int main() {

    int sayi1, sayi2;

    cout << "Birinci sayiyi giriniz: ";
    cin >> sayi1;

    cout << "Ikinci sayiyi giriniz: ";
    cin >> sayi2;

    cout << "Toplam = " << sayi1 + sayi2 << endl;
    cout << "Cikarma = " << sayi1 - sayi2 << endl;
    cout << "Carpma = " << sayi1 * sayi2 << endl;
    cout << "Bolme = " << (float)sayi1 / sayi2 << endl;

    return 0;
}
