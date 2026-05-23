class Solution {
public:
    int sumOfPrimesInRange(int n) {
        int r = 0; 
        int temp = n; 
        
        int sum = 0;
        
        while(temp != 0 ){
            int rem = temp % 10;
            r = r *10 + rem;
            temp = temp /10;
        }
        
        int mini = min(n ,r);
        int maxi = max(n ,r);
        
        for( int i = mini; i <= maxi; i++){
            bool t = true;
            if ( i == 1) continue;
            for ( int j =2; j<=i/2; j++){
                if(i % j ==0) 
                t = false;
            }
            if( t == true) sum = sum + i;
            
        }
        return sum;
    }
};