class Solution {
public:
    int hammingWeight(int n) {
       int counter = 0;
       while( n != 0){

        int rsbm = n & -n;
        n = n - rsbm;
        counter++;
       }

       return counter;
    }
};