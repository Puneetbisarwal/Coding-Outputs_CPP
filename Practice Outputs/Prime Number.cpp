#include<bits/stdc++.h>

using namespace std;

int main()
{
int i,num,n,flag=0;
cout<<"Enter the number = ";
cin>>num;

if(num<=1)
{
  cout<<num<<" is NOT PRIME"<<endl;
  exit(1);
}

else
    {
        for (i = 2; i*i<=num;i++)
        {
            if(num%i==0)
                flag++;
        }
        if(flag>0)
            cout<<num<<" is NOT PRIME"<<endl;
        else
            cout<<num<<" is PRIME"<<endl;
    }

return 0;
}

