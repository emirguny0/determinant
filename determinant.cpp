#include <iostream>

using namespace std;

int determinant3x3(int matris[3][3]) {
    return matris[0][0] * (matris[1][1] * matris[2][2] - matris[1][2] * matris[2][1]) -
        matris[0][1] * (matris[1][0] * matris[2][2] - matris[1][2] * matris[2][0]) +
        matris[0][2] * (matris[1][0] * matris[2][1] - matris[1][1] * matris[2][0]);
}

int main() {
    setlocale(LC_ALL, "Turkish");
    int matris[3][3];

    cout << "Lütfen 3x3 matrisin elemanlarını giriniz! (satır satır):\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> matris[i][j];
        }
    }

    cout << "Girilen Matris =\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matris[i][j] << " ";
        }
        cout << endl;
    }

    int determinant = determinant3x3(matris);
    cout << "Girdiğiniz matrisin determinantı = " << determinant << endl;

    return 0;
}