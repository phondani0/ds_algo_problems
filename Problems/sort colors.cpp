// 75. Sort Colors

// Medium

// Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

// Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  void sortColors(vector<int> &nums)
  {
    int n = nums.size();

    int low = 0, mid = 0, high = n - 1;

    while (true)
    {

      if (mid > high)
        break;

      if (nums[mid] == 0)
      {
        int t = nums[mid];
        nums[mid] = nums[low];
        nums[low] = t;
        low++;
        mid++;
      }
      else if (nums[mid] == 2)
      {
        int t = nums[mid];
        nums[mid] = nums[high];
        nums[high] = t;
        high--;
      }
      else
        mid++;
    }
  }
};