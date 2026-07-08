#include <iostream>
using namespace std;

int main() {

    int sayi;

    cout << "Bir sayi giriniz: ";
    cin >> sayi;

    if (sayi > 0)
        cout << "Pozitif sayi";
    else if (sayi < 0)
        cout << "Negatif sayi";
    else
        cout << "Sifir";

    return 0;
}