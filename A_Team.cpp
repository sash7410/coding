#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c=0;
    for(int i=0;i<n;i++){
        int z1[2]={};
        int x,y,z;
        cin>>x>>y>>z;
        z1[x]++;z1[y]++;z1[z]++;
        if(z1[1]>=2)
        c++;
    }
    cout<<c<<endl;
}