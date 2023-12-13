#include <iostream>

using namespace std;

unsigned long long faktorijel(int k) {
  unsigned long long p = 1;
  for (int i = 2; i <= k; i++)
    p *= i;
  return p;
}

int main() {
  int n;
  cin >> n;
  for(int k = 1; k <= n; k++)
    cout << faktorijel(k) << endl;
  cout << ' ';
  return 0;
}