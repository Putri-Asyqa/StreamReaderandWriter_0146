#include <iostream>
using namespace std;

int main()
{
    //membuat isi dari try untuk pengujian error
    try
    {
        cout << "Selamat belajar di prodi TI UMY" << endl;
        //throw 0.5; // melemperkan sebuah interger maka
        cout << "Pernyataan tidak akan ditampilkan" << endl;
    }
    //kondisi jika throw yg bertipe data interger
    catch(int a)
    {
        cout << "Pengecualian akan di eksekusi" << endl;
    }
}