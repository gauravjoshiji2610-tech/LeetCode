class Solution {
    public char findTheDifference(String s, String t) {
int arr[] = new int[27];
for(int i = 0; i < s.length(); i++){
    arr[s.charAt(i) - 'a']++;
}
char tt ='a';
for(int i = 0; i < t.length(); i++){
arr[t.charAt(i) - 'a']--;
if(arr[t.charAt(i) - 'a'] < 0){
    tt = t.charAt(i);
    break;
     
}
}
return tt;

    }
}