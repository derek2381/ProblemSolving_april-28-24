// problem link
// https://leetcode.com/problems/find-the-integer-added-to-array-ii/description/

class Solution {
public:
    int minimumAddedInteger(vector<int>& nums1, vector<int>& nums2) {
        int min = INT_MAX;

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int n, x, count = 0;
        n = nums1.size();

        for(int i = 0; i < n;i++){
            count = 0;
            x = nums2[0] - nums1[i];
            int j = 0;
            for(int k = 0;k < n && j < nums2.size();k++){
                if(nums1[k] + x != nums2[j]){
                    count++;
                }else{
                    j++;
                }
            }

            if(count < 3){
                min = (min > x)? x : min;
            }
        }
        return min;
    }
};
