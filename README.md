# TaskTrack-8A
## TaskTrack : Program Pencatatan dan Pengelolaan Tugas Harian
Banyak mahasiswa maupun pekerja sering kewalahan karena tidak memiliki sistem yang teratur untuk mencatat, mengatur, dan memprioritaskan tugas. Akibatnya, beberapa tugas sering terlupa, dikerjakan terlambat, atau bahkan terlewat sama sekali. Berdasarkan permasalahan tersebut, kami membuat sebuah program To-Do List yang dapat membantu pengguna mencatat dan mengelola tugas secara lebih terstruktur.

Program ini merupakan aplikasi sederhana berbasis C++ yang menggunakan konsep modular programming serta _file handling_. Seluruh data tugas disimpan pada file teks `tugas.txt`, sehingga pengguna dapat menambah, melihat, mencari, maupun menghapus tugas dengan mudah dan terorganisir. Dengan adanya program ini, diharapkan tidak ada lagi tugas yang terlewat dan pengguna dapat mengatur prioritas pekerjaan secara lebih efektif.

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
