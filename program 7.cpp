//Name: Abhishek Kumar
//registration number:1941012170
//program 7:10001st prime

#include<iostream>
#include<cmath>
using namespace std;
 
 int isprime(long long  i)			
			{
				if(i%2!=0 || i==2)	
				{
				int flag=0;
				for(long long j=3;j<=sqrt(i);j=j+2)
				if(i%j==0)
				{flag=1;break;}
				if(flag==0)
				return 1;
				}
			}
		
int main()
{
	long n,count=0,pro;
	cin>>n;
	pro=(n*n)/2;
	for(long long k=2;k<=pro;k++)
	{
		if(isprime(k)==1)
		count+=1;
		if(count==n)
		{cout<<k;exit(0);}
	}
}
	
	
    
