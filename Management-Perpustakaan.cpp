#include <iostream>
#include <string>
using namespace std;
 
// =======================
// VARIABEL LOGIN
// =======================
int    roleAktif = 0; // 1=Admin, 2=Petugas, 3=Pengunjung
string namaAktif = "";
string nimAktif  = "";
 
// =======================
// HEADER
// =======================
void header() {
    cout << "========================================\n";
    cout << "   SISTEM INFORMASI PERPUSTAKAAN UAD    \n";
    cout << "========================================\n";
}
 
// =======================
// FITUR 1 - LOGIN & LOGOUT
// =======================
void menuLogin() {
    string username, password;
    cout << "\n===========================\n";
    cout << "=====      LOGIN      =====\n";
    cout << "===========================\n";
    cout << "Username : "; cin >> username;
    cout << "Password : "; cin >> password;
 
    // TODO: isi logika login di sini
    cout << "\n[TODO] Proses login belum diimplementasi.\n";
}
 
void menuLogout() {
    cout << "\n===========================\n";
    cout << "=====     LOGOUT      =====\n";
    cout << "===========================\n";
    // TODO: isi logika logout di sini
    cout << "\n[TODO] Proses logout belum diimplementasi.\n";
}
 
// =======================
// FITUR 2 - SISTEM SIMPU
// =======================
void menuSIMPU() {
    int pilihan;
    cout << "\n===========================\n";
    cout << "=====  SISTEM SIMPU   =====\n";
    cout << "===========================\n";
    cout << "1. Input Data Peminjaman\n";
    cout << "2. Input Data Pengembalian\n";
    cout << "3. Lihat Data Peminjaman\n";
    cout << "4. Lihat Data Pengunjung\n";
    cout << "5. Keluar\n";
    cout << "Pilihan: ";
    cin >> pilihan;
    switch (pilihan) {
        case 1:
            cout << "\n[TODO] Input Data Peminjaman...\n";
            break;
        case 2:
            cout << "\n[TODO] Input Data Pengembalian...\n";
            break;
        case 3:
            cout << "\n[TODO] Lihat Data Peminjaman...\n";
            break;
        case 4:
            cout << "\n[TODO] Lihat Data Pengunjung...\n";
            break;
        case 5:
            cout << "\nKeluar dari SIMPU...\n";
            break;
        default:
            cout << "\nPilihan Tidak Tersedia!\n";
    }
}
 
// =======================
// FITUR 3 - SISTEM OPAG
// =======================
void menuOPAG() {
    int pilihan;
    cout << "\n===========================\n";
    cout << "=====  SISTEM OPAG    =====\n";
    cout << "===========================\n";
    cout << "1. Lihat Buku Dipinjam\n";
    cout << "2. Cek Status Buku\n";
    cout << "3. Lihat Denda Saya\n";
    cout << "4. Keluar\n";
    cout << "Pilihan: ";
    cin >> pilihan;
    switch (pilihan) {
        case 1:
            cout << "\n[TODO] Lihat Buku Dipinjam...\n";
            break;
        case 2:
            cout << "\n[TODO] Cek Status Buku...\n";
            break;
        case 3:
            cout << "\n[TODO] Lihat Denda Saya...\n";
            break;
        case 4:
            cout << "\nKeluar dari OPAG...\n";
            break;
        default:
            cout << "\nPilihan Tidak Tersedia!\n";
    }
}
 
// =======================
// FITUR 4 - SISTEM ASBU
// =======================
void menuASBU() {
    int pilihan;
    cout << "\n===========================\n";
    cout << "=====  SISTEM ASBU    =====\n";
    cout << "===========================\n";
    cout << "1. Cari Buku by Judul\n";
    cout << "2. Cari Buku by Penulis\n";
    cout << "3. Cari Buku by Kategori\n";
    cout << "4. Keluar\n";
    cout << "Pilihan: ";
    cin >> pilihan;
    switch (pilihan) {
        case 1:
            cout << "\n[TODO] Cari Buku by Judul...\n";
            break;
        case 2:
            cout << "\n[TODO] Cari Buku by Penulis...\n";
            break;
        case 3:
            cout << "\n[TODO] Cari Buku by Kategori...\n";
            break;
        case 4:
            cout << "\nKeluar dari ASBU...\n";
            break;
        default:
            cout << "\nPilihan Tidak Tersedia!\n";
    }
}
 
// =======================
// FITUR 5 - KELOLA DATA BUKU
// =======================
void menuDataBuku() {
    int pilihan;
    cout << "\n===========================\n";
    cout << "===== KELOLA DATA BUKU ====\n";
    cout << "===========================\n";
    cout << "1. Lihat Semua Buku\n";
    cout << "2. Tambah Buku\n";
    cout << "3. Ubah Data Buku\n";
    cout << "4. Hapus Buku\n";
    cout << "5. Keluar\n";
    cout << "Pilihan: ";
    cin >> pilihan;
    switch (pilihan) {
        case 1:
            cout << "\n[TODO] Lihat Semua Buku...\n";
            break;
        case 2:
            cout << "\n[TODO] Tambah Buku...\n";
            break;
        case 3:
            cout << "\n[TODO] Ubah Data Buku...\n";
            break;
        case 4:
            cout << "\n[TODO] Hapus Buku...\n";
            break;
        case 5:
            cout << "\nKeluar dari Kelola Data Buku...\n";
            break;
        default:
            cout << "\nPilihan Tidak Tersedia!\n";
    }
}
 
// =======================
// FITUR 6 - DATA JURNAL
// =======================
void menuJurnal() {
    int pilihan;
    cout << "\n===========================\n";
    cout << "=====   DATA JURNAL   =====\n";
    cout << "===========================\n";
    cout << "1. Lihat Semua Jurnal\n";
    cout << "2. Cari Jurnal\n";
    cout << "3. Tambah Jurnal\n";    // Admin & Petugas
    cout << "4. Ubah Status Jurnal\n"; // Admin & Petugas
    cout << "5. Hapus Jurnal\n";     // Admin saja
    cout << "6. Keluar\n";
    cout << "Pilihan: ";
    cin >> pilihan;
    switch (pilihan) {
        case 1:
            cout << "\n[TODO] Lihat Semua Jurnal...\n";
            break;
        case 2:
            cout << "\n[TODO] Cari Jurnal...\n";
            break;
        case 3:
            cout << "\n[TODO] Tambah Jurnal...\n";
            break;
        case 4:
            cout << "\n[TODO] Ubah Status Jurnal...\n";
            break;
        case 5:
            cout << "\n[TODO] Hapus Jurnal...\n";
            break;
        case 6:
            cout << "\nKeluar dari Data Jurnal...\n";
            break;
        default:
            cout << "\nPilihan Tidak Tersedia!\n";
    }
}
 
// =======================
// FITUR 7 - PEMINJAMAN BUKU
// =======================
void menuPeminjaman() {
    int pilihan;
    cout << "\n===========================\n";
    cout << "===== PEMINJAMAN BUKU =====\n";
    cout << "===========================\n";
    cout << "1. Lihat Daftar Buku\n";
    cout << "2. Ajukan Peminjaman\n";
    cout << "3. Lihat Peminjaman Aktif\n";
    cout << "4. Keluar\n";
    cout << "Pilihan: ";
    cin >> pilihan;
    switch (pilihan) {
        case 1:
            cout << "\n[TODO] Lihat Daftar Buku...\n";
            break;
        case 2:
            cout << "\n[TODO] Ajukan Peminjaman...\n";
            break;
        case 3:
            cout << "\n[TODO] Lihat Peminjaman Aktif...\n";
            break;
        case 4:
            cout << "\nKeluar dari Peminjaman Buku...\n";
            break;
        default:
            cout << "\nPilihan Tidak Tersedia!\n";
    }
}
 
// =======================
// FITUR 8 - PENGEMBALIAN BUKU
// =======================
void menuPengembalian() {
    int pilihan;
    cout << "\n===========================\n";
    cout << "==== PENGEMBALIAN BUKU ====\n";
    cout << "===========================\n";
    cout << "1. Proses Pengembalian\n";
    cout << "2. Lihat Data Pengembalian\n";
    cout << "3. Status Pengembalian Saya\n";
    cout << "4. Keluar\n";
    cout << "Pilihan: ";
    cin >> pilihan;
    switch (pilihan) {
        case 1:
            cout << "\n[TODO] Proses Pengembalian...\n";
            break;
        case 2:
            cout << "\n[TODO] Lihat Data Pengembalian...\n";
            break;
        case 3:
            cout << "\n[TODO] Status Pengembalian Saya...\n";
            break;
        case 4:
            cout << "\nKeluar dari Pengembalian Buku...\n";
            break;
        default:
            cout << "\nPilihan Tidak Tersedia!\n";
    }
}
 
// =======================
// FITUR 9 - SISTEM DENDA
// =======================
void menuDenda() {
    int pilihan;
    cout << "\n===========================\n";
    cout << "=====  SISTEM DENDA   =====\n";
    cout << "===========================\n";
    cout << "1. Lihat Semua Denda\n";
    cout << "2. Tandai Denda Lunas\n";
    cout << "3. Lihat Denda Saya\n";
    cout << "4. Keluar\n";
    cout << "Pilihan: ";
    cin >> pilihan;
    switch (pilihan) {
        case 1:
            cout << "\n[TODO] Lihat Semua Denda...\n";
            break;
        case 2:
            cout << "\n[TODO] Tandai Denda Lunas...\n";
            break;
        case 3:
            cout << "\n[TODO] Lihat Denda Saya...\n";
            break;
        case 4:
            cout << "\nKeluar dari Sistem Denda...\n";
            break;
        default:
            cout << "\nPilihan Tidak Tersedia!\n";
    }
}
 
// =======================
// FITUR 10 - CADANGAN BUKU
// =======================
void menuCadanganBuku() {
    int pilihan;
    cout << "\n===========================\n";
    cout << "===== CADANGAN BUKU   =====\n";
    cout << "===========================\n";
    cout << "1. Lihat Daftar Cadangan\n";
    cout << "2. Tambah Buku Cadangan\n";
    cout << "3. Hapus Buku Cadangan\n";
    cout << "4. Keluar\n";
    cout << "Pilihan: ";
    cin >> pilihan;
    switch (pilihan) {
        case 1:
            cout << "\n[TODO] Lihat Daftar Cadangan...\n";
            break;
        case 2:
            cout << "\n[TODO] Tambah Buku Cadangan...\n";
            break;
        case 3:
            cout << "\n[TODO] Hapus Buku Cadangan...\n";
            break;
        case 4:
            cout << "\nKeluar dari Cadangan Buku...\n";
            break;
        default:
            cout << "\nPilihan Tidak Tersedia!\n";
    }
}
 
// =======================
// FITUR 11 - RIWAYAT PEMINJAMAN
// =======================
void menuRiwayat() {
    int pilihan;
    cout << "\n===========================\n";
    cout << "==== RIWAYAT PEMINJAMAN ===\n";
    cout << "===========================\n";
    cout << "1. Lihat Semua Riwayat\n";
    cout << "2. Riwayat Milik Saya\n";
    cout << "3. Cari Riwayat by NIM\n";
    cout << "4. Keluar\n";
    cout << "Pilihan: ";
    cin >> pilihan;
    switch (pilihan) {
        case 1:
            cout << "\n[TODO] Lihat Semua Riwayat...\n";
            break;
        case 2:
            cout << "\n[TODO] Riwayat Milik Saya...\n";
            break;
        case 3:
            cout << "\n[TODO] Cari Riwayat by NIM...\n";
            break;
        case 4:
            cout << "\nKeluar dari Riwayat Peminjaman...\n";
            break;
        default:
            cout << "\nPilihan Tidak Tersedia!\n";
    }
}
 
// =======================
// FITUR 12 - DATA PENGUNJUNG
// =======================
void menuDataPengunjung() {
    int pilihan;
    cout << "\n===========================\n";
    cout << "===== DATA PENGUNJUNG =====\n";
    cout << "===========================\n";
    cout << "1. Lihat Semua Pengunjung\n";
    cout << "2. Input Pengunjung Baru\n";
    cout << "3. Cari Data Pengunjung\n";
    cout << "4. Keluar\n";
    cout << "Pilihan: ";
    cin >> pilihan;
    switch (pilihan) {
        case 1:
            cout << "\n[TODO] Lihat Semua Pengunjung...\n";
            break;
        case 2:
            cout << "\n[TODO] Input Pengunjung Baru...\n";
            break;
        case 3:
            cout << "\n[TODO] Cari Data Pengunjung...\n";
            break;
        case 4:
            cout << "\nKeluar dari Data Pengunjung...\n";
            break;
        default:
            cout << "\nPilihan Tidak Tersedia!\n";
    }
}
 
// =======================
// FITUR 13 - INFORMASI PERPUSTAKAAN
// =======================
void menuInformasi() {
    int pilihan;
    cout << "\n===========================\n";
    cout << "====  INFO PERPUSTAKAAN ===\n";
    cout << "===========================\n";
    cout << "1. Profil Perpustakaan\n";
    cout << "2. Fasilitas\n";
    cout << "3. Tata Tertib\n";
    cout << "4. Keluar\n";
    cout << "Pilihan: ";
    cin >> pilihan;
    switch (pilihan) {
        case 1:
            cout << "\n[TODO] Tampil Profil Perpustakaan...\n";
            break;
        case 2:
            cout << "\n[TODO] Tampil Fasilitas...\n";
            break;
        case 3:
            cout << "\n[TODO] Tampil Tata Tertib...\n";
            break;
        case 4:
            cout << "\nKeluar dari Informasi...\n";
            break;
        default:
            cout << "\nPilihan Tidak Tersedia!\n";
    }
}
 
// =======================
// FITUR 14 - JAM OPERASIONAL
// =======================
void menuJamOperasional() {
    int pilihan;
    cout << "\n===========================\n";
    cout << "===== JAM OPERASIONAL =====\n";
    cout << "===========================\n";
    cout << "1. Lihat Jam Operasional\n";
    cout << "2. Ubah Jam Operasional\n";  // Admin & Petugas
    cout << "3. Keluar\n";
    cout << "Pilihan: ";
    cin >> pilihan;
    switch (pilihan) {
        case 1:
            cout << "\n[TODO] Lihat Jam Operasional...\n";
            break;
        case 2:
            cout << "\n[TODO] Ubah Jam Operasional...\n";
            break;
        case 3:
            cout << "\nKeluar dari Jam Operasional...\n";
            break;
        default:
            cout << "\nPilihan Tidak Tersedia!\n";
    }
}
 
// =======================
// FITUR 15 - DASHBOARD
// =======================
void menuDashboard() {
    int pilihan;
    cout << "\n===========================\n";
    cout << "=====    DASHBOARD    =====\n";
    cout << "===========================\n";
    cout << "1. Total Buku\n";
    cout << "2. Total Peminjaman Aktif\n";
    cout << "3. Total Pengunjung Hari Ini\n";
    cout << "4. Total Denda Belum Lunas\n";
    cout << "5. Keluar\n";
    cout << "Pilihan: ";
    cin >> pilihan;
    switch (pilihan) {
        case 1:
            cout << "\n[TODO] Tampil Total Buku...\n";
            break;
        case 2:
            cout << "\n[TODO] Tampil Total Peminjaman Aktif...\n";
            break;
        case 3:
            cout << "\n[TODO] Tampil Total Pengunjung Hari Ini...\n";
            break;
        case 4:
            cout << "\n[TODO] Tampil Total Denda Belum Lunas...\n";
            break;
        case 5:
            cout << "\nKeluar dari Dashboard...\n";
            break;
        default:
            cout << "\nPilihan Tidak Tersedia!\n";
    }
}
 
// =======================
// MENU UTAMA
// =======================
void menuUtama() {
    int pilihan;
    do {
        cout << "\n=====================================\n";
        cout << "          MENU UTAMA                 \n";
        cout << "  Login sebagai : " << namaAktif << "\n";
        cout << "=====================================\n";
        cout << "1.  Login & Logout\n";
        cout << "2.  Sistem SIMPU\n";
        cout << "3.  Sistem OPAG\n";
        cout << "4.  Sistem ASBU\n";
        cout << "5.  Kelola Data Buku\n";
        cout << "6.  Data Jurnal\n";
        cout << "7.  Peminjaman Buku\n";
        cout << "8.  Pengembalian Buku\n";
        cout << "9.  Sistem Denda\n";
        cout << "10. Cadangan Buku\n";
        cout << "11. Riwayat Peminjaman\n";
        cout << "12. Data Pengunjung\n";
        cout << "13. Informasi Perpustakaan\n";
        cout << "14. Jam Operasional\n";
        cout << "15. Dashboard\n";
        cout << "0.  Keluar\n";
        cout << "=====================================\n";
        cout << "Pilihan: ";
        cin >> pilihan;
        switch (pilihan) {
            case 1:  menuLogin();          break;
            case 2:  menuSIMPU();          break;
            case 3:  menuOPAG();           break;
            case 4:  menuASBU();           break;
            case 5:  menuDataBuku();       break;
            case 6:  menuJurnal();         break;
            case 7:  menuPeminjaman();     break;
            case 8:  menuPengembalian();   break;
            case 9:  menuDenda();          break;
            case 10: menuCadanganBuku();   break;
            case 11: menuRiwayat();        break;
            case 12: menuDataPengunjung(); break;
            case 13: menuInformasi();      break;
            case 14: menuJamOperasional(); break;
            case 15: menuDashboard();      break;
            case 0:
                cout << "\nKeluar dari program...\n";
                break;
            default:
                cout << "\nPilihan Tidak Tersedia!\n";
        }
    } while (pilihan != 0);
}
 
// =======================
// MAIN PROGRAM
// =======================
int main() {
    header();
    menuUtama();
    return 0;
}