class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> nums2;
        for(int i=0;i<nums.size();i++){
            nums2.push_back({nums[i],i});
        }

        sort(nums2.begin(),nums2.end());
        int pointer1=0;
        int pointer2=nums.size()-1;
        while(pointer1<pointer2){
            if(nums2[pointer1].first+nums2[pointer2].first==target){
                return {min(nums2[pointer1].second,nums2[pointer2].second),
                        max(nums2[pointer1].second,nums2[pointer2].second)};
            }
            else if(nums2[pointer1].first+nums2[pointer2].first<target){
                pointer1++;
            }
            else{
                pointer2--;
            }
        }
        return {};
    }
};
