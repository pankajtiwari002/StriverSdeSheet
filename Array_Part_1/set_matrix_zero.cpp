#include <bits/stdc++.h>
using namespace std;

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int n = matrix.size(),m = matrix[0].size();
	int row[n],col[m];
	for(int i=0;i<n;i++) row[i]=1;
	for(int i=0;i<m;i++) col[i]=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j]==0){
				row[i]=0;
				col[j]=0;
			}
		}
	}
	for(int i=0;i<n;i++){
		if(row[i]==0){
			for(int j=0;j<m;j++){
				matrix[i][j]=0;
			}
		}
	}
	for(int i=0;i<m;i++){
		if(col[i]==0){
			for(int j=0;j<n;j++){
				matrix[j][i]=0;
			}
		}
	}
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>> matrix(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>matrix[i][j];
            }
        }
        setZeros(matrix);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<matrix[i][j]<<' ';
            }
            cout<<endl;
        }
    }
    return 0;
}