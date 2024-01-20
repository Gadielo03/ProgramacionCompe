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

void solve() {
    string s;cin>>s;
    int contador=0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]=='7' || s[i]=='4')
        {
            contador++;
        }
    }

    //cout<<contador<<endl;

    if (contador == 7 || contador==4)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  
    solve();

    return 0;
}