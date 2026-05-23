class Solution {
    public int furthestDistanceFromOrigin(String moves) {
        int n = moves.length();
       int  countL = 0, countR = 0, RealR = 0, RealL =0;
        for(int i = 0; i < n; i++){
            if(moves.charAt(i) == 'L' || moves.charAt(i) == '_'  ){
                if(moves.charAt(i) == 'L') RealL++;
countL++;}
  if(moves.charAt(i) == 'R' || moves.charAt(i) == '_'  ){
     if(moves.charAt(i) == 'R') RealR++;
countR++;

            }
        }
        if( countR > countL) return countR-RealL;
        return countL-RealR;
    }
}