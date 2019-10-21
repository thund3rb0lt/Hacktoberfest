#include<bits/stdc++.h>
using namespace std;
    bool prime[10000001];int arr[1000000];
    int main()
    {
    int t,p;
    long long unsigned i;
    scanf("%d",&t);
    memset(prime,true,sizeof(prime));
    prime[1]=false;
    for(p=2;p*p<=10000000;p++)
    {
    if(prime[p]==true)
    {
    for(i=p*p;i<=10000000;i+=p)
    {
    prime[i]=false;
    }
    }
    }
    arr[0]=0;
    for(i=1;i<=1000000;i++)
    {
    if(prime[i]==true)
    {
    arr[i]=arr[i-1]+1;
    }
    else
    {
    arr[i]=arr[i-1];
    }
    }
    for(i=0;i<=t-1;i++)
    {long long unsigned p,l,r,count=0;
    scanf("%llu %llu",&l,&r);
    if(l>r)
    {
    int temp=l;
    l=r;
    r=temp;
    }
    count=arr[r]-arr[l-1];
    printf("%llu\n",count);
    }
    return 0;
    }
