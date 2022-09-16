#include <iostream>
#include <vector>

using namespace std;

vector<int> mul(vector<int> &a, int b) {
    int t = 0;
    vector<int> c;
    for(int i = 0; i < a.size() || t > 0; i++) {
        if(i < a.size()) t += a[i] * b;
        c.push_back(t % 10);
        t /= 10;
    }
    while(c.size() > 1 && c.back() == 0) c.pop_back();
    return c;
}

int main(){

    string a;
    int b;
    cin >> a >> b;
    vector<int> A;
    for(int i = a.size() - 1; i >= 0; i--) A.push_back(a[i] - '0');
    auto C = mul(A, b);
    for(int i = C.size() -1; i >= 0; i--) cout  << C[i];
}