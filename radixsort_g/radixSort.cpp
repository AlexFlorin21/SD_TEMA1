
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void f(int v[],int n){
int i,p=1,c,max,cnt=0;
for(i=0;i<n-1;i++)
        if(v[i]>v[i+1]) max=v[i];
            else max=v[i+1];
while(max!=0){
    cnt=cnt+1;
    max=max/10;
            }
while(cnt!=0){
    int b[n]={0},a[10]={0};
    for(i=0;i<n;i++){
        c=(v[i]/p)%10;
        a[c]++;     }
    for(i=1;i<10;i++) a[i]=a[i]+a[i-1];
    for(i=n-1;i>=0;i--){
        b[a[(v[i]/p)%10]-1]=v[i];
        a[(v[i]/p)%10]--;}
    for (i=0;i<n;i++) v[i]=b[i];
    cnt--;
    p=p*10;
            }
                                }
int main()
{
int i,j,a,max=0,n,cnt=0;
n=rand();
if(n>100000) cout<<"Nu se poate sorta";
    else{
        int v[n];
        for(i=0;i<n;i++) v[i]=rand();
        f(v,n);
        for(i=0;i<n;i++) cout<<v[i]<<" ";
        }
        return 0;
}
/// time for 10^5 numere  6.610 s


