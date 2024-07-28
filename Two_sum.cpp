#include<unordered_map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // create a map
        map<int,int>mpp;

        for(int i=0;i<nums.size();i++){
            int a=nums[i];
            int needMore=target-a;
            if(mpp.find(needMore)!=mpp.end()){
                return {mpp[needMore],i};
            }
            mpp[a]=i;
        }
        return {};   //return empty if no indexes are found
    }
};