// problem link
// https://leetcode.com/problems/find-the-integer-added-to-array-i/description/

class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int sum1 = 0, sum2 = 0;

        for(int i : nums1){
            sum1 += i;
        }

        for(int i : nums2){
            sum2 += i;
        }
        int n = nums1.size();

        sum1 /= n;
        sum2 /= n;
        return sum2 - sum1;
    }
};
