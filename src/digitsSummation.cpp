// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/F
#include <bits/stdc++.h>
using namespace std;
int main() {
  long long num1, num2;
  cin >> num1 >> num2;
  int lastDigitOfNum1 = num1 % 10;
  int lastDigitOfNum2 = num2 % 10;
  cout << lastDigitOfNum1 + lastDigitOfNum2 << endl;
}
