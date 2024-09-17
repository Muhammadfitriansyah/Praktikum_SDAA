#include <iostream>
using namespace std;

int nilaiSegitigaPascal(int nomorBaris, int posisiDalamBaris) {
    if (posisiDalamBaris == 0 || posisiDalamBaris == nomorBaris) {
        return 1;
    } else {
        return nilaiSegitigaPascal(nomorBaris - 1, posisiDalamBaris - 1) + nilaiSegitigaPascal(nomorBaris - 1, posisiDalamBaris);
    }
}

int main() {
    for (int nomorBaris = 0; nomorBaris < 3; nomorBaris++) {
        for (int posisiDalamBaris = 0; posisiDalamBaris <= nomorBaris; posisiDalamBaris++) {
            int nilai = nilaiSegitigaPascal(nomorBaris, posisiDalamBaris);
            cout << nilai << " ";
        }
        cout << endl;
    }
    return 0;
}