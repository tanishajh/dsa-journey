#include <bits/stdc++.h>
using namespace std;

void RecursiveFunction()
{
  for (int i = 0; i <= 10; i++)
  {
    RecursiveFunction();
    cout << "hello" << endl;
  }
  cout << "hello";
  RecursiveFunction();
}

int main()
{
  RecursiveFunction();
  return 0;
}