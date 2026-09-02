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
  int n , m;
  cin >> n >> m;


  vector<int> a(n);
  for(int i = 0 ;i<n ; i++)cin>>a[i];

  int maxi = 0;
  int ans = n;
  for(int i = 0 ;i<n ; i++){

    int num = a[i]/m;

    if(a[i] % m != 0)num++;

    if(num >= maxi){
        maxi = num;
        ans = i + 1;
    }


  

   
}

cout << ans << endl;
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

 


 
 

 
    
