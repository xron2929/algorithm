#include <iostream>
#include<stack>
using namespace std;
stack<int>s;
int n,m,k, arr[100002];
long long ans;
int main(void) 
{
	while (1) 
	{
		scanf("%d", &n);
		if (!n)return 0;
		for (int i = 1; i <= n; i++) scanf("%d", &arr[i]);
		arr[0] = arr[n + 1] = -1;
		ans = 0;
		for (int i = 0; i <= n + 1; i++) 
		{
			while (!s.empty() && arr[s.top()] >= arr[i])
			{
				int j = s.top();
				s.pop();
				if (s.empty())break;
				int width = i - s.top() - 1;
				ans = max(ans, (long long) arr[j] * width);
				
			}
			s.push(i);
		}
		printf("%lld\n", ans);
	}
	return 0;
}