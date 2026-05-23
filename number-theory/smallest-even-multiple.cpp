class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n == 1 || n == 2 ) return 2;
        
        for(int i = 3; i <= n *2; i++){
            if( i %2 == 0 && i % n == 0) return i;
        }
        return 2;

    }
};