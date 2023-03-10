#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n; cin >> n;
  int k = ceil(log2(n));
  cout << k+1 << endl;
  return 0;
}
