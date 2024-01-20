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
#define F first
#define S second

const ll MOD = 1e9+7;
const ll INF = 1e18;

void solve() {
    vector<int> vec;
    int n;cin>>n;
    int p;cin>>p;
    bool win = true;

    if (p>0)
    {
        for (int i = 0; i < p; i++)
        {
            int aux=0;
            cin>>aux;
            vec.push_back(aux);
        }
    }

    int q;cin>>q;
    if (q>0)
    {
        for (int i = 0; i < q; i++)
        {
            int aux=0;
            cin>>aux;
            vec.push_back(aux);
        }
    }
    
    if (p == 0 & q == 0)
    {
        cout<<"Oh, my keyboard!"<<endl;
        
    }
    else {
    
    sort(vec.begin(),vec.end());
    
    vec.erase(unique(vec.begin(),vec.end()),vec.end());

    for (int i = 0; i < n; i++)
    {
        if (i+1!=vec[i])
        {
            win = false;
        }   
    }
    
    if (win)
    {
        cout<<"I become the guy."<<endl;
    }
    else cout<<"Oh, my keyboard!"<<endl;
    
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

  
    solve();
    
    return 0;
}