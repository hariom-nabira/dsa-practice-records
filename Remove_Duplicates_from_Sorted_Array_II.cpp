// solutions me se uthai hui smart approach

class Solution {
 public:
  int removeDuplicates(vector<int>& nums) {
    int i = 0;

    for (const int num : nums)
      if (i < 2 || num > nums[i - 2]) // i<2 kyuki pehle 2 elements to aaenge hi
        nums[i++] = num;              // i is always 1 ahead of accepted array,
                                      // therefore if nums[i-2]==num(current value being judged)
                                      // that means num ke 2 already ho gye
    return i;
  }
};
// Title: Remove Duplicates from Sorted Array II
