#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main(){
  ll t=1;
  //cin>>t;
  while(t--){
   ll n,r,x,y;                               //taking the inputs for n,r,x,y
   cin>>n>>r>>x>>y;
   vector<ll>c(n,0);                         //defining a vector c and taking values of ci
   for(int i=0;i<n;i++){
     cin>>c[i];
   }
   vector<ll>s(n,0);                         //defining a vector s and taking values of si
   for(int i=0;i<n;i++){
     cin>>s[i];
   }
   ll initial=r;                                 // saving initial rating in initial
   for(int i=0;i<n;i++){
     if(c[i]==1&&s[i]==1)                  //for days when both happen together(promotion days)
     r=r+x;
     else if(c[i]==1&&s[i]==0)             //for days when he competes without eating(Demotion days)
     r=r-y;
   }
   if(r>initial)                           //checking if rating has increased
   cout<<"promoted"<<endl;
   else if(r<initial)                      //checking if rating has decreased
   cout<<"demoted"<<endl;
   else if(r==initial)                     //checking if rating is unchanged
   cout<<"no"<<" "<<"change"<<endl;        
 }
    return 0;
}