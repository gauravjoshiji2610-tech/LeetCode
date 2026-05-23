class Solution {
public:
    vector<double> internalAngles(vector<int>& nums) {
        vector<double>v;
        int a = nums[0],b=nums[1],c=nums[2];
        if(a + b > c && b + c > a && a + c > b){
     double A = acos((double)(b*b + c*c - a*a) / (2.0*b*c));
double B = acos((double)(a*a + c*c - b*b) / (2.0*a*c));
double C = acos((double)(a*a + b*b - c*c) / (2.0*a*b));
     
        A = A  * 180 / M_PI;
        
        B = B * 180 / M_PI;
       
        C = C * 180 / M_PI;
        
 v = {A, B, C};
sort(v.begin(), v.end());
}
else{
return v;
}
       
        return v;
    }
};