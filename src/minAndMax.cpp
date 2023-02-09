// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K
#include <bits/stdc++.h>
using namespace std;
int main() {
  int A, B, C;
  cin >> A >> B >> C;
  if (A <= B && A <= C) {
    cout << A << " ";
    if (B <= C) {
      cout << C << endl;
    } else {
      cout << B << endl;
    }
  } else if (B <= A && B <= C) {
    cout << B << " ";
    if (A <= C) {
      cout << C << endl;
    } else {
      cout << A << endl;
    }
  } else {
    cout << C << " ";
    if (A <= B) {
      cout << B << endl;
    } else {
      cout << A << endl;
    }
  }
  return 0;
}
