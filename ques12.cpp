// Duplicate the number
// https://leetcode.com/problems/find-the-duplicate-number/description/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<bool> v(nums.size(),false);
        int rc;
        for(auto i : nums){
            if(v[i-1]){
                rc = i;
                break;
            }
            v[i-1] = true;
        }
        return rc;
    }
};