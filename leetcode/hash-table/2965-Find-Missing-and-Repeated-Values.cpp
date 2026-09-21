class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int xor1 = 0;
        for(int i = 1 ; i<= n*n ; i++){
            xor1 = xor1 ^ i;
        }

        int xor2 = 0;
        unordered_map<int , int> mp;
        int repetead = 0;
        for(int i = 0 ; i<n; i++){
            for(int j = 0 ; j < grid[i].size(); j++){
                xor2 = xor2 ^ grid[i][j];

                if(mp.count(grid[i][j])){
                    repetead = grid[i][j];
                }
                else{
                    mp[grid[i][j]]++;
                }
            }
        }

        int res = xor1 ^ xor2;

        int missing = res ^ repetead;

        return { repetead , missing};
      
    }
};