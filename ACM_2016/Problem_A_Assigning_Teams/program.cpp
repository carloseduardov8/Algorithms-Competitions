#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){

    //Input:
    vector<int> weights;
    int temp;
    while ( cin >> temp) {
        weights.push_back(temp);
    }

    //Program:
    int min=10000, calc;

    //Brute forces every combination of teams:
    do {
        calc = abs(weights[0] + weights[1] - (weights[2] + weights[3]));
        if (calc < min){
            min = calc;
        }
    } while (next_permutation(weights.begin(), weights.end()));

    //Prints result:
    cout << min << endl;;
}
