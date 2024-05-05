#include <iostream>
using namespace std;

int add(int a, int b){
    return a+b;
}

float Multiple(float a, float b){
    return a*b;
}

int main(){

    int tambah1 = 2; 
    int tambah2 = 3;
    float kali1 = tambah1; 
    float kali2 = tambah2;

    

    cout << "Masukkan hasil penjumlahan: " << add(tambah1,tambah2) << endl;
    cout << "Masukkan hasil perkalian: " << Multiple(kali1,kali2) << endl;

}

