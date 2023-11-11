//This is void-57
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main(){
ios::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
map<string,string>m;
string s,t,l;
while(getline(cin,l)&&!l.empty()){
    int pos=l.find(' ');
    
    s=l.substr(0,pos);
    t=l.substr(pos+1);
    m[t]=s;
    
}
string p;
while(cin>>p){
    if(m.find(p)==m.end())
    cout<<"eh"<<endl;
    else
    cout<<m[p]<<endl;
}
}