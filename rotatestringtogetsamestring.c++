#include <bits/stdc++.h> 
int minimumRotations(int n, string s)
{
	// Write your code here
	string str=s;int i=0;
	while(true)
	{
		str= str.substr(1) + str[0];
		i++;
		if(str== s){
			break;
		}
	}
	return i;
}
//rotate string how manny times to get the same string.