#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[]){
    int num;
    num = atoi(argv[1]);
    switch (num) {
        case 1:
            //Expected output: 2772.765
            cout << 6 << " " << 2 << endl;
            cout << 10 << " " << 3 << " " << 12 << " " << 15 << " " << 12 << " " << 18  << endl;
            break;
        case 2:
            //Expected output: 2772.765
            cout << 6 << " " << 1 << endl;
            cout << 10 << " " << 3 << " " << 12 << " " << 15 << " " << 12 << " " << 18  << endl;
            break;
        case 3:
            //Expected output: 2772.765
            cout << 5 << " " << 5 << endl;
            cout << 1 << " " << 2 << " " << 3 << " " << 4 << " " << 5 << endl;
            break;
    }
}
