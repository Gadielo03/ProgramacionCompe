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


void solve() {
    int n = 0; cin>>n;
    vector<int> v;
    bool band = true;
    int aux = 6;
    while (aux--)
    {
        int aux2 = 0;cin>>aux2;
        v.pb(aux2);
    }

    aux=0;
    
    while (n>0)
    {
        
        
       //cout<<"aux "<<aux<<endl;
       //cout<<"n "<<n<<endl;
       //cout<<"v[aux] "<<v[aux]<<endl;
        if(aux==6)
            aux = 0;
        n-=v[aux];
        
        if(aux==6)
            aux = 0;
        aux++;
        
    }
    
    
    cout<<aux;
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}