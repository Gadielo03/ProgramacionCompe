#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string s;cin>>s;
    vector<char> vec;
    char aux;

    if (s.size()==1)
    {
        cout<<"IGNORE HIM!";
    }
    else{
    
    for (int i = 0; i < s.size(); i++)
    {
        aux=tolower(s[i]);
        vec.push_back(aux);
    }
    
    sort( vec.begin(),vec.end());
    vec.erase( unique(vec.begin(),vec.end()),vec.end());
   
    if (vec.size()%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else cout<<"IGNORE HIM!";
    
    }
}