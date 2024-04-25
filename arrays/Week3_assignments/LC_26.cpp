// 26. Remove Duplicates from Sorted Array
// Easy

// Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1;
       for(int i = 1; i<nums.size();i++){
            if(nums[i] != nums[i - 1]){
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
      }
};

// another way to solve this problem
//  int j = 1;
//        for(int i = 1; i<nums.size();i++){
//             if(nums[i] == nums[i - 1]){
                
//             }
//            else if(nums[i]!= nums[i-1]){
//                 nums[j] = nums[i];
//                j++;
//            }
//         }
//         return j;