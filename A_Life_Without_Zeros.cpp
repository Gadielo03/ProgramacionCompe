#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int cerocero(string s){
    vector<char> v;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]!='0')
        {
            v.push_back(s[i]);
        }
    }

    string s2(v.begin(),v.end());
    int r=stoi(s2);
    return r;
}

int main(){
    int a1;cin>>a1;
    int b1;cin>>b1;
    int r1=a1+b1;
    string aux1=to_string(a1);
    string aux2=to_string(b1);
    string aux3=to_string(r1);
    int a2=cerocero(aux1);
    int b2=cerocero(aux2);
    int r2=cerocero(aux3);

    if ((a2+b2)==r2)
    {
        cout<<"YES";
    }
    else cout<<"NO";
  
    
}