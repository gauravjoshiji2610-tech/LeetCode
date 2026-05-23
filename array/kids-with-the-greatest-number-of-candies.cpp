class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int e) {
        vector<bool>v;
        int max=candies[0];
        for(int j=1;j<candies.size();j++){

if(max<candies[j]){
    max=candies[j];
}
        }
        for(int i=0;i<candies.size();i++){
            if(candies[i] + e >= max) {
v.push_back(true);

            }
            else{
                v.push_back(false);
            }
        
        }
        return v;
    }
};