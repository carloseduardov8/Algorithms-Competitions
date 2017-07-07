#include <iostream>

using namespace std;

int main(){

    //Input:
    int n_tests, num1, num2, mdc, min_num;
    cin >> n_tests;

    //Input and program:
    for (int i=0; i<n_tests; i++){
        cin >> num1;
        cin >> num2;

        while (num2){
            int temp = num1;
            num1 = num2;
            num2 = temp%num2;
        }
        mdc = num1;

        cout << mdc << endl;
    }
}
