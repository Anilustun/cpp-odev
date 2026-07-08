#include <iostream>
using namespace std;

int topla(int a, int b){
    return a + b;
}

int carp(int a, int b){
    return a * b;
}

bool tekMiCiftMi(int sayi){
    return sayi % 2 != 0;
}

int main(){

    cout << "Toplam: " << topla(15,5) << endl;
    cout << "Carpim: " << carp(15,5) << endl;

    if(tekMiCiftMi(7))
        cout << "7 tek sayidir.";
    else
        cout << "7 cift sayidir.";

    return 0;
}