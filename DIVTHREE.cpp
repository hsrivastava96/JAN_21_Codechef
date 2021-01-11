#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	int soln[t];
	for(int i=0; i<t; i++)
	{
	    int n, k, d, sum = 0, possible_Days = 0;
	    vector<int> a;
	    cin>>n;
	    cin>>k;
	    cin>>d;
	    for(int j = 0; j < n; j++)
	    {
	        int val;
	        cin>>val;
	        sum+=val;
	    }
	    possible_Days = sum/k;
	    if(possible_Days > d)
	        soln[i] = d;
        else
            soln[i] = possible_Days;
	}
	
	for(int i = 0; i < t; i++)
	    cout<<soln[i]<<endl;
	return 0;
}
