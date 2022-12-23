#include<bits/stdc++.h>
using namespace std;

int binary_search(vector< int > &v , int query , int lo , int hi){
    int mid;
    while(hi >= lo){
        mid = (hi + lo)/2;
        if(v[mid] == query){
            return mid;
        }
        if(v[mid] < query){
            lo = mid + 1;
        }
        else hi = mid - 1;
    }
    return -1;
}
void solve(){
    int n;
    cin >> n;
    vector< int > v(n);
    for(auto & i : v){
        cin >> i;
    }
    sort(v.begin() , v.end());
    int q;
    cin >> q;
    while(q--){
        int find;
        cin >> find;
        int result = binary_search(v , find , 0 , n-1);
        if(result == -1) cout << "Not Found" << endl;
        else cout << "Found" << endl;
    }
}
int main(){
    int TC = 1; //cin >> TC;
    while(TC--){
        solve();
    }
    return 0;
}