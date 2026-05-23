class Solution {
    public int scoreOfString(String s) {
        int n = s.length();
        int sum = 0;
        for(int i = 0; i < n - 1; i++){

int minus = s.charAt(i) - s.charAt(i+1);
sum += Math.abs(minus);
        }
        return sum;
    }
}