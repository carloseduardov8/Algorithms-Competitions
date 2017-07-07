#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int n;
    cin >> n;

    unsigned long num;
    //For every number in the input:
    while(cin >> num){
        bool prime = true;
        //Checks for primality up until 2 times the square root (guaranteed to work):
        double root = 2*sqrt(num);
        for (int i=2; i<=root; i++){
            if ((num%i == 0) and (num != 2)){
                prime = false;
            }
        }
        //Checks the result of the primality test:
        if (prime == true){
            cout << "Prime" << endl;
        } else {
            cout << "Not Prime" << endl;
        }
    }
}
