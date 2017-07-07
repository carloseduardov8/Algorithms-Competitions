#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[]){
    int num;
    num = atoi(argv[1]);
    switch (num) {
        case 1:
            //Expected output:
            cout << 3 << " " << 4 << " " << 5 << endl; //tripla pitagorica primitiva
            cout << 6 << " " << 8 << " " << 10 << endl; //tripla pitagorica
            cout << 5 << " " << 13 << " " << 12 << endl; //tripla pitagorica primitiva
            cout << 4 << " " << 5 << " " << 6 << endl; //tripla
            break;
    }
}
