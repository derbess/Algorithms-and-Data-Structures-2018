#include<iostream>
using namespace std;

long long int n,a[1111111], cnt;
void quicksort(int l, int r) {
    int init_l = l;
    int init_r = r;
    int mid = a[(l + r) / 2];
    while (l < r) {
        while (a[l] < mid) l++;
        while (a[r] > mid) r--;
        if (l <= r) {
            swap(a[l], a[r]);
            l++;
            r--;
        }
    }
    if (init_l < r)
        quicksort(init_l, r);
    if (l < init_r)
        quicksort(l, init_r);
}
int main()
{
	cin>>n;
	for (int i = 1; i <= n; i++)
	{
		cin>>a[i];
	}
	quicksort(1, n);
	int mn = a[1];
	int mx = a[n];
	for (int i = 1;i <= n; i++)
	{
		if(a[i] > mn && a[i] < mx)
		{
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}
