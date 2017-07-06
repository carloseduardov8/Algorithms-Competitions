#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>

#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

double triangle_area(int a, int b, double angle);

int main(){

    //Input:
    int n, temp;
    vector<int> weights;

    cin >> n;
    while ( cin >> temp) {
        weights.push_back(temp);
    }

    //Program:
    double angle = (double) (M_PI*360/n)/180;
    vector<int> answer;
    //Find largest two values:
    sort(weights.begin(), weights.end());

    double result = 0;
    for (int i=0; i<n; i++){
        if (i == n-1){
            result += triangle_area(weights[i], weights[0], angle);
        } else {
            result += triangle_area(weights[i], weights[i+1], angle);
        }
    }
    cout << fixed;
    cout << setprecision(3);
    cout << result << endl;
}

double triangle_area(int a, int b, double angle){
    return 0.5*a*b*sin(angle);
}
