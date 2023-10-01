#include<iostream>
using namespace std;

bool abc1(string s){
    char aux;
    aux=s[1];
    s[1]=s[0];
    s[0]=aux;
    if (s=="abc")
    {
        return true;
    }
    else return false;

}
bool abc2(string s){
    char aux;
    aux=s[2];
    s[2]=s[0];
    s[0]=aux;
    if (s=="abc")
    {
        return true;
    }
    else return false;

}
bool abc3(string s){
    char aux;
    aux=s[1];
    s[1]=s[2];
    s[2]=aux;
    if (s=="abc")
    {
        return true;
    }
    else return false;

}

int main(){
    int t;cin>>t;
    string s="";

        for (int i = 0; i < t; i++)
        {
            cin>>s;
            if (s=="abc")
            {
                cout<<"YES"<<endl;
            }
            else
            {
                if (abc1(s))
                {
                    cout<<"YES"<<endl;
                }
                else{
                if (abc2(s))
                {
                    cout<<"YES"<<endl;
                }
                else{
                if (abc3(s))
                {
                    cout<<"YES"<<endl;
                }
                else cout<<"NO"<<endl;
                }
                }
                
                
                
            }
            
            

        }
        
}