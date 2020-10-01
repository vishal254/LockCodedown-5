#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	// ----------- Uncomment below code to write output to file (cout.txt)
	// fstream file; 
    // file.open("cout.txt", ios::out); 
    // string line; 
  
    // // Backup streambuffers of  cout 
    // streambuf* stream_buffer_cout = cout.rdbuf(); 
    // streambuf* stream_buffer_cin = cin.rdbuf(); 
  
    // // Get the streambuffer of the file 
    // streambuf* stream_buffer_file = file.rdbuf(); 
  
    // // Redirect cout to file 
    // cout.rdbuf(stream_buffer_file);
	// ----------- Uncomment above code to write output to file (cout.txt)	
	int n;
	cin>>n;
	for(int i = 0; i < n; i++) // print first line
	{
		if(i == 0 || i >= n / 2)
			cout<<"*";
		else
			cout<<" ";
	}
	cout<<"\n";
	for(int i = 0; i < n/2 - 1; i++)
	{
		cout<<"*";
		for(int j = 0; j < n/2; j++)
		{
			if(j == n/2 - 1)
				cout<<"*";
			else
				cout<<" ";
		}
		cout<<"\n";
	}
	for(int i = 0; i < n; i++)
	{
		cout<<"*";
	}
	cout<<"\n";
	for(int i = 0 ; i < n/2 - 1; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(j == n/2 || j == n-1)
				cout<<"*";
			else
				cout<<" ";
		}
		cout<<"\n";
	}
	for(int i = 0; i < n; i++)
	{
		if(i <= n/2 || i == n-1)
			cout<<"*";
		else
			cout<<" ";
	}
    // file.close(); 
    return 0; 
}