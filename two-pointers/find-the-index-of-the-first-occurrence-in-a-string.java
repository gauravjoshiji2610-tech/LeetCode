class Solution {
boolean compare( String haystack , String needle , int i, int n , int m){
if(i + n > m) return false;
    for( int j = 0; j < n; j++){
        if( i + j < m && haystack.charAt(i+j) != needle.charAt(j) ) return false;
    }
    return true;
}


    public int strStr(String haystack, String needle) {
        int n = needle.length(); 
        int m = haystack.length();
        if( n == 0) return -1;
        if( n > m ) return -1;

        int index ;
        boolean t ;

        for(int i = 0; i < m; i++){
            if( haystack.charAt(i) == needle.charAt(0)){
               t = compare(haystack,needle,i,n,m);
               if(t) return i;
            }
        }
        return -1;
    }
}