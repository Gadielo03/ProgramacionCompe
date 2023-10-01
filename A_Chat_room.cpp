#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int searchl(string s,char c,int f){
    for (int i = f+1; i < s.size(); i++)
    {
        if (c==s[i])
        {
            return i;
        }
    }
    return -1;  
}

int main(){
    string s;cin>>s;
    bool h=false;    
    bool e=false;  
    bool l1=false;  
    bool l2=false;  
    bool o=false;  
    int ph=-1;ph=searchl(s,'h',-1);
    int pe=-1;pe=searchl(s,'e',ph);
    int pl1=-1;pl1=searchl(s,'l',pe);
    int pl2=-1;pl2=searchl(s,'l',pl1);
    int po=-1;po=searchl(s,'o',pl2);

    if (ph<pe && ph>=0)
    {
        h=true;
    }

    if (pe<pl1 && pe>=0)
    {
        e=true;
    }

    if (pl1<pl2 && pl1>=0)
    {
        l1=true;
    }

    if (pl2<po && pl2>=0)
    {
        l2=true;
    }

    if (po>=0)
    {
        o=true;
    }

    if (h&&e&&l1&&l2&&o)
    {
        cout<<"YES";
    }
    else cout<<"NO";
    
    //cout<<ph<<pe<<pl1<<pl2<<po;
   

}
