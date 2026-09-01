#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <numeric>
#include <queue>
#include <unordered_map>


 
 
using namespace std;
 
#define int long long
#define endl '\n'
 
const int MOD = 1e9 + 7;
const int INF = 1e18;



void solve() {
    int n ;
    cin >> n ;

    int minn = INF;
    vector<int> min2;

    for(int i = 0 ; i<n ; i++){
        int m;
        cin >> m;

        vector<int> v(m);
        for(int i = 0; i<m ; i++)cin >> v[i];

        int minel = *min_element(v.begin() , v.end());
        minn = min(minel , minn);

        auto it = find(v.begin() , v.end() , minel);
        v.erase(it);


        min2.push_back(*min_element(v.begin() , v.end()));


    }

    int sum = accumulate(min2.begin() , min2.end() , 0LL);

    cout << minn + sum - *min_element(min2.begin() , min2.end()) << endl;
   
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

 


 
 

 
    
