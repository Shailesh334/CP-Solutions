class Solution {
public:

    vector<int> singleNumber(vector<int>& nums) {
        
        long long xorall = 0;
        for(int i : nums){
            xorall ^= i;
        }

        long long rsbm = xorall & -xorall;

        int num1 = 0;
        int num2 = 0;

        for(int i : nums){

            if((rsbm & i) == 0){
                num1 ^= i;
            }
            else{
                num2 ^= i;
            }
        }

        return {num1 , num2};
    }
};