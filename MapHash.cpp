#include <bits/stdc++.h>
using namespace std;

int main()
{
  cout << "enter number of elements";
  int n;
  cin >> n;
  int arr[n];
  cout << "enter elements";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  map<int, int> mpp;
  for (int i = 0; i < n; i++)
  {
    mpp[arr[i]]++;
  }

  int q;
  cout << "enter number of queris";
  cin >> q;
  while (q--)
  {
    int num;
    cin >> num;
    cout << "occurance are:";
    cout << mpp[num] << endl;
  }
  return 0;
}