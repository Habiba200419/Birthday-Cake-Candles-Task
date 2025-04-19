#include <iostream>
#include <vector>
using namespace std;

int TallestCandlesRecursive(vector<int>& candles, int index, int max_height, int count) {
    if (index == candles.size()) return count;

    if (candles[index] > max_height) {
        return TallestCandlesRecursive(candles, index + 1, candles[index], 1);
    } else if (candles[index] == max_height) {
        return TallestCandlesRecursive(candles, index + 1, max_height, count + 1);
    } else {
        return TallestCandlesRecursive(candles, index + 1, max_height, count);
    }
}

int main() {
    vector<int> candles = {3,2,1,3};
    cout << "Tallest candles count (recursive): " 
         << TallestCandlesRecursive(candles, 0, candles[0], 0) << endl;
    return 0;
}
