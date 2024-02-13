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
#define debug cout<<"debug"<<endl;


const ll MOD = 1e9+7;
const ll INF = 1e18;

void solve() {
    int n;cin>>n;//n letras
    int k;cin>>k;//k eliminaciones
    string s;cin>>s;//el string
    string saux=s;
    int feos=0;
    sort(saux.begin(),saux.end()); 
    saux.erase(unique(saux.begin(),saux.end()),saux.end());
    
    for (int i = 0; i < saux.size(); i++)
    {
        if(count(s.begin(),s.end(),saux[i])%2!=0){
            feos++;
        }
    }
    if (feos>k+1)
    {
        cout<<"NO"<<endl;
    }else cout<<"YES"<<endl;
    
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

