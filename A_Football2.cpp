#include<iostream>
#include<string>
using namespace std;

bool sol(string s,char a){
    for (int i = 0; i < s.size(); i++)
    {
       // cout<<s[i]<<s[i+1]<<s[i+2]<<s[i+3]<<s[i+4]<<s[i+5]<<s[i+6]<<s[i+7]<<s[i+8]<<endl;
        if (s[i]==a && s[i+1]==a && s[i+2]==a && s[i+3]==a && s[i+4]==a && s[i+5]==a && s[i+6]==a)
        {
            return true;
        }
    }
    return false;
}


int main(){
    string s;cin>>s;

    if (s.size()<7)
    {
        cout<<"NO";
    }
    else if (sol(s,'0')||sol(s,'1'))
    {
        cout<<"YES";
    }
    else cout<<"NO";
    
    
    
}