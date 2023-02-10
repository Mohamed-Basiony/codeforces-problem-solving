// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N
#include <bits/stdc++.h>
using namespace std;
int main() {
  char myChar, charResult;
  cin >> myChar;
  int ASCII = myChar;
  if (ASCII >= 97 && ASCII <= 122) {
    ASCII -= 32;
    charResult = ASCII;
    cout << charResult << endl;
  } else {
    ASCII += 32;
    charResult = ASCII;
    cout << charResult << endl;
  }
}
