class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int>v;

      
int n = matrix.size();
int m = matrix[0].size();

        for(int i = 0 ; i < n; i++){
            int mini = matrix[i][0];
            int col = 0;

            for(int j = 1; j < m; j++){
                            if(mini > matrix[i][j]){
                                mini = matrix[i][j];
                                col = j;
                            }
            }
bool lucky = true;
            for(int k = 0; k < n; k++){
              

                if( mini < matrix[k][col] ) {
lucky = false;
                    break;}
            }
                   if(lucky) v.push_back(mini);
                     
            
            }
                             
                             
                             
                               
            return v;
        
    }
};