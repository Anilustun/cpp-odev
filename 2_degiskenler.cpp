#include <iostream>
using namespace std;

int main() {

    string isim = "Anıl";
    int yas = 18;
    float boy = 1.85;
    bool ogrenci = true;

    cout << "İsim: " << isim << endl;
    cout << "Yaş: " << yas << endl;
    cout << "Boy: " << boy << " metre" << endl;

    if (ogrenci)
        cout << "Öğrenci: Evet" << endl;
    else
        cout << "Öğrenci: Hayır" << endl;

    return 0;
}
