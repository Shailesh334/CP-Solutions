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
   int x , y , a , b;
   cin >> x >> y >> a >> b;


   cout << a*abs(x - y) + min(a*2*min(x , y) , b*min(x , y) )<< endl;
   
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

 


 
 

 
    
