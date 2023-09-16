#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool comprobar(vector<int> vctor,int g){
    for (int i = g+1; i < vctor.size(); i++)
        {
            if (vctor[g]==vctor[i])
            {
                return false;   
            } 
        }   
        return true;
}

int main(){
    int n;cin>>n;
    vector<int> vctor;
    int aux=0;
    int g=0;
    
    for (int i = 0; i < n; i++)
    {
        cin>>aux;
        vctor.push_back(aux);
    }

    do
    {
        
        for (int i = g+1; i < vctor.size(); i++)
        {
            if (vctor[g]==vctor[i])
            {
                vctor.erase(vctor.begin()+g);     
            } 
        }   
      
        
        if (comprobar(vctor,g))
        {
            g++;
        }

    } while (g < vctor.size()-1);

   
   
    
    
    //cout<<g<<endl;
    cout<<vctor.size()<<endl;
    
    for (int i = 0; i < vctor.size(); i++)
    {
       cout<<vctor[i]<<" ";
    }
    
    
    

   
    
    
}