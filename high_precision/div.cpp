

#include <iostream>
#include <vector>
#include <algorithm>

using namespace  std;

vector<int> div(vector<int> a, int b, int &r){
    r = 0;
    vector<int>c;

    for(int i = 0; i < a.size(); i++) {
        r = r * 10 + a[i];
        c.push_back(r / b);
        r %= b;
    }
    reverse(c.begin(), c.end());
    while (c.size() > 1 && c.back() == 0) c.pop_back();
    return c;
}


//int main(){
//
//
//    string a;
//    int b;
//    cin >> a >> b;
//    vector<int> A;
//    for(int i = 0; i < a.size(); i++) A.push_back(a[i] - '0');
//    int r;
//    auto c = div(A, b, r);
//    for(int i = c.size() - 1; i >=0; i--) cout << c[i];
//    cout << endl << r << endl;
//}