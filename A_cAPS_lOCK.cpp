#include<iostream>
using namespace std;

string CorrectCaps(string s){
    s[0]=toupper(s[0]);
    for (int i = 1; i < s.size(); i++)
    {
        s[i]=tolower(s[i]);
    }
    return s;
}

string IncorrectCaps(string s){
    s[0]=tolower(s[0]);
    for (int i = 1; i < s.size(); i++)
    {
        s[i]=toupper(s[i]);
    }
    return s;
}

string AllCaps(string s){
    for (int i = 0; i < s.size(); i++)
    {
        s[i]=toupper(s[i]);
    }
    return s;
}

string AllNotCaps(string s){
    for (int i = 0; i < s.size(); i++)
    {
        s[i]=tolower(s[i]);
    }
    return s;
}

int main(){
    string s;cin>>s;
    string SCorrectCaps=CorrectCaps(s);
    string SIncorrectCaps=IncorrectCaps(s);
    string SAllCaps = AllCaps(s);
    string SAllNotCaps = AllNotCaps(s);

    if (s==SIncorrectCaps)
    {
        cout<<SCorrectCaps;
    }
    else if (s==SAllCaps)
    {
        cout<<SAllNotCaps;
    }
    else cout<<s;
    
}