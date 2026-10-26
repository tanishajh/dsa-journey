#include <bits/stdc++.h>
using namespace std;

void print(int i, int n)
{
  if (i > n)
  {
    return;
  }
  cout << "hello tanisha" << endl;
  print(i + 1, n);
}

int main()
{
  int n;
  cout << "enter the times you want your name to be printed";
  cin >> n;
  print(1, n);
}