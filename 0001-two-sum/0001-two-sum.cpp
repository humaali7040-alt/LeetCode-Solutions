class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int st = 0;
        int end = 0;
        for(st =0 ; st < n-1 ; st++){
           int curr_sum = 0;
            for( end = st+1 ; end < n; end++){
                curr_sum = nums[st] + nums[end];
            if( curr_sum == target){
                    return {st , end};
                 }
            }
        }
            return {};
    }
     };