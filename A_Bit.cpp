#include<iostream>
using namespace std;

int main(){
    int t;cin>>t;
    string aux="";
    int r=0;
    for (int i = 0; i < t; i++)
    {
        
        cin>>aux;
        if (aux=="++X" || aux=="X++"){
            r++;
        }
        else{
           if (aux=="--X" || aux=="X--"){
            r--;
           }
         } 
    }
    cout<<r;
}
