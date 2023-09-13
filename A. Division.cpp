#include<iostream>
using namespace std;

int main(){
    int t;cin>>t;
    int aux=0;
    for (size_t i = 0; i < t; i++)
    {
        cin>>aux;

        if (aux>=1900)
        {
            cout<<"Division 1"<<endl;
        }
        else{
            if (aux>=1600 && aux<=1899)
            {
                cout<<"Division 2"<<endl;
            }
            else{
                if (aux>=1400 && aux<=1599)
                {
                    cout<<"Division 3"<<endl;
                }
                else{
                    cout<<"Division 4"<<endl;
                }
                
            }
            
        }
        
    }
    
}