#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    
    vector<int> a(n);
    
    for(int i  = 0; i<n ; i++)cin >> a[i];
    
    int maxi = a[n-1];
    vector<int> pre(n);
    
    pre[n-1] = 0;
    
    for(int i = n-2; i>=0 ;i--){
        
        if(maxi >= a[i]){
            pre[i] = maxi;
            
        }
        else{
            pre[i] = 0;
            maxi = a[i];
        }
    }
    
    for(int i = 0 ; i<n ; i++){
        maxi = max(maxi , a[i] + pre[i]);
        // cout << pre[i] << " ";
    }
  
    cout << maxi << endl;
}

int main() {
    
    int t;
    cin >> t;
    
    while(t--){
        solve();
    }

}
