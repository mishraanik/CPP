#include <iostream>
using namespace std;

char getMaxaOcc(string s) {
  int arr[26] = {0};

  // Created an array of count of characters

  for (int i = 0; i < s.length(); i++) {
    char ch = s[i];

    int number = 0;
    // shows case of lower case
    if (ch >= 'a' && ch <= 'z') {
      number = ch - 'a';

    }
    // shows case of Upper case
    else {
      number = ch - 'A';
    }
    arr[number]++;
  }
  int maxi = -1;
  for (int i = 0; i < s.length(); i++) {
    maxi = max(maxi, arr[number])
  }
}
}
int main() {
  cout << "Hello World!\n";

  int n;
  string s;
  cin >> n;
}