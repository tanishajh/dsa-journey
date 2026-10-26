#include <bits/stdc++.h>
using namespace std;

void printNos(int i, int n)
{
  if (i > n)
  {
    return;
  }
  cout << i << endl;
  printNos(i + 1, n);
}

int main()
{
  int n;
  cout << "enter till what numbers you want to print";
  cin >> n;
  printNos(1, n);
}