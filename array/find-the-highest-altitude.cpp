class Solution {
public:
    int largestAltitude(vector<int>& gain) {
int temp;
int high=0;

for(int i=0;i<gain.size();i++){

    temp=temp+gain[i];
if(temp>high){
    high=temp;
}


}


       return high; 
    }
};