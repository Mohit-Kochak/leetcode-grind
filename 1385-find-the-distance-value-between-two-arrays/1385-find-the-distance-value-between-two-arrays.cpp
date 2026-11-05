class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int i,j,temp,count,val,flag,ans;

        // sort(arr1.begin(),arr1.end());
        // sort(arr2.begin(),arr2.end());
ans=0;
        for(i=0;i<arr1.size();i++){
            for(j=0;j<arr2.size();j++){
                if(abs(arr1[i]-arr2[j])<=d){
                    break;
                }
            }
            if(j==arr2.size()){
                cout<<arr1[i]<<endl;
                ans++;
            }
        }

        return ans;
        
    }
};