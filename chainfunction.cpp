#include <iostream>
using namespace std;
class buku

{
    string Judul;


public:
    buku setJudul(string Judul)
    {
        this->Judul = Judul;
        return *this; // chain function
    }
    string getJudul()
    {
        return this->Judul;
    }
} bukunya;







