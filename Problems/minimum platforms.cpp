// Minimum Platforms
// Medium Accuracy: 41.23% Submissions: 8618 Points: 4
// Given arrival and departure times of all trains that reach a railway station. Your task is to find the minimum number of platforms required for the railway station so that no train waits.
// Note: Consider that all the trains arrive on the same day and leave on the same day. Also, arrival and departure times will not be same for a train, but we can have arrival time of one train equal to departure of the other.
// In such cases, we need different platforms, i.e at any given instance of time, same platform can not be used for both departure of a train and arrival of another.

// Example 1:

// Input: N = 6
// arr[] = [0900  0940 0950  1100 1500 1800]
// dep[] = [0910 1200 1120 1130 1900 2000]
// Output: 3
// Explanation:
// Minimum 3 platforms are required to
// safely arrive and depart all trains.

// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;

int findPlatform(int arr[], int dep[], int n)
{
  sort(arr, arr + n);
  sort(dep, dep + n);

  int pf = 1, max_pf = 1;

  for (int i = 1, j = 0; i < n && j < n;)
  {
    if (arr[i] <= dep[j])
    {
      pf++;
      i++;
      if (pf > max_pf)
      {
        max_pf = pf;
      }
    }
    else
    {
      pf--;
      j++;
    }
  }
  return max_pf;
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
    int dep[n];
    for (int i = 0; i < n; i++)
      cin >> arr[i];
    for (int j = 0; j < n; j++)
    {
      cin >> dep[j];
    }
    cout << findPlatform(arr, dep, n) << endl;
  }
  return 0;
}