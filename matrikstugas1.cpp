#include <iostream>

using namespace std;

int main() {
    // deklarasi matriks

    int matriksA[2][2] = {{1, 2}, {3, 4}};
    int matriksB[2][2] = {{5, 6}, {7, 8}};
    int hasil[2][2];

    // perkalian matriks
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            hasil[i][j] = matriksA[i][j] * matriksB[i][j];

        }
    }

    cout << "Hasil dari perkalian Matriks:"<<endl;
    for(int i = 0; i < 2; ++i) {
        for(int j = 0; j < 2; ++j){
            cout << hasil[i][j] << " ";

        }

        cout <<endl;
    }

    return 0;
}
