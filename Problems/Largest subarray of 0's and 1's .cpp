//  Largest subarray of 0's and 1's

// Easy Accuracy: 38.92% Submissions: 45168 Points: 2
// Given an array of 0s and 1s. Find the length of the largest subarray with equal number of 0s and 1s.

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int maxLen(int arr[], int n);

int main()
{
  // your code goes here
  int T;
  cin >> T;
  while (T--)
  {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
      cin >> a[i];
    cout << maxLen(a, n) << endl;
  }
  return 0;
} // } Driver Code Ends

/*You are required to complete this method*/

// arr[] : the input array containing 0s and 1s
// N : size of the input array

// return the maximum length of the subarray
// with equal 0s and 1s
int maxLen(int arr[], int N)
{

  unordered_map<int, int> map;

  int sum = 0, max_len = 0;

  for (int i = 0; i < N; i++)
    arr[i] = (arr[i] == 0) ? -1 : 1;

  for (int i = 0; i < N; i++)
  {

    sum += arr[i];

    if (sum == 0)
    {
      max_len = i + 1;
    }

    if (map.find(sum) != map.end())
    {
      if (i - map[sum] > max_len)
      {
        max_len = i - map[sum];
      }
    }
    else
    {
      map[sum] = i;
    }
  }

  return max_len;
}
