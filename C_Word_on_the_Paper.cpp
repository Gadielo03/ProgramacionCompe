#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;cin>>t;
    string s="";
    vector<char> v;

    for (int i = 0; i < t; i++)
    {
        for (int i = 0; i < 8; i++)
        {
            cin>>s;
            for (int i = 0; i < s.size() ; i++)
            {
                 if (s[i] != '.')
                {
                    v.push_back(s[i]);
                }
            }
        }
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i];
    }
    cout<<endl;

    v.clear();
        
    }
}