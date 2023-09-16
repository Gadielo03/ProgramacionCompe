#include<iostream>
#include<array>
using namespace std;

int main(){
    int t;cin>>t;
    string aux="";
    for (int i = 0; i < t; i++)
    {
        cin>>aux;
        for (int i = 0; i < aux.size(); i++) {
        aux[i] = toupper(aux[i]);
        }
        if (aux=="YES")
        {
            cout<<aux<<endl;
        }
        else cout<<"NO"<<endl;
        
    }
    
}