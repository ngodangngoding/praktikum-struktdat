#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
  map<string, int> map1;

  // Menambahkan elemen ke map
  map1["satu"] = 1;
  map1["dua"] = 2;
  map1["tiga"] = 3;

  // Menampilkan isi dari map
  for (const auto& pair : map1) {
    cout << pair.first << ": " << pair.second << endl;
  }

  // Mengubah nilai dari sebuah elemen
  map1["dua"] = 20;

  // Menghapus elemen
  // 
  map1.erase("satu");

  return 0;
}