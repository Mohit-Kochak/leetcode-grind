class Solution {
public:
    int firstUniqChar(string s) {
        int i,j,k,temp,count,val,flag,x;
        vector<int>v(27,0);

        for(i=0;i<s.length();i++){
            v[s[i]-97]++;
        }
        for(j=0;j<s.length();j++){
            if((v[s[j]-97])==1) return j;
        }
        return -1;
        
    }
};