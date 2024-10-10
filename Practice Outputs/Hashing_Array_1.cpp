#include<bits/stdc++.h>

using namespace std;

// Array is declared Globally
// Globally Size of Array can me 10^7 maximum

int hashh[10000000];
int main()
{
 int n;
 cout << "What is the size of the array = ";
 cin >> n;

 cout << "Print the array" << endl;

 int arr[n];
 for(int i=0;i<n;i++)
		{
			cin >> arr[i];
		}
 // precompute

 for(int i=0; i<n; i++)
 {
   hashh[arr[i]] += 1;
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
   cout << "Output = "<< hashh[number] << endl;

 }
return 0;

}
