#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main()
{
    int i,n,a,sum=0,ans=0;
    freopen("test.in","r",stdin);
   // freopen("test.out","w",stdout);
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>a;
        if (sum<0)
            sum=0;
        sum+=a;
        if (sum>ans)
            ans=sum;
    }
    cout<<ans<<endl;
    return 0;
}


