class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i,j,x,y,temp,count,val,flag;

      temp=nums.size();
        vector<int>v(temp,0);
        y=v.size();
        y--;
        i=0;
        j=nums.size();
        j--;
        x=0;

        while(i<=j){
            if(nums[i]*nums[i]>nums[j]*nums[j]){
                v[y]=nums[i]*nums[i];
                i++;
                y--;
            }else{
                v[y]=nums[j]*nums[j];
                j--;
                y--;

            }
        }

        return v;
        
    }
};