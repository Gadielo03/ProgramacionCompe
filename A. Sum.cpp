#include<iostream>
using namespace std;

int main(){ 
    int t;cin>>t;// numero de casos
    int a=0;
    int b=0;
    int c=0;
        for (int i = 0; i < t; i++)
        {
            cin>>a;
            cin>>b;
            cin>>c;

            if ((a+b)==c)
            {
                cout<<"YES"<<"\n";
            }
                else{
                if ((a+c)==b)
            {
                    cout<<"YES"<<"\n";
            }
                else{
                if ((b+c)==a)
            {
                 cout<<"YES"<<"\n";
            }
                else{
                    cout<<"NO"<<"\n";
            }
            }
            }
            
            
            
           
        }
        return 0;
}