// 15. Trapping Rain Water
// Medium Accuracy: 49.62% Submissions: 19666 Points: 4
// Given an array arr[] of N non-negative integers representing the height of blocks at index i as Ai where the width of each block is 1. Compute how much water can be trapped in between blocks after raining.
// The structure is like below:
// |  |
// |_|
// We can trap 2 units of water in the middle gap.

// Time Complexity: O(N).
// Auxiliary Space: O(N).

#include <bits/stdc++.h>

using namespace std;

// function to find the trapped water in between buildings
// arr: input array
// n: size of array
int trappingWater(int arr[], int n)
{

  int left_max[n];
  int right_max[n];

  left_max[0] = arr[0];
  for (int i = 1; i < n; i++)
  {
    left_max[i] = max(left_max[i - 1], arr[i]);
  }

  right_max[n - 1] = arr[n - 1];
  for (int i = n - 2; i >= 0; i--)
  {
    right_max[i] = max(right_max[i + 1], arr[i]);
  }
  int res = 0;
  for (int i = 0; i < n; i++)
  {
    res += min(left_max[i], right_max[i]) - arr[i];
  }

  return res;
}

int main()
{

  int t;
  //testcases
  cin >> t;

  while (t--)
  {
    int n;

    //size of array
    cin >> n;

    int a[n];

    //adding elements to the array
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }

    //calling trappingWater() function
    cout << trappingWater(a, n) << endl;
  }

  return 0;
}