class Solution {
public:
    vector<int> gray(int n){
        if(n == 1){
            return {0 ,1};
        }

        vector<int> res = gray(n - 1);
        vector<int> nres;
        for(int i = 0 ; i<res.size() ; i++){
            nres.push_back(res[i]);
        }
        for(int i = res.size() - 1; i >= 0 ; i--){
            nres.push_back(res[i] + res.size());
        }
        return nres;
    }
    vector<int> grayCode(int n) {
        vector<int> ans = gray(n);
        return ans;
    }
};