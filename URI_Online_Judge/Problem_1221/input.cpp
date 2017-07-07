#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[]){
    int num;
    num = atoi(argv[1]);
    switch (num) {
        case 1:
            //Expected output:
            cout << 3 << endl;
            cout << 123321 << endl; //Not Prime
            cout << 123 << endl; //Not Prime
            cout << 103 << endl; //Prime
            break;
    }
}
