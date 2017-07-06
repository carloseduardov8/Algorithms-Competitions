#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[]){
    int num;
    num = atoi(argv[1]);
    switch (num) {
        case 1:
            //Expected output: 10002.593
            cout << 6 << endl;
            cout << 10 << " " << 60 << " " << 70 << " " << 70 << " " << 80 << " " << 80 << endl;
            break;
        case 2:
            //Expected output: 12990.381
            cout << 3 << endl;
            cout << 100 << " " << 100 << " " << 100 << endl;
            break;
        case 3:
            //Expected output: 2772.765
            cout << 7 << endl;
            cout << 16 << " " << 37 << " " << 50 << " " << 35 << " " << 12 << " " << 39 << " " << 24 << endl;
            break;
    }
}
