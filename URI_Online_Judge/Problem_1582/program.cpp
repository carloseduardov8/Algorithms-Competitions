#include <iostream>

using namespace std;

int main(){

    //Input:
    int sides[3];
    while (cin >> sides[0]){
        cin >> sides[1];
        cin >> sides[2];

        //Starts building the answer:
        cout << "tripla";

        //Finds max value:
        int max = 0;
        for (int i=0; i<3; i++){
            if (sides[i] > max){
                max = sides[i];
            }
        }

        //Sums two small sides:
        int sum = 0;
        for (int i=0; i<3; i++){
            if (sides[i] != max){
                sum += sides[i]*sides[i];
            }
        }
        //Checks if tuple is pythagorical:
        if (sum == max*max){
            cout << " pitagorica";

            //Checks if pythagorical tuple is primitive:
            int a = sides[0];
            int b = sides[1];
            while (b){
                int temp = a;
                a = b;
                b = temp%b;
            }
            //If GCD is already 1, no need to calculate it again for other two values:
            if (a == 1){
                cout << " primitiva" << endl;
                continue;
            } else {
                a = sides[1];
                b = sides[2];
                while (b){
                    int temp = a;
                    a = b;
                    b = temp%b;
                }
                if (a == 1){
                    cout << " primitiva" << endl;
                    continue;
                }
            }
        }

    cout << endl;
    }

}
