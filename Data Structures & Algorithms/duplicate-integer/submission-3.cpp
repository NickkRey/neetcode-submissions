class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.size()<=0){
            return false;
        }
        sort(nums.begin(),nums.end());
        bool res=false;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                res=true;
            }
        }
        return res;
    }
};