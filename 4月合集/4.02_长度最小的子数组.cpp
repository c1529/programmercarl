class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int res = INT_MAX;
        int left=0,right=0;
        int sum = 0;
        for(;right<nums.size();right++){
            sum+=nums[right];
            while(sum>=target){
                res = res<(right-left+1)?res:(right-left+1);
                sum-=nums[left++];
            }
        }
        return res==INT_MAX?0:res;
    }
};

// 怎么说呢，先是   res = res<(right-left+1)?res:(right-left+1);   搞错了，搞成sum = sum<(right-left+1)?res:(right-left+1);
// 这题用的是滑动窗口，是双指针的一种

