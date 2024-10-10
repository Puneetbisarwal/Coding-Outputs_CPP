#include<bits/stdc++.h>

using namespace std;

int main()
{
 int n;
 cout << "What is the size of the array = ";
 cin >> n;

 cout << "Print the array" << endl;

 // Array is declared inside the Main Class
 // Inside Main Class Size of Array can me 10^6 maximum
 int arr[n];
 for(int i=0;i<n;i++)
		{
			cin >> arr[i];
		}

 // precompute

 int hash [13] = {0};
 for(int i=0; i<n; i++)
 {
   hash[arr[i]] += 1;
 }

 int t;
 cout << "How many Queries are there = ";
 cin>>t;
 cout << "Print the Queries = ";
 while(t--)
 {
   int number;
   cin >> number;

   // fetch
   cout << "Output = "<< hash[number] << endl;

 }
return 0;

}
