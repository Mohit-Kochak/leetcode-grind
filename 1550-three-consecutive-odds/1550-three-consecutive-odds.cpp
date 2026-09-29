class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int i,j,k,temp,size,count,flag;
       
        size=3;
         i=0;
        while(i+size<=arr.size()){
            flag=1;
            for(j=i;j<i+size && flag==1;j++){
                if(arr[j]%2==0){
                    flag=0;
                }
            }
            if(flag==1){
                return true;
            }
            i++;
        }
        return false;
        
    }
};