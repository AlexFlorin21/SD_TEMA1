#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void quickSort(int v[],int st,int dr){
    int mid,i=st,j=dr,pivot;
    if (st<dr){
        mid=(st+dr)/2;
        if (v[dr]<v[st])  swap(v[st], v[dr]);
        if (v[mid]<v[st]) swap(v[st], v[mid]);
        if (v[dr]<v[mid]) swap(v[dr], v[mid]);
        pivot=v[mid];
        while (i<=j){
            while(v[i]<pivot)  i++;
            while(v[j]>pivot)  j--;
            if(i<=j){
                swap(v[i],v[j]);
                i++;
                j--;
                    }
                   }
        quickSort(v, st, j);
        quickSort(v, i, dr);
              }
                                    }

int main(){
    int n,i;
    n=rand();
    int v[n];
    srand(time(NULL));
    for(i=0;i<n;i++)    v[i]=rand();
    quickSort(v,0,n -1);
    for(i=0;i<n;i++)    cout<<v[i]<<" ";
    return 0;
         }
