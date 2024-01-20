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
#include <array>

using namespace std;

#define ll long long
#define pb push_back
#define F first
#define S second

const ll MOD = 1e9+7;
const ll INF = 1e18;



void solve() {
    string s;cin>>s;
    string pkmn = "Bulbasaur";
    vector<int> arr={0,0,0,0,0,0,0,0,0};

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == pkmn[0])
            arr[0]++; 

        if (s[i] == pkmn[1])
            arr[1]++;

        if (s[i] == pkmn[2])
            arr[2]++;
            
        if (s[i] == pkmn[3])
            arr[3]++;

        if (s[i] == pkmn[4])
            arr[4]++;

        if (s[i] == pkmn[5])
            arr[5]++;

        if (s[i] == pkmn[6])
            arr[6]++;
            
        if (s[i] == pkmn[7])
            arr[7]++;                     
        
        if (s[i] == pkmn[8])
            arr[8]++; 
    }

    arr[1]=arr[1]/2;
    arr[4]=arr[4]/2;
    arr[6]=arr[6]/2;
    arr[7]=arr[7]/2;

    
    

    if (arr[0]>0 && arr[1]>0 && arr[2]>0 && arr[3]>0 && arr[4]>0 && arr[5]>0 && arr[6]>0 && arr[7]>0 && arr[8]>0 )
    {
        cout<<*min_element(arr.begin(),arr.end());
    }
    else cout<<0;
    
    

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}