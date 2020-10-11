// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
// There is only one duplicate number in nums, return this duplicate number.
// Time Complexity: O(n), O(1) extra space
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int findDuplicate(vector<int> &nums)
  {

    int slow = nums[0], fast = nums[0];

    while (true)
    {
      slow = nums[slow];
      fast = nums[nums[fast]];

      if (slow == fast)
      {
        slow = nums[0];
        break;
      }
    }

    while (slow != fast)
    {
      slow = nums[slow];
      fast = nums[fast];
    }

    return fast;
  }
};