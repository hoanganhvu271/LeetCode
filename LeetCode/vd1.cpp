#include <bits/stdc++.h>
using namespace std;

void process()
{
	stack<int> st;
	int n;
	cin >> n;
	int a[n + 5], right[n + 5];
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = n; i >= 1; i--)
	{
		while (st.empty() != 1 && a[i] >= st.top())
			st.pop();
		if (st.empty() != 1)	
			right[i] = st.top();
		else 
			right[i] = -1;
		st.push(a[i]);
	}
	for (int i = 1; i<= n; i++)
		cout << right[i] << " ";
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		process();
		cout << endl;
	}
}
