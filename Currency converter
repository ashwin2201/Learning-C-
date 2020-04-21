#include "std_lib_facilities.h"

int main() {
  constexpr double sgd_per_pound = 1.77;
 
  double money = 1;
  char currency = 0;

  cout <<"Please enter a length followed by P/$: ";
  cin >> money >> currency;

  switch (currency) {
  case '$':
    cout << money << currency <<" in Pound Sterling == " << "£" << money/sgd_per_pound <<"\n";
    break;
  case 'P':
    cout << money << currency <<" in Singapore dollars == " << "$" << money*sgd_per_pound <<"\n";
    break;
  default:
    cout <<"Program couldn't compute: Please go back and follow the instructions properly";
  }
}
