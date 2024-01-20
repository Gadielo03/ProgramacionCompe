#include<iostream>
#include<array>

using namespace std;

int leftSteps(int s,int arr[]){
    for (int i = s; i >= 0; i--)
    {
        
        if (arr[i]==0)
        {
            return i;
        }
       
    }
    return -1;
}

int rightSteps(int s,int arr[],int n){
    for (int i = s; i < n; i++)
    {
        if (arr[i]==0)
        {
            return i;
        }
       
        
    }
    return -1;
}

int main(){
    int t;cin>>t;
    for (int i = 0; i < t; i++)
    {
    int n;cin>>n;
    int s;cin>>s;
    int k;cin>>k;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i]=1;
    }
    
    
    for (int i = 0; i < k; i++)
    {
        int aux;cin>>aux;
        arr[aux-1]=0;
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
    cout<<"____________"<<endl;

    int lsteps=leftSteps(s,arr);
    int rsteps=rightSteps(s,arr,n);
    
    cout<<lsteps<<" "<<rsteps<<endl;
 
    }
}