class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size()-1;
        vector<int> res(nums.size(),0);
        for(int i=0,j=nums.size()-1;i<=j;){
            if(nums[i]*nums[i]<nums[j]*nums[j]){
                res[n--] = nums[j]*nums[j];
                j--;
            }else{
                res[n--] = nums[i]*nums[i];
                i++;
            }
        }
        return res;
    }
};
// 双指针确实是解决大部分数组的问题的最优解
// 好好思考一下代码为什么  i<=j而不是i=j
//  i=j是要处理最后的元素
