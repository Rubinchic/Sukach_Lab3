#include <iostream>
#include <cmath>
using namespace std;

double calc(double a, int n, double epsilon = 1e-7) {
    double x = a;
    double next_x;

    do {
        next_x = (1.0 / n) * ((n - 1) * x + a / pow(x, n - 1));
        if (abs(next_x - x) < epsilon) 
        {
            break;
        }
        x = next_x;
    } while (true);

    return next_x;
}

int main() {
    double a;
    int n;

    cout << "Write num a: ";
    cin >> a;
    cout << "Enter the power n: ";
    cin >> n;

    double result = calc(a, n);

    cout << "Result ≈ " << result << endl;

    return 0;
}
