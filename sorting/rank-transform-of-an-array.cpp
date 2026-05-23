class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int,int>mp;
        int n=arr.size();
    

        for(int i=0;i<n;i++){
            mp[arr[i]]++;
            
        }
int k=1;
        for(auto &it: mp){
            it.second=k;
            k++;
        }
        for(int j=0;j<n;j++){
            arr[j]=mp[arr[j]];
        }
        return arr;
    }
};