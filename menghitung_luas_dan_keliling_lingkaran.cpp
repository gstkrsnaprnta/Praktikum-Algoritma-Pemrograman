#include <iostream>
#include <limits> 
using namespace std;

const double pi = 3.14159; 

int main() {
    char pilihan, lanjut;
   
    do {
        double radius;
        cout << "Masukkan Nilai Jari-Jari lingkaran: ";

        
        while (!(cin >> radius)) {
            cout << "Input tidak valid. Masukkan angka: ";
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        }

        double luas = pi * radius * radius;
        double keliling = 2 * pi * radius;

        cout << "Jari-jari = " << radius << endl;
        cout << "Luas lingkaran = " << luas << endl;
        cout << "Keliling lingkaran = " << keliling << endl;

        cout << "Apakah Anda ingin menghitung lingkaran lagi? (y/n): ";
        cin >> pilihan;

        if (pilihan != 'y' && pilihan != 'Y') {
            cout << "Apakah Anda ingin keluar dari program? (y/n): ";
            cin >> lanjut;
            if (lanjut == 'y' || lanjut == 'Y') {
                cout << "Terima kasih! Program selesai.";
                break; 
            }
        }

    } while (true);

    return 0;
}
