
#include <iostream>
#include<cstring>
using namespace std;

void seive(int  n)
{
    //an boolean array
    bool prime[n+1];
    memset(prime,true,sizeof(prime));
    
    for(int p=2 ;p*p<=n;p++)
    {
        if (prime[p]==true)
        {
            for (int i=p*p;i<=n;i=i+p)
            {
                prime[i]=false;
            }
        }
    }

    for(int j=2;j<=n;j++)
    {
        if(prime[j]==true)
        {
            cout<<j<<endl;
        }
    }
}

int main() {
  cout<<"ENTER A NUMBER UPTO WHICH YOU WANT TO PRINT PRIME NUMBERS:"<<endl;
  int n; cin>>n;
  seive(n);
	return 0;
}
