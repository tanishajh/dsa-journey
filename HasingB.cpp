#include <bits/stdc++.h>
using namespace std;

int HashingBrute(vector<int> nums, int target)
{
  int n = nums.size();
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    if (nums[i] == target)
    {
      count++;
    }
  }
  return count;
}

int main()
{
  int n;
  cout << "enter target";
  cin >> n;
  vector<int> nums(n);
  cout << "enter elements";
  for (int j = 0; j < n; j++)
  {
    cin >> nums[j];
  }
  int target;
  cout << "enter target";
  cin >> target;
  cout << HashingBrute(nums, target);
  return 0;
}