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
    string s;cin>>s;
    string s2;
    if (s.size()<=3 && s!="WUB")
    {
        cout<<s;
    }
    else{
    for (int i = 0; i < s.size()-2; i++)
    {
        string aux;
        aux+=s[i];
        aux+=s[i+1];
        aux+=s[i+2];
        if (aux=="WUB")
        {
            s[i]=' ';
            s[i+1]=' ';
            s[i+2]=' ';
        }
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]==' ' && s[i]!=s[i+1])
        {
            s2+=' ';
        }
        else if (s[i]!=' ')
        {
            s2+=s[i];
        }
        
    }
    
    cout<<s2;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}