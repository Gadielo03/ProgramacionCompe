#include<iostream>
#include<string>
using namespace std;

int sol(string s){
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]=='1')
        {
            return i;
        }
    } 
    return -1;
}

int zerocount(int it,string s){
    int zc=0;
    for ( int i=it;i < s.size(); i++)
    {
        if (s[i]=='0')
        {
            zc++;
        }
    }
    return zc;
}

int main(){
    string s;cin>>s;
    int r=sol(s);
    int zc=zerocount(r,s);
    //cout<<s.size()-r-1<<" "<<zc<<endl;

    if (r>-1 && zc>=6)
    {
        cout<<"yes";
    }
    else cout<<"no";
}
