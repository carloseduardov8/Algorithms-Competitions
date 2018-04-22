#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[]){
    int num;
    num = atoi(argv[1]);
    switch (num) {
        case 1:
            //Expected output:
            cout << 10 << endl; //N
            cout << 4 << endl; //K
            cout << 120 << " " << 89 << " " << 230 << " " << 177 << endl;
            break;
		case 2:
            //Expected output:
            cout << 3 << endl; //N
            cout << 2 << endl; //K
            cout << 45 << " " << 85 << endl;
            break;
		case 3:
			//Expected output:
			cout << 7 << endl; //N
			cout << 7 << endl; //K
			cout << 100 << endl;
			cout << 98 << endl;
			cout << 99 << endl;
			cout << 505 << endl;
			cout << 102 << endl;
			cout << 97 << endl;
			cout << 101 << endl;
			break;
		case 4:
            //Expected output:
            cout << 1 << endl; //N
            cout << 1 << endl; //K
            cout << 50 << endl;
            break;
    }
}
