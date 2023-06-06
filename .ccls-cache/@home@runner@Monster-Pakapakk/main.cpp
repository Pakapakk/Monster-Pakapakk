#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "monster.h"
#include "Thanos.h"

int main(int argc, char* argv[]) {
  Thanos T;
  int n;
  int hp_in;

  cout << "How many monsters? ";
  cin >> n;

  monster *m = new monster[n];

  for(int i = 0; i < n; i++){
    cout << "Input monster's HP : ";
    cin >> hp_in;
    m[i].set_hp(hp_in);
  }
  
  cout << "\n" << "Thanos is coming." << "\n";
  T.operator++();
  m[1].attack(m[2]);
  cout << "Thanos is coming." << "\n";
  T.operator++();
  
    T.snap_finger(m, n);
  
  cout << "Thanos is coming." << "\n";
  T.operator++();
  cout << "Thanos is coming." << "\n";
  T.operator++();
  
    T.snap_finger(m, n);

  cout << "Thanos is coming." << "\n";
  T.operator++();
  cout << "Thanos is coming." << "\n";
  T.operator++();
  cout << "Thanos is here!" << "\n";
    T.snap_finger(m, n);

  delete []m;
  
  return 0;
}