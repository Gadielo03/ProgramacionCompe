#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

int main(){
    int t;cin>>t;
    int n=0;
    string s="";
    string name="Timur";
    
    sort(begin(name),end(name));

    for (int i = 0; i < t; i++)
    {
        cin>>n;
        cin>>s;
         sort(begin(s),end(s));

        if (s==name)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    
}