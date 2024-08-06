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
    string s;cin>>s;
    vector <int>vec;
    int del=0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]=='1')
        {
            vec.pb(i);
        }
    }
    

    for (int i = 0; i < vec.size(); i++)
    {
        //cout<<"iteracion:"<<i<<endl;
        //cout<<del<<endl;
        if (vec[i+1]-vec[i] > 1 && i<vec.size()-1)
        {
            
            del=del+(vec[i+1]-vec[i])-1;
            
        }
        
    }

    
    //cout<<endl;
    cout<<del<<endl;
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