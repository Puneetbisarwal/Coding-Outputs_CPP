#include<bits/stdc++.h>

using namespace std;

int main()
{
 string s;
 cout << "Enter the String = ";
 cin >> s;

 // precompute
 // ASCII Character using Lower Case a = 97 till z = 122
 // ASCII Character using Upper Case A = 65 till Z = 90
 int hash [26] = {0};
 for(int i=0; i<s.size(); i++)
 {
   hash[s[i] - 'a']++;
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
   cout << "Output = "<< hash[c-'a'] << endl;

 }
return 0;

}
