#include <iostream>
using namespace std; 

int main() {
    int n, sum = 0; 
    cin >> n; 
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    cout << sum << endl;
    
    // Mathmatical method 
    // cout << (long long)n * (n + 1) / 2 << "\n";
    return 0; 
}