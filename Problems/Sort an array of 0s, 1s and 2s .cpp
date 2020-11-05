// 12. Sort an array of 0s, 1s and 2s
// Easy Accuracy: 51.36% Submissions: 20037 Points: 2
// Given an array of size N containing 0s, 1s, and 2s; sort the array in ascending order.

#include <bits/stdc++.h>
using namespace std;
void sort012(int[], int);

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
    {
      cin >> a[i];
    }

    sort012(a, n);

    for (int i = 0; i < n; i++)
    {
      cout << a[i] << " ";
    }

    cout << endl;
  }
  return 0;
}

// } Driver Code Ends

void sort012(int arr[], int n)
{
  int low = 0, mid = 0, high = n - 1;

  while (mid <= high)
  {
    if (arr[mid] == 2)
    {
      swap(arr[mid], arr[high]);
      high--;
    }
    else if (arr[mid] == 0)
    {
      swap(arr[mid], arr[low]);
      low++;
      mid++;
    }
    else
    {
      mid++;
    }
  }
}