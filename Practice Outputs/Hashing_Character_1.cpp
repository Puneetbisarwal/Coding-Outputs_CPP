#include<bits/stdc++.h>

using namespace std;

int main()
{
 string s;
 cout << "Enter the String = ";
 cin >> s;

 // precompute
 // Using All 256 ASCII Characters

 int hash [256] = {0};
 for(int i=0; i<s.size(); i++)
 {
   hash[s[i]]++;
 }

 int t;
 cout << "How many Queries are there = ";
 cin>>t;
 cout << "Enter the Queries = ";
 while(t--)
 {
   char c;
   cin >> c;

   // fetch
   cout << "Output = "<< hash[c] << endl;

 }
return 0;

}
