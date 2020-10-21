// Medium Accuracy: 38.31% Submissions: 8643 Points = 4
// You are given an array arr[] of N integers including 0. The task is to find the smallest positive number missing from the array.
// Time Complexity: O(N)
// space: O(N), @TODO: expected O(1)

#include <bits/stdc++.h>
using namespace std;

// Function to find missing integer in array
// arr: input array
// n: size of array
int findMissing(int arr[], int n)
{

  map<int, int> hm;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] > 0)
    {
      hm[arr[i]] = 1;
    }
  }

  for (int i = 1; i <= n + 1; i++)
  {
    if (hm[i] == 0)
      return i;
  }
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
      cin >> arr[i];

    cout << findMissing(arr, n) << endl;
  }
  return 0;
}