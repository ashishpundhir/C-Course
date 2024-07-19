#include <iostream>
using namespace std;

double power(int base, int exp) {
    double result = 1.0;
    for (int i = 0; i < exp; ++i) {
        result *= base;
    }
    return result;
}

void calculateSeriesSum(int n) {
    double sum = 0.0;

    // Iterate from 1 to n
    for (int i = 1; i <= n; ++i) {
        double term = 1.0 / power(i, i); // Calculate the term 1/i^i
        
        // Print the current term
        cout << "1/" << i << "^" << i << " = " << term << endl;
        
        // Add the current term to the sum
        sum += term;
    }
    
    // Print the total sum of the series
    cout << "Sum of the series up to " << n << " terms: "<< sum << endl;
}

int main() {
    int n;
    cout << "Input the value for nth term: ";
    cin >> n;
    
    calculateSeriesSum(n);
    
    return 0;
}
