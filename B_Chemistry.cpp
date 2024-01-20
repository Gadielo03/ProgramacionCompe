#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <iomanip>
#include <bitset>
#include <unordered_map>
#include <unordered_set>
#include <complex>
#include <tuple>
#include <cassert>
#include <climits>

using namespace std;

#define ll long long
#define pb push_back
#define F first
#define S second

const ll MOD = 1e9+7;
const ll INF = 1e18;

int par(string s){
    int diferentes=0;
    int mitad = s.size()/2;
    string sub1 = s.substr(0,mitad-1);
    string sub2 = s.substr(mitad,s.size());
    sort(sub1.begin(),sub1.end());
    sort(sub2.begin(),sub2.end());

    for (int i = 0; i < mitad; i++)
    {
        if(sub1[i]!=sub2[i]){
            diferentes++;
        }
    }
    return diferentes;

}

int impar(string s){
    int diferentes=0;
    int mitad = s.size()/2;
    string sub1 = s.substr(0,mitad-1);
    string sub2 = s.substr(mitad+1,s.size());
    sort(sub1.begin(),sub1.end());
    sort(sub2.begin(),sub2.end());

    for (int i = 0; i < mitad; i++)
    {
        if(sub1[i]!=sub2[i]){
            diferentes++;
        }
    }
    return diferentes;

}


void solve() {
    int n;cin>>n;//n letras
    int k;cin>>k;//k eliminaciones
    int diferentes = 0;
    string s;cin>>s;//el string 

    
    if(n==1){
        cout<<"YES"<<endl;
    }
    else if (n%2 == 0){
        diferentes = par(s);
        if (diferentes == k)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    else if (n%2 != 0)
    {
        
    }
    
    

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}