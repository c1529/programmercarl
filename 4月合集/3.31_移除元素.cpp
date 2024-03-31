class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size()-1;
        for(int i=0;i<n;i++){
            if(nums[i]==val){
                // 为了防止换位过后的i还是等于val，i--，进行二次判定，相当于直到此位置！=val为止
                swap(nums[i--],nums[n--]);
            }
        }
        return n+1;
    }
};
// i--  相当于下次判定还是当前nums[i]的值，因为有可能会因为当前nums[j]是val，而下次交换就是nums[j-1]了
