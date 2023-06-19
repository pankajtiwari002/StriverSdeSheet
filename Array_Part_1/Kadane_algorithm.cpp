#include <bits/stdc++.h> 
using namespace std;
long long maxSubarraySum(int arr[], int n)
{
    long long maxsum = 0,currsum=0;
    for(int i=0;i<n;i++){
        currsum += arr[i];
        maxsum = max(maxsum,currsum);
        if(currsum<0){
            currsum=0;
        }
    }
    return maxsum;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        long long int maxSum = maxSubarraySum(arr,n);
        cout<<maxSum<<endl;
    }
}