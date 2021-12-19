#include <iostream>
using namespace std;

int main(){
  bool x = true;
  bool y = false;
  bool hasil;

  hasil = x && x;
  cout << "Hasil dari x && x: " << hasil;

  hasil = x && y;
  cout << "\nHasil dari x && y: " << hasil;

  hasil = x || y;
  cout << "\nHasil dari x || y: " << hasil;

  hasil = y || y;
  cout << "\nHasil dari y || y: " << hasil;

  hasil = !x;
  cout << "\nHasil dari !x\t : " << hasil;

  hasil = !y;
  cout << "\nHasil dari !y\t : " << hasil;

  return 0;
}
