class Solution {
public:
    int singleNumber(vector<int>& nums) {
        long long sum = 0;
        unordered_set<long long> s;
        for(long long i : nums){
            sum += i;
            s.insert(i);
        }

        long long sum2 = 0;
        for(long long num : s){
            sum2 += num*3;
        }  
        long long ans = (sum2 - sum)/2;
        return ans;
      
    }
};