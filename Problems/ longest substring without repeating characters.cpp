// 12. Longest Substring Without Repeating Characters
// Medium Accuracy: 28.21% Submissions: 6484 Points: 4
// Given a string S, find the length of its longest substring that does not have any repeating characters.

// Example 1:

// Input:
// S = geeksforgeeks
// Output: 7
// Explanation: The longest substring
// without repeated characters is "ksforge".

//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

int SubsequenceLength(string s);

//User function Template for C++

// s is the given string
int SubsequenceLength(string s)
{
  int visited[26] = {0};

  int len = s.length();
  int i = 0, j = 0, max_sub = INT_MIN;

  if (len == 0)
    return 0;

  while (j < len)
  {
    if (visited[s[j] - 97] != 0)
    {
      visited[s[i] - 97] = 0;
      i++;
    }
    else
    {
      visited[s[j] - 97] = 1;
      max_sub = max(max_sub, j - i + 1);
      j++;
    }
  }

  return max_sub;
}

int main()
{
  int t;
  cin >> t;
  cin >> ws;
  while (t--)
  {
    string str;
    getline(cin, str);
    cout << SubsequenceLength(str) << "\n";
  }
  return 0;
}