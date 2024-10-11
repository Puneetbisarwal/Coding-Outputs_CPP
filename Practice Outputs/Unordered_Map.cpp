#include<bits/stdc++.h>

using namespace std;

// Time Complexity of Maps Operations for Storing and Fetching is O(1) for Best Case, Average Case
// Time Complexity of Maps Operations for Storing and Fetching is O(N) for Worst  whereas N is the number of elements.

int main()
{
 int n;
 cout << "What is the size of the array = ";
 cin >> n;

 cout << "Enter the array" << endl;

 // Array is declared inside the Main Class
 // Inside Main Class Size of Array can me 10^6 maximum
 int arr[n];
 unordered_map<int, int> mpp;
 for(int i=0; i<n; i++)
 {
   cin >> arr[i];
   mpp[arr[i]]++;
 }

 // pre-compute


 // iterate in the map
  for(auto it : mpp)
  {
    cout << it.first << "->" << it.second << endl;
  }

 int t;
 cout << "How many Queries are there = ";
 cin>>t;
 cout << "Enter the Queries = ";
 while(t--)
 {
   int number;
   cin >> number;

   // fetch
   cout << "Output = "<< mpp[number] << endl;

 }
return 0;

}
