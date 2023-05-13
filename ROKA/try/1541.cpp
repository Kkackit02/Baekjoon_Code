#include <bits/stdc++.h>
#include <sstream> 
using namespace std;


int main(void)
{
	string exp;
	
	stringstream ss;
	
	vector<int> Numbers;
	vector<char> Operators;

	
	cin>>exp;
		
	ss.str(exp);
	
	int temp;
	while(ss >> temp)
	{
		Numbers.push_back(temp);
	}
	
	
	cout<<Numbers<<endl;
	cout<<exp;
	
}
