#include <iostream>

using namespace std;

int main(){

  char pilihan;

  float matriksA[10][10], matriksB[10][10], matriksC[10][10], transpose[10][10];

  // Input nilai matriks A

  for (int i = 1; i <= 2; i++) {

    for (int j = 1; j <= 2; j++) {

      cout << "Masukkan nilai untuk a" << i << j << endl;

      cin >> matriksA[i][j];

    }

  }

  // display matriks A

  cout << "Matriks A anda adalah: " << endl;

  for (int i = 1; i <= 2; i++) {

    for (int j = 1; j <= 2; j++) {

      cout << matriksA[i][j] << " ";

    }

    cout << endl;

  }

  // Input nilai matriks B

  for (int i = 1; i <= 2; i++) {

    for (int j = 1; j <= 2; j++) {

      cout << "Masukkan nilai untuk b" << i << j << endl;

      cin >> matriksB[i][j];

    }

  }

  // display matriks B

  cout << "Matriks B anda adalah: " << endl;

  for (int i = 1; i <= 2; i++) {

    for (int j = 1; j <= 2; j++) {

      cout << matriksB[i][j] << " ";

    }

    cout << endl;

  }

  cout << "(+) penjumlahan, (*) Perkalian, (T) mencari Transpose: ";

  cin >> pilihan;

  switch (pilihan) {

  // penjumlahan

  case '+':

    cout << "Hasil penjumlahan: " << endl;

    for (int i = 1; i <= 2; i++) {

      for (int j = 1; j <= 2; j++) {

        cout << matriksA[i][j] + matriksB[i][j] << " ";

      }

      cout << endl;

    }

    break;

  case '*':

  // Perkalian

    cout << "Hasil perkalian: " << endl;

    for (int i = 1; i <= 2; i++) {

      for (int j = 1; j <= 2; j++) {

        matriksC[i][j] = 0;

      }

    }

    for (int i = 1; i <= 2; i++) {

      for (int j = 1; j <= 2; j++) {

        for (int n = 1; n <= 2; n++) {

          matriksC[i][j] += matriksA[i][n] * matriksB[n][j];

        }

      }

    }

    for (int i = 1; i <= 2; i++) {

      for (int j = 1; j <= 2; j++) {

        cout << matriksC[i][j] << " ";

      }

      cout << endl;

    }

    break;

  case 'T':

  // Tranpose

    cout << "Hasil transpose" << endl;

    for (int i = 1; i <= 2; i++) {

      for (int j = 1; j <= 2; j++) {

        transpose[j][i] = matriksA[i][j];

      }

    }

    cout << "Matriks A: " << endl;

    for (int i = 1; i <= 2; i++) {

      for (int j = 1; j <= 2; j++) {

        cout << " " << transpose[i][j];

      }

      cout << endl;

    }

    cout << "Matriks B: " << endl;

    for (int i = 1; i <= 2; i++) {

      for (int j = 1; j <= 2; j++) {

        transpose[j][i] = matriksB[i][j];

      }

    }

    for (int i = 1; i <= 2; i++) {

      for (int j = 1; j <= 2; j++) {

        cout << " " << transpose[i][j];

      }

      cout << endl;

    }

    break;

  default:

    cout << "Masukan dengan benar!";

    break;

  }

  return 0;

}
