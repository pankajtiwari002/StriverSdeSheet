#include <bits/stdc++.h> 
using namespace std;

int maximumProfit(vector<int> &prices){
    // Write your code here.
    int n = prices.size();
    int profit=0;
    int minbuy=prices[0];
    for(int i=0;i<n;i++){
        minbuy = min(minbuy,prices[i]);
        profit = max(profit,(prices[i]-minbuy));
    }
    return profit;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        int ans = maximumProfit(v);
        cout<<ans<<endl;
    }
}