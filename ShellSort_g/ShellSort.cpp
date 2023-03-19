#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void f(int v[],int n){
int i,m,j,k;
m=n/2;
for(i=m;i>0;i=i/2)
    for(j=i;j<n;j++)
        for(k=j-i;k>=0;k=k-i)
                if(v[k]>v[k+i]) swap(v[k],v[k+i]);
                    }
int main(){
int n,i;
n=rand();
if(n>100000) cout<<"Nu se poate sorta";
    else{
        int v[n];
        srand(time(NULL));
        for(i=0;i<n;i++) v[i]=rand();
        f(v,n);
        for(i=0;i<n;i++)
        cout<<v[i]<<" ";
        }
    return 0;
        }
