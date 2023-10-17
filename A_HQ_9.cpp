#include<iostream>
using namespace std;

string sol(string p){
    for (int i = 0; i < p.size(); i++)
    {
        if (p[i]=='H')
        {
            return "YES";
        }
        if (p[i]=='Q')
        {
            return "YES";
        }
        if (p[i]=='9')
        {
            return "YES";
        }
        
    }
    return "NO";
}

int main(){
    string p;cin>>p;

    string r=sol(p);;
    cout<<r;
}