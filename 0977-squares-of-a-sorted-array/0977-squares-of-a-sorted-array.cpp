class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i;
        vector<int>v;
        for(i=0;i<nums.size();i++){
            v.push_back(nums[i]*nums[i]);
        }

        sort(v.begin(),v.end());
        return v;
        
    }
};