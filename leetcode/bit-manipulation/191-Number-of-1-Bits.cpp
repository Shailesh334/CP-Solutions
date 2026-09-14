class Solution {
public:
    int hammingWeight(int n) {
        bitset<32> b(n);
        int cnt = 0;
        for(int i = 0 ; i<32; i++){
            if(b[i] == 1)cnt++;
        }
        return cnt;
    }
};