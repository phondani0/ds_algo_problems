// Minimum Swaps to Sort
// Medium Accuracy: 50.0% Submissions: 31841 Points: 4
// Given an array of integers. Find the minimum number of swaps required to sort the array in non-decreasing order.

// Input:
// The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. Each test case contains an integer N denoting the no of element of the array A[ ]. In the next line are N space separated values of the array A[ ] .

// ===========================

// T L E = TIME LIMIT EXCEEDED

// ===========================

// C++ program to find minimum number of swaps
// required to sort an array
#include <bits/stdc++.h>
using namespace std;

int minSwaps(int A[], int N);

// Driver program to test the above function
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
      cin >> a[i];
    cout << minSwaps(a, n) << endl;
  }
}

// } Driver Code Ends

void swap(int arr[], int i, int j)
{
  int temp = 0;

  temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

int minSwaps(int arr[], int n)
{

  map<int, int> mp;

  int temp[n], swaps = 0;

  for (int i = 0; i < n; i++)
  {
    temp[i] = arr[i];
  }

  sort(temp, temp + n);

  for (int i = 0; i < n; i++)
  {
    mp[arr[i]] = i;
  }

  for (int i = 0; i < n; i++)
  {
    if (arr[i] != temp[i])
    {
      int init = arr[i];
      int x = mp.find(temp[i])->second;
      swap(arr, i, x);
      swaps++;

      // update values in map
      mp[init] = mp.find(temp[i])->second;
      mp[temp[i]] = i;
    }
  }
  return swaps;
}