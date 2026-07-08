#include <iostream>
using namespace std;

int main() {

    cout << "1'den 10'a kadar:" << endl;

    for(int i=1; i<=10; i++)
        cout << i << " ";

    cout << endl << endl;

    cout << "Cift Sayilar:" << endl;

    for(int i=2; i<=10; i+=2)
        cout << i << " ";

    cout << endl << endl;

    cout << "Tek Sayilar:" << endl;

    for(int i=1; i<=10; i+=2)
        cout << i << " ";

    return 0;
}