# TaskTrack-8A
## TaskTrack: Program Pencatatan dan Pengelolaan Tugas Harian
Program ini adalah aplikasi sederhana untuk mengelola daftar tugas menggunakan bahasa C++ dengan konsep modular programming dan file handling. Semua data disimpan dalam file teks `tugas.txt`.


## ✨ Fitur Utama


### Tambah Tugas
Menyimpan nama tugas, deadline, dan prioritas (Tinggi/Sedang/Rendah).

### Lihat Tugas
Menampilkan seluruh tugas dari file.

### Hapus Semua Tugas
Mengosongkan file dengan konfirmasi.

### Cari Tugas
Menemukan tugas berdasarkan kata kunci.

### Hitung Total Tugas
Menghitung jumlah baris/tugas di file.


## 📁 Struktur Project
```
┌── main.cpp
├── tambah.cpp
├── lihat.cpp
├── hapus.cpp
├── cari.cpp
├── hitung.cpp
└── tugas.txt ← file data yang dihasilkan otomatis
```

## 🚀 Cara Menjalankan

Buka folder project di VSCode.

Compile:
```
g++ main.cpp -o tugas
```

Jalankan:
```
./tugas
```

## 🧩 Menu Program
1. Tambah Tugas
2. Lihat Semua Tugas
3. Hapus Semua Tugas
4. Cari Tugas
5. Hitung Total Tugas
6. Keluar


## 📌 Catatan

Program ini menggunakan:
```
ifstream, ofstream

ios::app, ios::trunc

getline

Modular programming sederhana

Tanpa vector / struct / fitur lanjutan
```
## 🎉 Penutup

Project ini cocok untuk latihan pengolahan file dan pemrograman modular di C++.
Sederhana, mudah dipahami, dan siap dikembangkan lebih lanjut!
