#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n=0;cin>>n;
    int aux=0;
    int r=0;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>aux;
        arr[i]=aux;
    }
     
     int len=sizeof(arr)/sizeof(arr[0]);

     sort(arr,arr+len,greater<int>());
     
    for (int i = 0; i < n; i++)
    {
        aux=arr[0]-arr[i];
        r=r+aux;
        
    }
    cout<<r;
    

}