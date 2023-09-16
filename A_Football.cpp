#include<iostream>
using namespace std;

int main(){
    int n;cin>>n;
    string eq1;cin>>eq1;
    string eq2="";
    string aux="";
    int gole1=1;
    int gole2=0;

    if (n>1)
    {
        for (int i = 0; i < n-1; i++)
        {
            cin>>aux;
            if (aux==eq1)
            {
                gole1++;
            }
            else
            {
                eq2=aux;
                gole2++;
            }
        }
        if (gole1>gole2)
        {
            cout<<eq1;
        }
        else
        {
            cout<<eq2;
        }
        
    }
    else
    {
        cout<<eq1;
    }
    
}