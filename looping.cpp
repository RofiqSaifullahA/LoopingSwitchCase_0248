#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
  int couter;
  int i;
  int perulanganWhile = 0;
  int perulanganDO = 0;

  // Loop with for
  // Loop for ascending
  for(couter = 0; couter < 5; couter++){
    cout << "Nilai couter = " << couter << " TI UMY" << endl;
  }

  cout << "Nilai couter terakhir = " << couter << endl << endl;

  // Loop for descending
  for (couter = 5; couter >= 0; couter--){
    cout << "Nilai couter = " << couter << " TI UMY" << endl;
  }

  cout << "Nilai couter terakhir = " << couter << endl << endl;
  
  // Looping with while
  srand(time(0));
  i = rand() % 10;

  cout << "Nilai awal i = " << i << endl;
  while(i < 7){
    cout << "Nilai i = " << i << " TI UMY" << endl;
    i = rand() % 10;
    perulanganWhile++; 
  }

  cout << "Jumlah perulangan = " << perulanganWhile << endl;
  cout << "Nilai akhir i = " << i << endl << endl;

  // Loop with do while
  cout << "Perulangan Do While = " << endl;
  do {
    cout << "Nilai i = " << i << " TI UMY" << endl;
    i = rand() % 10;
    perulanganDO++;
  } while(i < 7);  // Corrected condition: keep looping until i is >= 7
  
  cout << "Jumlah Perulangan = " << perulanganDO << endl;
  cout << "Nilai akhir i = " << i << endl;
}
