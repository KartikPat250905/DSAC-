#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        int cnt = 0;
        vector<bool> prime(n + 1, true);
        prime[0] = prime[1] = false;
        for (int i = 2; i < n; i++) {
            if (prime[i])
            {
                cnt++;
                for (int j = 2 * i; j < n; j += i) {
                    prime[j] = false;
                }
            }
        }
        return cnt;
    }
};

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    Solution solution;
    int count = solution.countPrimes(n);

    cout << "Number of prime numbers less than " << n << ": " << count << endl;

    return 0;
}
