class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int end = nums.size()-1;
        int start = 0;
         
        while(start < end){
            if( nums[start]%2==0){
                  start++;
             }
            else if( nums[end]%2 != 0){
                end--;
            }
            else{
                swap(nums[start] , nums[end]);
                end--;
                start++;
            }
        }
        return nums;
    }
};