// User function Template for C++

class Solution {
  public:
    int findXOR(int l, int r) {
        // complete the function here
        return xoruptiln(r)^xoruptiln(l-1);
    }
    int xoruptiln(int r){
       if(r%4==0){
           return r;
       }
       else if(r%4==1){
           return 1;
       }
       else if(r%4==2){
           return r+1;
       }
       else{
           return 0;
       }
    }
};