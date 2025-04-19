#include <iostream>
#include <vector>
using namespace std;

int TallestCandles(vector<int>& candles) {
    int max_height = candles[0];
    int count = 0;

    for (int i = 0; i < candles.size(); i++) {
        if (candles[i] > max_height) {
            max_height = candles[i];
            count = 1;
        } else if (candles[i] == max_height) {
            count++;
        }
    }

    return count;
}

int main() {
    vector<int> candles = {3, 2, 1, 3};
    cout << "Tallest candles count: " << TallestCandles(candles) << endl;
    return 0;
}
