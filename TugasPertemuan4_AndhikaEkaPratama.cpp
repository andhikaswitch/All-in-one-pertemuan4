#include <iostream>
using namespace std;

int main() {

    cout << "Nama: Andhika Eka Pratama\n";
    cout << "NPM : 2410631170129\n";
    cout << "Kelas : 1B\n";
    cout << endl;

    //Nomor 1
    int batas;
    int jumlahGanjil = 0, jumlahGenap = 0, jumlahPrima = 0;

    cout <<"***************************************************************\n";
    cout << "Soal Nomor 1\n";
    cout << "Masukkan batas: ";
    cin >> batas;
    cout << "\nBilangan Ganjil: \n";
    for (int i = 1; i <= batas; ++i) {
        if (i % 2 ) {  // Mengecek bilangan ganjil
            cout << i << " ";
            jumlahGanjil += i;

            // Menampilkan faktor bilangan ganjil
            cout << "(Faktor: ";
            for (int j = 1; j <= i; ++j) {
                if (i % j == 0) cout << j << " ";
            }
            cout << ")\n";
        }
    }

    cout << "\nBilangan Genap: \n";
    for (int i = 1; i <= batas; ++i) {
        if (i % 2 == 0) {  // Mengecek bilangan genap
            cout << i << " ";
            jumlahGenap += i;

            // Menampilkan faktor bilangan genap
            cout << "(Faktor: ";
            for (int j = 1; j <= i; ++j) {
                if (i % j == 0) cout << j << " ";
            }
            cout << ")\n";
        }
    }

    cout << "\nBilangan Prima: \n";
    for (int i = 2; i <= batas; ++i) {
        bool prima = true;
        for (int j = 2; j * j <= i; ++j) {  // Mengecek bilangan prima
            if (i % j == 0) {
                prima = false;
                break;
            }
        }

        if (prima) {
            cout << i << " ";
            jumlahPrima += i;

            // Menampilkan faktor bilangan prima
            cout << "(Faktor: ";
            for (int j = 1; j <= i; ++j) {
                if (i % j == 0) cout << j << " ";
            }
            cout << ")\n";
        }
    }

    cout << "\nJumlah Bilangan Ganjil: " << jumlahGanjil << "\n";
    cout << "Jumlah Bilangan Genap: " << jumlahGenap << "\n";
    cout << "Jumlah Bilangan Prima: " << jumlahPrima << "\n";
    cout <<"***************************************************************\n";
    cout << endl;

    //Nomor 1 Selesai

    //Nomor 2

    int jumlangBilanganFibonacci;

    cout <<"***************************************************************\n";
    cout <<"Soal Nomor 2\n";
    cout << endl;
    cout << "Masukkan jumlah bilangan Fibonacci yang ingin dihasilkan: ";
    cin >> jumlangBilanganFibonacci;

    // Inisialisasi dua elemen pertama deret Fibonacci
    int bilanganPertama = 0, bilanganKedua = 1;

    // Cetak elemen pertama dan kedua
    cout << "Deret Fibonacci: " << bilanganPertama << " " << bilanganKedua << " ";


    // Menghitung dan mencetak elemen Fibonacci berikutnya
    for (int i = 2; i < jumlangBilanganFibonacci; ++i) {
        int next = bilanganPertama + bilanganKedua;
        cout << next << " ";
        bilanganPertama = bilanganKedua;
        bilanganKedua = next;
    }
    cout << endl;
    cout <<"***************************************************************\n";

    cout << endl;

    //Nomor 2 Selesai

    //Nomor 3
    cout << "Soal Nomor 3\n";
    cout << endl;
    int tinggiSegitiga;

    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggiSegitiga;

    // Menggambar segitiga sama sisi
    for (int i = 1; i <= tinggiSegitiga; ++i) {
        // Cetak spasi untuk membuat segitiga terlihat simetris
        for (int j = i; j < tinggiSegitiga; ++j) {
            cout << " "; // Spasi di depan
        }

        // Cetak bintang
        for (int k = 1; k <= (2 * i - 1); ++k) {
            cout << "*"; // Bintang di dalam
        }

        // Pindah ke baris berikutnya setelah selesai mencetak bintang
        cout << endl;
    }
    //Nomor 3 Selesai


    return 0;
}
