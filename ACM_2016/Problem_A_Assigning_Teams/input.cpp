#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[]){
    int num;
    num = atoi(argv[1]);
    switch (num) {
        case 1:
            //Expected output: 7
            cout << 4 << " " << 7 << " " << 10 << " " << 20 << endl;
            break;
        case 2:
            //Expected output: 999
            cout << 0 << " " << 0 << " " << 1 << " " << 1000 << endl;
            break;
        case 3:
            //Expected output: 0
            cout << 1 << " " << 2 << " " << 3 << " " << 4 << endl;
            break;
    }
}
