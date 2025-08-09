#include <iostream>
#include <vector>
#include <cstring> // For memset
using namespace std;

    int t[301][10001];  // Memoization table

    int solve(vector<int>& coins, int i, int amount) {
        if (amount == 0) return 0;               // Base: 0 coins needed for amount 0
        if (i >= coins.size()) return 1e9;       // Base: No coins left, return big number

        if (t[i][amount] != -1) return t[i][amount];  // Use cached result

        int take = 1e9;
        if (coins[i] <= amount) {
            take = 1 + solve(coins, i, amount - coins[i]);  // Take the coin again
        }
        int not_take = solve(coins, i + 1, amount);         // Skip the coin

        return t[i][amount] = min(take, not_take);          // Store and return min
    }

    int coinChange(vector<int>& coins, int amount) {
        memset(t, -1, sizeof(t));                 // Initialize memo table
        int res = solve(coins, 0, amount);        
        return res >= 1e9 ? -1 : res;             // If not possible, return -1
    }

int main() {
    vector<int> coins = {1, 2, 5};
    int amount = 11;
    int result = coinChange(coins, amount);
    cout << "Minimum coins needed: " << result << endl;
    return 0;
}