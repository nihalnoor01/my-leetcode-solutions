class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         
        map<int,int> MyMap;
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            int moreNeeded=target-nums[i];
            if(MyMap.find(moreNeeded)!=MyMap.end()){
                return {MyMap[moreNeeded],i};
            }MyMap[num]=i;
        }return{};
}};
