#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <queue>
#include <unordered_map>


 
 
using namespace std;
 
#define int long long
#define endl '\n'
 
const int MOD = 1e9 + 7;
const int INF = 1e18;



void solve() {
    int n ;
    char c;

    cin >> n ;
    cin >> c;

    string s;
    cin >>s;

    string str = s + s;

    int cnt = 0;

    vector<int> g;
    vector<int> other;

    for(int i = 0 ;i<2*n ; i++){

        if(str[i] == 'g')g.push_back(i);
        if(c == str[i])other.push_back(i);
    }

    int ans = -1;

    for(int i = 0 ; i<other.size() ; i++){
        int j = 0;

        while(j < g.size()){

            if(g[j] >= other[i]){
                ans = max(ans , g[j] - other[i]);
                break;
            }
            j++;
        }
    }
    cout << ans << endl;
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
   
    



}

 


 
 

 
    
