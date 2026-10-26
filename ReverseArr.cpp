#include <bits/stdc++.h>
using namespace std;

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6};
  int n = sizeof(arr) / sizeof(arr[0]);
  for (int i = 0; i < n; i++)
  {
    for (int j = n - 1; j <= 0; j++)
    {
      arr[i] = arr[j];
    }
  }
}