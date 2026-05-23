class Solution {
public:
    int hammingWeight(int n) {
        int count=0;
        int g;
        while(n>0){
            g=(n&1);
            count+=g;
            n=n>>1;
        }
    return count;
    }
};