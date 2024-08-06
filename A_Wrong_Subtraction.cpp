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
    // ANIMO LAGUNERO :)
    int num = 0; cin>>num;
    int k = 0; cin>>k;

    while (k--)
    {
        string numAux = to_string(num);
        if(numAux[numAux.size()-1] == '0'){
            num/=10;
        }else num--;
    }
    cout<<num;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}