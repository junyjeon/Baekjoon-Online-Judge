#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void solve()
{
	int k, n;
	cin >> k >> n;

	int cables[k];

	for (int i = 0; i < k; i++)
		cin >> cables[i];
	long long left = 1, right = *max_element(cables, cables + k);
	while (left <= right)
	{
		long long mid = (left + right) / 2;
		long long total = 0;
		for (int i = 0; i < k; i++)
			total += cables[i] / mid;
		if (total >= n)
			left = mid + 1;
		else
			right = mid - 1;
	}
	cout << right;
}

int main(void)
{
	fast_io;
	solve();
	return 0;
}