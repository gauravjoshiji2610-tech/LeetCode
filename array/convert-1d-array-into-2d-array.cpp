class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& o, int m, int n) {
        vector<vector<int>> v(m, vector<int>(n,0));

        int s=o.size();
        if(s!=m*n){

            return vector<vector<int>>();

        }
       
        int a=0;
        for( int i=0;i<m;i++){
        for(int j=0;j<n;j++){
                v[i][j]=o[a];
                a++;
            }
        }
return v;


    }
};