#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cout << "enter array size";
  cin >> n;
  int arr[n];
  cout << "enter array elements";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int hash[30] = {0};
  for (int i = 0; i < n; i++)
  {
    hash[arr[i]] += 1;
  }

  int q;
  cout << "enter number of queries";
  cin >> q;
  while (q--)
  {
    int nums;
    cin >> nums;
    cout << hash[nums] << endl;
  }
  return 0;
}