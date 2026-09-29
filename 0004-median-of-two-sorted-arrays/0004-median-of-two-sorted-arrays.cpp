class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i, j, k, count, size, m, n, flag;
double temp,prev,div,x;
        m = nums1.size();
        n = nums2.size();
        div=2;

        size = m + n;
        
        i = 0;
        j = 0;
        k=0;
        temp =0;
        while (i < nums1.size() && j < nums2.size() && k != (size/2)+1) {
            if (nums1[i] < nums2[j]) {
              
                prev = temp;
                temp = nums1[i];
                  i++;
            } else {
                
                prev = temp;
                temp = nums2[j];
                j++;
            }
            k++;
        }
        while(i<nums1.size() && k!=(size/2)+1){
             prev = temp;
                temp = nums1[i];
                  i++;
 k++;
        }

         while(j<nums2.size() && k!=(size/2)+1){
             prev = temp;
                temp = nums2[j];
                  j++;
                   k++;

        }








        if(size%2==1){
            return temp;
        }else{
            return (temp+prev)/div;
        }
    }
};