#include<iostream>
#include<map>
using namespace std;

int main(){
    int t;cin>>t;
    int n=0;
    int aux=0;
   
   for (int i = 0; i < t; i++)
   {
     cin>>n;
     if (n%2 !=0 )
     {
      cout<<7;
      n-=3;
     }
     if (n/2==0)
     {
      aux=n;
     }
     else  aux=n/2;

        for (int j = 0; j < aux; j++)
        {
            cout<<1;
        }
     cout<<endl;
   }
}