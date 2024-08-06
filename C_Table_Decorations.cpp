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
#define all(v) v.begin(), v.end()

const ll MOD = 1e9+7;
const ll INF = 1e18;

int minrgb(int r,int g,int b){
    ll min=MOD;
    if (r<min && r>0)
    {
        min=r;
    }
    if (g<min && g>0)
    {
        min=g;
    }
    if (b<min && g>0)
    {
        min=b;
    }
    
    return min;
}


void solve() {
    ll r;cin>>r;
    ll g;cin>>g;
    ll b;cin>>b;
    ll ans=0;

    ans+=minrgb(r,g,b);
    r-=minrgb(r,g,b);
    g-=minrgb(r,g,b);
    b-=minrgb(r,g,b);
    
    if (r+g+b >= 3 )
    {
        ans+=minrgb(r,g,b);
        r-=minrgb(r,g,b);
        g-=minrgb(r,g,b);
        b-=minrgb(r,g,b);
    }
    
    cout<<ans<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}