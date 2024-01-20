#include<iostream>
using namespace std;

string tlo(string s){
    for (int i = 0; i < s.size(); i++)
    {
        s[i]=tolower(s[i]);
    }
    return s;
}

int r(string s1,string s2){
 for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i]<s2[i])
        {
            return -1;
        }
        if (s1[i]>s2[i])
        {
            return 1;
        }
    }
    return 0;
}
int main(){
    string s1;cin>>s1;
    string s2;cin>>s2;

    s1=tlo(s1);
    s2=tlo(s2);
    
    cout<<r(s1,s2);
 
}