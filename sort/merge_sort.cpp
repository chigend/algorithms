#include <iostream>

using namespace std;

const int N = 100000;


int t[N+10];
void merge_sort(int q[], int l, int r) {
    if(l >= r) {
        return;
    }

    int mid = l + r >> 1;

    merge_sort(q, l, mid);
    merge_sort(q, mid + 1, r);
    int i = l, j = mid + 1, k = 0;
    while(i <= mid && j <= r) {
        if(q[i] <= q[j]) t[k++] = q[i++];
        else t[k++] = q[j++];
    }
    while(i <= mid) t[k++] = q[i++];
    while(j <= r) t[k++] = q[j++];
    for(i = l, j = 0; i <= r; i++, j++) q[i] = t[j];

}
//int main(){
//
//    int n;
//    cin >> n;
//    int q[n];
//    for(int i = 0; i<n; i++) scanf("%d", &q[i]);
//    merge_sort(q, 0, n - 1);
//    for(int i = 0; i < n; i++) cout << q[i] << " ";
//}
//
//
