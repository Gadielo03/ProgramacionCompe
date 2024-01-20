#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;


bool comp(string s1,string s2){
        for (int i = 0; i < s2.size(); i++)
        {
            string r= s2.substr(i,s1.length());
            sort(s1.begin(),s1.end());
            sort(r.begin(),r.end());
           // cout<<r<<" "<<stringsum(r)<<endl;
            //cout<<s1<<" "<<stringsum(s1)<<endl;
            if (s1==r)
            {
                return true;
            }
            
        }
        return false;

}

bool ans(string s1,string s2){

    if (s1.size()==s2.size())
    {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if (s1==s2)
        {
            return true;
        }
        else return false;
    }
    else if (!s1.size()<s2.size())
    {
        return comp(s1,s2);
    }
    else return false;
    
}

int main(){
    int t;cin>>t;
    string s1;
    string s2;

    for (int i = 0; i < t; i++)
    {
        cin>>s1;
        cin>>s2;
        
        if (ans(s1,s2))
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        
    }
    

}