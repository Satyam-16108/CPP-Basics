#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s="keshav mahavidyalaya";
	
	int freq[26];
	
	for (int i=0;i<26;i++)			//Declaration
		freq[i]=0;
	
	for(int i=0;i<s.size();i++)	
		freq[s[i]-'a']++;
		
	char ans='a';
	int	max_freq=0;
	
	for(int i=0;i<26; i++)
	{
		if(freq[i]	> max_freq)
		{
			max_freq = freq[i];
			ans= i+'a';				//i is from 0-25 so (+a = +1)
		}
	}
	
	cout<<"Max Occurring Alphabet - "<<ans<<endl; 
	cout<<"Frequency - "<<max_freq <<endl;
	
	return 0;
}
