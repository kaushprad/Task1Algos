#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
string sent;
cin>>sent;
		if (sent.length()==1)
		{
		    cout<<0;
		}
		else
		{
		    int count=0;
		    string str;
                    str=sent;
		    while (true)
		    {
		        
		        string sub1=str.substr(0,str.length()/2);
		        string sub2=str.substr(str.length()/2,str.length());
		        if (sub1==sub2)
		        {
		            count++;
		            str=sub1;
                            if (str.length()==1)
                                break;
		        }
		        else
		            break;
		    }
		    cout<<(count);
		}
    }
