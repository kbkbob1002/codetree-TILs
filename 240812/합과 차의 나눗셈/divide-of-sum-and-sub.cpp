#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    double c;
    cin >> a >> b;

    cout.precision(3);
    c= double(a+b) / (a-b);
    cout << c;
    return 0;
}