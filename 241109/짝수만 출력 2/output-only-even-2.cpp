#include <iostream>
using namespace std;

int main() {
    int b, a;
    cin >> b >> a;

    int current = b;

    // while문을 사용하여 내림차순으로 짝수 출력
    while (current >= a) {
        if (current % 2 == 0) { // 짝수인지 확인
            cout << current << " ";
        }
        current--; // 1씩 감소
    }

    return 0;
}