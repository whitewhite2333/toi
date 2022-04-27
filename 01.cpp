#include<iostream>
#include<cmath>

using namespace std ;

int main(){
    int n;cin>>n;
    int a[n]={};
    int b[n]={};
    int c[n]={};
    
    int i,j,f=0,min=300;
    for(i=0;i<n;i++)cin>>a[i];
    for(i=0;i<n;i++)cin>>b[i];
    
    int dist=0;
    for(i=0;i<n;i++){
        min=999;
        f=0;
        for(j=0;j<n;j++){
            if(a[i]==b[j]){
                if(abs(i-j)<min){
                    f=1;
                    dist=abs(i-j);
                    min=dist;
                }
        }
        if(f=1)c[i]=dist;
        else c[i]=-1;
    }
    
    for(i=0;i<n;i++)cout<<c[i]<<" ";
}
}