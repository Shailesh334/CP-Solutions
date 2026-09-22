class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
    
    int xorall = 0;
    int n = grid.size();
    for(vector<int> arr : grid){
        for(int i : arr){
            xorall ^= i;
        }
    }

    for(int i = 1 ; i<= n*n ; i++){
        xorall ^= i;
    }

    int rsbm = xorall & -xorall;
    int num1 = 0;
    int num2 = 0;

      for(vector<int> arr : grid){
        for(int i : arr){
                if((rsbm & i) == 0){
                num1 ^= i;
                }
                else{
                    num2 ^= i;
                }
            }
        }

       for(int i = 1 ; i<= n*n ; i++){
            if((rsbm & i) == 0){
                num1 ^= i;
                }
                else{
                    num2 ^= i;
                }
        }
 
        int repeated = 0 , missing = 0;
        for(vector<int> arr : grid){
            for(int i : arr){
                if(num1 == i){
                    repeated = num1;
                    missing = num2;
                    break;
                }
                if(num2 == i){
                    repeated = num2;
                    missing = num1;
                    break;
                }
            }
        }

        return {repeated , missing};
    }
};