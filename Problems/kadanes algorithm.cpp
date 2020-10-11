
#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(int arr[], int n)
{

  int max_sum = INT_MIN, sum = 0;

  for (int i = 0; i < n; i++)
  {

    sum += arr[i];

    if (sum < 0)
      sum = 0;
    else if (sum > max_sum)
      max_sum = sum;
  }

  return max_sum;
}

int main()
{
  int t, n;

  cin >> t;   //input testcases
  while (t--) //while testcases exist
  {

    cin >> n; //input size of array

    int a[n];

    for (int i = 0; i < n; i++)
      cin >> a[i]; //inputting elements of array

    cout << maxSubarraySum(a, n) << endl;
  }
}