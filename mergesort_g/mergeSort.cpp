#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void f1(int v[],int st, int mid, int dr) {
int l1,l2,i,j;
l1=mid-st+1;
l2=dr-mid;
int c,a[l1]/*lungimea pentru stanga*/, b[l2];
for (i=0;i<l1;i++)   a[i]=v[st+i];
for (j=0;j<l2;j++)   b[j]=v[mid+1+j];
i=0,j=0,c=st;
while(i<l1&&j<l2){
    if (a[i]<=b[j]) { v[c]=a[i];i++; }
        else { v[c]=b[j];j++; }
    c++;
                }
while(i<l1) {v[c]=a[i];i++;c++;}
while(j<l2) {v[c]=b[j];j++;c++;}
                                        }

void f(int v[],int st, int dr){
int mid;
if (st>=dr) return;
mid=(st+dr)/2;
f(v,st, mid);
f(v,mid+1,dr);
f1(v,st,mid,dr);
                                }
int main(){
int n,i;
n=rand();
if (n>100000) cout<<"Nu poate sorta";
    else{
        int v[n];
        srand(time(NULL));
        for(i=0;i<n;i++) v[i]=rand();
        f(v,0,n-1);
        for(i=0;i<n;i++) cout<<v[i]<< " ";
        }

return 0;
        }
///time for 10^5 numbers:6.619 s
///best case complexity: O(nlogn)
///worst case complexity:O(nlogn)



