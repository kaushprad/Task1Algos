#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define ff first
#define ss second
int main()
{
    ll a[6]={10,8,7,16,9,43},i,j;
    map<pair<ll,ll>,ll> m;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<6;j++)
        {
            m[mp(a[i],a[j])]=a[i]*a[j];
        }
    }
    cout<<1<<" "<<2<<endl;
    ll pro,tempx,tempy,ans[6];
    cin>>pro;
    for(auto i:m)
    {
        if(i.ss==pro)
        {
            tempx=i.ff.ff;
            tempy=i.ff.ss;
        }
    }
    cout<<1<<" "<<3<<endl;
    cin>>pro;
    ll tx,ty;
    for(auto i:m)
    {
        if(i.ss==pro)
        {
            tx=i.ff.ff;
            ty=i.ff.ss;
        }
    }
    if(tx==tempx)
    {
        ans[0]=tx;
        ans[1]=tempy;
        ans[2]=ty;
    }
    else if(tx==tempy)
    {
        ans[0]=tx;
        ans[1]=tempx;
        ans[2]=ty;
    }
    else if(ty==tempy)
    {
        ans[0]=ty;
        ans[1]=tempx;
        ans[2]=tx;
    }
    else if(ty==tempx)
    {
        ans[0]=ty;
        ans[1]=tempy;
        ans[2]=tx;
    }
    cout<<1<<" "<<4<<endl;
    cin>>pro;
    ans[3]=pro/ans[0];
    cout<<1<<" "<<5<<endl;
    cin>>pro;
    ans[4]=pro/ans[0];
    ll vis[50]={};
    for(i=0;i<5;i++)
    vis[ans[i]]=1;
    for(i=0;i<6;i++)
    {
        if(vis[a[i]]==0)
        {
            ans[5]=a[i];
            break;
        }
    }
    for(i=0;i<6;i++)
    cout<<ans[i]<<" ";
    cout<<endl;
}