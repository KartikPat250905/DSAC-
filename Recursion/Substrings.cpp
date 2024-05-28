#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

#include <bits/stdc++.h> 
void solve(vector<string>& ans,string str,int index,string output)
{
	if(index>=str.length())
	{
		if(output.length() > 0)
			ans.push_back(output);
		return ;
	}
	//exclude
	solve(ans,str,index+1,output);
	//include
	char ch = str[index];
	output.push_back(ch);
	solve(ans,str,index+1,output);
}

vector<string> subsequences(string str){
	vector<string> ans;
	int index = 0;
	string output;
	output = "";
	solve(ans,str,index,output);
	return ans;
}
