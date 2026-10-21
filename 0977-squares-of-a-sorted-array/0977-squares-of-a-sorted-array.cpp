class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i,j,k,temp,count,val,y;
        // vector<int>v;
        y=nums.size();
        vector<int>v(y,0);

        i=0;
        y--;
        j=y;
// y--;=
        while(i<=j && y>=0){
            if(nums[i]*nums[i]>nums[j]*nums[j]){
                v[y]=nums[i]*nums[i];
                i++;
            }else{
                v[y]=nums[j]*nums[j];
                j--;
            }
            y--; 
        }
        return v;
        
    }
};