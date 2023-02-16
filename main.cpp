#include <iostream>
#include <string>

using namespace std;

void BiodataResult(string a, string b, string c, string d, string e) {
    cout << "| Nama      : " << a << endl;
    cout << "| NIM       : " << b << endl;
    cout << "| TTL       : " << c << endl;
    cout << "| Hobi      : " << d << endl;
    cout << "| Pekerjaan : " << e << endl;
}

int main() {
    string nama, nim, hobi, lahir, kerja;
    int pilih, menu;
    char kembali, lagi;
    label:
    cout << "=======================================================================================================================" << endl;
    cout << "|                                                    |INPUT BIODATA|                                                  |" << endl;
    cout << "=======================================================================================================================" << endl;
    cout << " Harap Masukan Data Diri Anda :                                     " << endl;
    cout << endl;
    cout << " A) NAMA      : "; cin >> nama;
    cout << " B) NIM       : "; cin >> nim;
    cout << " C) TTL       : "; cin >> lahir;
    cout << " D) HOBI      : "; cin >> hobi;
    cout << " F) PEKERJAAN : *Pilih Salah Satu Pekerjaan Dibawah Ini*" << endl;
    cout << "                  1) Wiraswasta" << endl;
    cout << "                  2) PNS/TNI/POLRI" << endl;
    cout << "                  3) Youtuber/Content Creator" << endl;
    cout << "                  4) Artis/Aktor" << endl;
    cout << "                  5) Hacker" << endl;
    cout << "                  6) Mahasiswa" << endl;
    cout << "  Pilihan Anda : "; cin >> pilih;
    cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;

    switch (pilih) {
        case 1: kerja = "Wiraswasta"; break;
        case 2: kerja = "PNS/TNI/POLRI"; break;
        case 3: kerja = "Youtuber/Content Creator"; break;
        case 4: kerja = "Artis/Aktor"; break;
        case 5: kerja = "Hacker"; break;
        case 6: kerja = "Mahasiswa"; break;
    }

    cout << " LOADING......" << endl;
    cout << " Baik, Terima Kasih Atas Kerja Sama Anda" << endl;
    cout << " Data Sudah Kami Terima" << endl;
    cout << " Biodata Anda Sudah Kami Proses Kedalam .txt" << endl;
    cout << " Directory Berada Didalam File Pascal Anda" << endl;
    BiodataResult(nama, nim, lahir, hobi, kerja);
    cout << endl;
cout << " Ingin Menulis Lagi ? (Y/T) : "; cin >> lagi;
if (lagi == 'Y' || lagi == 'y') {
goto label;
} else if (lagi == 'T' || lagi == 't') {
cout << endl;
cout << " Dibuat Oleh AIPP_Project03" << endl;
cout << " Terima Kasih Saya Ucapkan" << endl;
cout << " A.Irwin Putra Pangesti" << endl;
}
return 0;
}
