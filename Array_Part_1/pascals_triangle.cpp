#include <bits/stdc++.h>
using namespace std;

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long int>> v;
        for(int i=0;i<n;i++){
            vector<long long int> vi;
            for(int j=0;j<=i;j++){
                if(i==0){
                    vi.push_back(1);
                    break;
                }
                if(j==0){
                    vi.push_back(1);
                }
                else if(j==i){
                    vi.push_back(1);
                }
                else{
                    vi.push_back((v[i-1][j-1] + v[i-1][j]));
                }
            }
            v.push_back(vi);
        }
        return v;
}

int main(){
    int t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<long long int>> v = printPascal(n);
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[i].size();j++){
                cout<<v[i][j]<<' ';
            }
            cout<<endl;
        }
    }
}