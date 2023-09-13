#include<iostream>
#include<array>
using namespace std;



void algoritmo(int n){

    int mitad=(n/2);
    int arr[mitad];
    int arr2[mitad-1];
    arr[0]=2;
    arr2[0]=1;
    int suma1=0;
    int suma2=0;
    int faltante=0;
   
        for (int  i = 1; i < mitad; i++)
        {
            arr[i]=arr[i-1]+2;
        }

        for (int  i = 1; i < mitad-1; i++)
        {
            arr2[i]=arr2[i-1]+2;
        }

       
    for (int i = 0; i < mitad; i++)
    {
        suma1+=arr[i];
    }

    for (int i = 0; i < mitad-1; i++)
    {
        suma2+=arr2[i];
    }
    
    faltante=suma1-suma2;

    if ((faltante%2)!=0)
    {
        cout<<"YES"<<endl;
        for (int i = 0; i < mitad; i++)
        {
            cout<<arr[i]<<" ";
        }

        for (int i = 0; i < mitad-1; i++)
        {
             cout<<arr2[i]<<" ";
        }

        cout<<faltante<<endl;
        
    }
    else{
        cout<<"NO"<<endl;
    }
    


    
}



int main(){
    int t;cin>>t;
    int n=0;
    for (int i = 0; i < t; i++)
    {
        cin>>n;
        if (n==2)
        {
            cout<<"NO"<<endl;
        }
        else{
        algoritmo(n);
        }
    }
    


}