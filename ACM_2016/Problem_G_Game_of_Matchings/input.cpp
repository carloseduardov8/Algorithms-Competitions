#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[]){
    int num;
    num = atoi(argv[1]);
    switch (num) {
        case 1:
            //Expected output: 2
            cout << "awawww" << endl;
            cout << 3 << endl;
            cout << 10 << " " << 21 << " " << 10 << endl;
            break;
        case 2:
            //Expected output: 0
            cout << "abcdefghij" << endl;
            cout << 10 << endl;
            cout << 1 << " " << 2 << " " << 3 << " " << 4 << " " << 5 << " " << 6 << " " << 7 << " " << 8 << " "  << 9 << " " << 1 << endl;
            break;
        case 3:
            //Expected output: 0
            cout << "abbabaabbaababba" << endl;
            cout << 4 << endl;
            cout << 1 << " " << 2 << " " << 2 << " " << 1 << endl;
            break;
        case 4:
            //Expected output: 0
            cout << "aabcddabccefkkgem" << endl;
            cout << 5 << endl;
            cout << 10 << " " << 10 << " " << 3 << " " << 14 << " " << 9 << endl;
            break;
    }
}
