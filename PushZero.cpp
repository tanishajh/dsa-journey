#include <bits/stdc++.h>
using namespace std;

// push zeros to the end

int main()
{
  int arr[] = {1, 2, 0, 3, 0, 0, 4, 5, 6};
  int n = sizeof(arr) / sizeof(arr[0]);
  // step 1
  int j = -1;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == 0)
    {
      j = i;
      break;
    }
  }
  for (int i = j + 1; i < n; i++)
  {
    if (arr[i] != 0)
    {
      swap(arr[i], arr[j]);
      j++;
    }
  }
  for (int i = 0; i < n; i++)
  {
    cout << arr[i];
  }
  return 0;
}