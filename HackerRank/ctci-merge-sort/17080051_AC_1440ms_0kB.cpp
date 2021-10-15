#include<bits/stdc++.h>
using namespace std;


long long Merge(int arr[], int aux[], int low, int mid, int high)
{
    int k = low, i = low, j = mid + 1;
    long long cnt = 0;

    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            aux[k++] = arr[i++];
        }
        else
        {
            aux[k++] = arr[j++];
            cnt += (mid - i + 1);
        }
    }
    while (i <= mid)
        aux[k++] = arr[i++];
    for (int i = low; i <= high; i++)
        arr[i] = aux[i];
    return cnt;
}

long long MergeSort(int arr[], int aux[], int low, int high)
{
    if (high == low)
        return 0;

    int mid = (low + ((high - low) >> 1));
     long long cnt = 0;
    cnt += MergeSort(arr, aux, low, mid);

    cnt += MergeSort(arr, aux, mid + 1, high);

    cnt += Merge(arr, aux, low, mid, high);

    return cnt;
}

int main()
{
    int n,t,i,j;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d",&n);
        long long cnt = 0;
        int arr[n+2],aux[n+2];
        for(j=0; j<n; j++)
        {
            scanf("%d",&arr[j]);
            aux[j] = arr[j];
        }
        getchar();
        printf("%lld\n", MergeSort(arr, aux, 0, n - 1));

    }
    return 0;
}
