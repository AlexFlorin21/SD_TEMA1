#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void f(int v[], int n) {
    int i,j;
    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++)
            if(v[i]>v[j]) swap(v[i],v[j]);
                       }

int main() {
int n,i;
n=rand();
if (n>100000) cout<<"Nu poate sorta";
    else{
int v[n];
srand(time(NULL));
for(i=1;i<=n;i++) v[i]=rand();
f(v, n);
for(i=1;i<=n;i++) cout<<v[i]<< " ";
    }
 return 0;
}
///pentru 10^5 numere random avem 24.458 s
///pana la 10^5 merge...apoi crapa
///best case O(n)-daca elementele necesita o singura parcurgere
///worst case O(n^2)-se parcurge vectroul de n^2 ori (ex: 9,8,7,6,5,4,3,2,1)
///average case O(n^2)
/// space complexity O(1)
//timp rulare fisier1.in:0.019 s pentru best case
