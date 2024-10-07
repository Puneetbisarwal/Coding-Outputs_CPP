#include<bits/stdc++.h>

using namespace std;

int main()
{
char i;
cout<<"Enter the Character = ";
cin>>i;

if ((i>64) && (i<91))
cout<<i <<" = ASCII Code is " <<(int)i << " in a UpperCase Character"<<endl;

else if ((i>96) && (i<123))
      cout<<i <<" = ASCII Code is "<<(int)i <<" in a LowerCase Character"<<endl;

   return 0;
}
