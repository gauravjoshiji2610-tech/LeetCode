class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int a=arrivalTime,d=delayedTime;
        int t=a+d;
        if(t>=24){
            t=t-24;
        }
    return t;
    }
};