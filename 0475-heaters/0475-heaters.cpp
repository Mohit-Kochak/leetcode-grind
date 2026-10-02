class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {

        int i,j,k,temp,val,count,flag,p1,p2,house_max,house_min,heater_min,heater_max,ans,mid,min,max;
house_min=houses[0];
house_max=houses[0];
        for(i=0;i<houses.size();i++){
            if(house_min>houses[i]){
                house_min=houses[i];
            }

            if(house_max<houses[i]){
                house_max=houses[i];
            }
        }


        heater_max=heaters[0];
        heater_min=heaters[0];
        for(i=0;i<heaters.size();i++){
            if(heater_max<heaters[i]){
                heater_max=heaters[i];
            }
            if(heater_min>heaters[i]){
                heater_min=heaters[i];
            }
        }
// cout<<max<<min<<<<endl;
cout<<"houses_max"<<house_max<<" housemin"<<house_min<<endl;
cout<<"heater_max"<<heater_max<<" heatermin"<<heater_min<<endl;


p1=abs(house_min-heater_max);
p2=abs(heater_min-house_max);
cout<<"p1 "<<p1<<"p2 "<<p2<<endl;
        flag=0;
        if(heater_max>house_max){
            max=heater_max;
        }else{
            max=house_max;
        }
        // temp=max-min;
        cout<<"max"<<max<<endl;
        min=0;
        mid=0;
        sort(houses.begin(),houses.end());
        sort(heaters.begin(),heaters.end());
        while(min<=max){
            mid=min+((max-min)/2);
             cout<<min<<" min"<<max<<"max"<<mid<<"mid"<<endl;
            i=0;
            j=0;
            
            while(i<houses.size() && j<heaters.size() ){
               if(abs(houses[i]-heaters[j])<=mid){
                i++;

               }else{
                j++;
               }

            }
            if(i==houses.size()){
                cout<<"i"<<i<<endl;
                ans=mid;
                max=mid-1;
                 cout<<"ppp"<<endl;

            }else{
                cout<<"i"<<i<<endl;
                min=mid+1;
                 cout<<"ooo"<<endl;
            }
           
           
        }













        return min;
        
    }
};