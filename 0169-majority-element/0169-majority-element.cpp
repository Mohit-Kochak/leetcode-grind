class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int i,count,val;
        count=0;
        val=INT_MIN;
i=0;
        while(i<nums.size()){
            if(count==0){
                val=nums[i];
                count++;
            }else if(val==nums[i]){
                
                    count++;
                
            }else{
                count--;
            }
            i++;
        }

        return val;
        
    }
};