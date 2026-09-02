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

  int n , x;
  cin >> n >> x;

  int cnt = 0;

  for(int i = 1;i<=n ; i++){

    if(x % i == 0 && (x/i) <= n ){
        cnt++;
    }
  }

  cout << cnt << endl;



  


}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    // int t;
    // cin >> t;
    
    // while (t--) {
    //     solve();
    // }
   solve();
    



}

 


 
 

 
    
