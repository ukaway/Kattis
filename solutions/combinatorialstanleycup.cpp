#include <iostream>
#include <bitset>
#include <cmath>
using namespace std;

int main() {
  long long n; cin >> n;
  bitset<32> b(n);
  int x = b.count();
  cout << pow(2, x) << endl;

  return 0;
}
