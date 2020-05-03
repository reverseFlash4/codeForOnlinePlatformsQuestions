#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n;
int moves[100];
int ans[100007]={0};
int solve(int k){
    if(ans[k]){
        return ans[k];
    }
    for(int i=0;i<n;i++){
        if(k>=moves[i]){
        if(solve(k-moves[i])==2){
            ans[k]=1;
            return ans[k];
        }
      }
    }
   ans[k]=2;
   return ans[k];
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	   int k;
	   cin>>n>>k;
	   for(int i=0;i<n;i++){
	       cin>>moves[i];
	   }
	   ans[0]=2;
	   if(solve(k)==1){
	    cout<<"First";   
	   }
	   else{
	       cout<<"Second";
	   }
       return 0;
}
