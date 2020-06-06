#include "std_lib_facilities.h"

int main () {

  double num;
  double double1;
  double double2;
  vector<double> doubles;

  while (cin >> num) {
    doubles.push_back(num);
  }
  double sum = 0;
  
   for (double x : doubles) {
    sum += x;
  }
  sort(doubles);
  cout << "The smallest so far: " << doubles[0] <<"\n";
  cout << "The largest so far: " << doubles[doubles.size()-1] <<"\n";
  cout <<"sum = " <<sum;
}

