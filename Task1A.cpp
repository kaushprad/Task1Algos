#include<bits/stdc++.h>
using namespace std;

#define make_it_fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define mp make_pair
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define ll long long
#define ld long double
#define endl "\n"
#define ff first
#define ss second
#define imn INT_MIN
#define imx INT_MAX

//basic logic is that any number is the average of two numbers one greater than it and the other smaller than it.
//defining solve function to check all the possible outcomes

void solve()
{
    string s;
    ll n;
    cin>>n;
    cin>>s;
    ll i;
    string s1(n,'1');              // Initialising a string s1 with the largest possible binary of n digits(1111...ntimes)
                                   // the case in which it is not possible to print two such binary strings
    if(s==s1)                      //if s=s1 it means s is a binary of type 111... and any binary larger than it will have more length
    {
        cout<<-1<<endl;
        return;
    }
    ll flag=0;
    for(i=1;i<n;i++)               // this loop checks if the binary string is zero, because it won't be posiible for this case
    {
        if(s[i]=='1')
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<-1<<endl;
        return;
    }
    else                          
    {
        s1=s;
        i=n-1;
        while(s1[i]=='0')            //This loop gives the string that is greater than entered string
        {
            s1[i]='1';
            i--;
        }
        s1[i]='0';
        cout<<s1<<" ";
        s1=s;
        i=n-1;
        while(s1[i]=='1')            //This loop gives the string smaller than the entered one
        {
            s1[i]='0';
            i--;
        }
        s1[i]='1';
        cout<<s1<<endl;
    }
}

int main()
{
    int TEST_CASES=1;
    // cin>>TEST_CASES;
    while(TEST_CASES--)
    {
        solve();
    }
    return 0;
}