#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    int a, b, max;
    cout << "adad avval";
    cin >> a;
    cout << "adad dovvom";
    cin >> b;

    if (a > b) max = a;
    else max = b;

    while (true) {

        if (max % a == 0 && max % b == 0) break;
        else ++max;
    }

    cout << "kmm :" << max;

    return 0;
}