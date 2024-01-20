#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;cin>>t;
    int n=0;
    string s="";
    char aux;
    

    for (int i = 0; i < t; i++)
    {
        int g=0;
        vector<char> vctor;
        cin>>n;
        cin>>s;

        if (n<4)
        {
            cout<<"NO"<<endl;
        }
        else
        {

            for (int j = 0; j< s.size(); j++)
            {
                aux=tolower(s[j]);
                vctor.push_back(aux);
            }

            vctor.erase(unique(vctor.begin(), vctor.end()), vctor.end());

            string r(vctor.begin(),vctor.end());
            
            if (r=="meow")
            {
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        
        
        }
        
    }
    
}