class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        vector<bool>mp(101,0);
        vector<int>v;


    
    for(int i = 0; i < bulbs.size();i++){
        if( mp[bulbs[i]] == true){
            mp[bulbs[i]] = false;
        }
        else if(mp[bulbs[i]] == false){
            mp[bulbs[i]] = true;

        }
        else{
        mp[bulbs[i]]=true;
        
    }}
    for(int i = 0; i < bulbs.size(); i++){
        if(mp[bulbs[i]]==true){
          
        v.push_back(bulbs[i]);
        mp[bulbs[i]]= false;}
        }
    
    sort(v.begin(),v.end());
return v;
 
 
    }



};