#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int posi(vector<int> arr){
    int min=arr[0];
    int pos=0;
    for (int  i = 0; i < arr.size(); i++)
    {
       if (arr[i]<min)
       {
         min=arr[i];
         pos=i;
       }
    }
    return pos;
}

int main(){
    int t;cin>>t;
    int n=0;
    int aux=0;
    int r=1;
    int pos=0;


        for (int i = 0; i < t; i++)
        {
            
            cin>>n;
            vector<int> arr;
            for (int j = 0; j < n; j++)
            {
                cin>>aux;
                arr.push_back(aux);
            }

            pos=posi(arr);
            arr[pos]++;
            
            for (int j = 0; j < arr.size(); j++)
            {
               r=r*arr[j];
            }

            cout<<r<<endl;
            
          
            r=1;
            
        }
        
}