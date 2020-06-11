#include "std_lib_facilities.h"

class Bad_area {

};

int area (int length, int width) {
  if (length < 0 || width < 0) {
    throw Bad_area{};
  }
  return length * width;
}

int main () {
  try {
    int x = -1;
    int y = 2;
    int z = 4;

    int area1 = area(x, y);
    int area2 = area(y, z);
  }

  catch (Bad_area) {
    cout << "Oops! Bad arguments to area()\n";
  }

}

#include "std_lib_facilities.h"

void error(string s) {
  throw runtime_error(s);
}

int main() {
  try {
    
    return 0; // success
  }
  catch (runtime_error& e) {
    cerr <<"Runtime error: " << e.what() <<"\n";
    keep_window_open();
    return 1;
  }
}
