#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

int main() {

    string line;
    getline(cin, line);

    double salary, sales;
    cin >> salary;
    cin >> sales;

    salary += 0.15*sales;

    cout << fixed;
    cout << setprecision(2);
    cout << "TOTAL = R$ " << salary << endl;

    return 0;
}
