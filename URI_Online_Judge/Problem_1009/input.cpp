#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[]){
    int num;
    num = atoi(argv[1]);
    switch (num) {
        case 1:
            //Expected output: TOTAL = R$ 684.54
            cout << "JOAO" << endl;
            cout << 500.00 << endl;
            cout << 1230.30 << endl;
            break;
        case 2:
            //Expected output: TOTAL = R$ 700.00
            cout << "PEDRO" << endl;
            cout << 700.00 << endl;
            cout << 0.00 << endl;
        case 3:
            //Expected output: TOTAL = R$ 1884.58
            cout << "MANGOJATA" << endl;
            cout << 1700.00 << endl;
            cout << 1230.50 << endl;
    }
}
