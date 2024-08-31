// problem no. 442 | find all duplicates in an array
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector <int> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i+1>=nums.size()) break;
            if(nums[i]==nums[i+1]){
                ans.push_back(nums[i]);
                i++;
            }
        }
        return ans;
    }
};