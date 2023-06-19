#include <bits/stdc++.h> 
using namespace std;
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.
    vector<int> v = permutation;
    int ind = -1;
    for(int i=n-1;i>=1;i--){
        if(v[i]>v[i-1]){
            ind = i;
            break;
        }
    }
    if(ind==-1){
        reverse(v.begin(),v.end());
        return v;
    }
    // cout<<ind<<endl;
    int jl=-1;
    for(int i=n-1;i>=ind;i--){
        if(v[i]>v[ind-1]){
            if(jl==-1){
                jl=i;
            }
            else if(v[i]<v[jl]){
                jl=i;
            }
        }
    }
    // cout<<jl<<endl;
    swap(v[jl],v[ind-1]);
    reverse(v.begin()+ind,v.end());
    return v;
}

int main(){
    int t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<int> ans = nextPermutation(v,n);
        for(int i=0;i<n;i++){
            cout<<ans[i]<<' ';
        }
        cout<<endl;
    }
}