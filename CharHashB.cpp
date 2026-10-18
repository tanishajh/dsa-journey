#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cout << "enter a string";
  cin >> s;
  int q;
  cout << "enter number of queries";
  cin >> q;
  while (q--)
  {
    char c;
    cin >> c;
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
      if (c == s[i])
      {
        count++;
      }
    }
    cout << count << '\n';
  }
  return 0;
}