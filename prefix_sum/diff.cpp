#include  <iostream>

using namespace std;
const int N = 100010;

int b[N];

int n,m;

void insert(int l, int r, int c ) {
    b[l] += c;
    b[r + 1] -= c;
}

//int main(){
//
//    scanf("%d%d", &n, &m);
//
//    for(int i = 0; i <n; i++) {
//        int d;
//        scanf("%d", &d);
//        insert(i, i, d);
//    }
//
//    while(m--) {
//        int l, r,c;
//        scanf("%d%d%d", &l, &r, &c);
//        insert(l - 1, r - 1, c);
//    }
//    for(int i = 0; i < n; i++) {
//        if(i > 0) b[i] += b[i-1];
//
//        printf("%d ", b[i]);
//    }
//
//}