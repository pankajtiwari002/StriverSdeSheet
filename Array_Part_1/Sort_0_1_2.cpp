#include <bits/stdc++.h> 
using namespace std;

void sort012(int *arr, int n)
{
   //   Write your code here
   int a[3]={0};
   for(int i=0;i<n;i++) a[arr[i]]++;
   int ind=0;
   for(int i=0;i<3;i++){
      while(a[i]!=0){
         arr[ind]=i;
         a[i]--;
         ind++;
      }
   }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort012(a,n);
        for(int i=0;i<n;i++){
            cout<<a[i]<<' ';
        }
        cout<<endl;
    }
}