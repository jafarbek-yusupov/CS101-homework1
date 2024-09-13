#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int groups = n/50;
  cout << 50 * ( 1 - n/50. + n/50)  << endl;
  return 0;
}
