#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa_Struct {
    string nama;
    int umur;
};

class Mahasiswa_Class {
    private:
        string nama;
        int umur;

    public:
    Mahasiswa_Class(string name, int age) : nama(name), umur(age) {}

    string getName() { return nama; }
    int getAge() { return umur; }
};

int main() {
    // Inisialisasi struct Mahasiswa
    Mahasiswa_Struct s1 = {"Dian", 22};
    Mahasiswa_Struct s2 = {"Bambang", 23};

    // Inisialisasi class Mahasiswa
    Mahasiswa_Class c1("Ramadhani Akbar", 20);
    Mahasiswa_Class c2("Siti Nurhaliza", 25);

    // Print struct Mahasiswa
    cout << "Struct" << endl;
    cout << "Nama: " << s1.nama << ", Umur: " << s1.umur << endl;
    cout << "Nama: " << s2.nama << ", Umur: " << s2.umur << endl;

    cout << endl;

    // Print class Mahasiswa
    cout << "Class" << endl;
    cout << "Nama: " << c1.getName() << ", Umur: " << c1.getAge() << endl;
    cout << "Nama: " << c2.getName() << ", Umur: " << c2.getAge() << endl;

    return 0;
}
