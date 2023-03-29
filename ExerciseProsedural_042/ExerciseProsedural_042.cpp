#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama;
    int nilai_mat, nilai_bing, nilai_rata, total_diterima = 0, total_tidak_diterima = 0, status;

    for (int i = 1; i <= 20; i++) {
        cout << "Masukkan nama pendaftar: ";
        cin >> nama;
        cout << "Masukkan nilai matematika: ";
        cin >> nilai_mat;
        cout << "Masukkan nilai bahasa Inggris: ";
        cin >> nilai_bing;

        nilai_rata = (nilai_mat + nilai_bing) / 2;

        if (nilai_rata >= 70 || nilai_mat > 80) {
            cout << nama << " diterima" << endl;
            total_diterima++;
            cout << "==============================" << endl;

        }
        else {
            cout << nama << " [ditolak]" << endl;
            total_tidak_diterima++;
            cout << "==============================" << endl;
        }
    }

    cout << "Total diterima: " << total_diterima << endl;
    cout << "Total tidak diterima: " << total_tidak_diterima << endl;

    return 0;
}
