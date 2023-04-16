#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double r; //利率
    int n, p; //期數、每期投入金額
    cin >> r >> n >> p;

    double total = p * (pow(1 + r, n) - 1) / r * (1 + r); 

    cout << (int)round(total) << endl; 

    return 0;
}
