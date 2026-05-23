class Solution {
public:
    int countCommas(int n) {
        if(n>=1 && n<=999){
            return 0;
        }
        int g,h=0;
        long k=0;
        int b=n-1000;
for(int l=0;l<=b;l++){
    int i=1000+l;
    int count=0;
        while(i>0){
            g=i%10;
            count++;
            if(count>3){
                h++;
                count=1;
            }
            i=i/10;
        }
    k=k+h;
}
       return h; 
    }
};