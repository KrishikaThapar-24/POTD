//1 feb 2025
//3151. Special Array I

class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int n = nums.size();

        for(int i = 0; i <= n-2; i++) {
            if(nums[i]%2 == nums[i+1]%2) {
                return false;
            }
        }

        return true;
    }
};
