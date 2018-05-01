#include <iostream>
#include <cmath>

using namespace std;

int fatiar(int* arr, int k, int fat){
    int acc=0;
    for (int i=0; i<k; i++){
        acc += arr[i]/fat;
    }
    return acc;
}

int main(){
    int n; cin >> n; // (10)
    int k; cin >> k;
    int arr[k];

    long long int s = 0; // soma total; (616)

    for(int i=0; i<k; i++){
        cin >> arr[i];
        s += arr[i];
    }

    if (s < n){
        cout << 0 << endl;
        return 0;
    }

    int _max = (s/n) + 1;
    int _min = 0;
    //cout << "Limite Superior: " << _max <<endl;
    //cout << "Limite Inferior: " << _min <<endl;

    int cut;
    int ps;
	int bestResult = 0;

    do {

        cut  = (_max + _min)/2;
        ps = fatiar(arr, k, cut);
        //cout << "Pessoas Servidas: " << ps;
        //cout << " onde cada cut tem " << cut << " metros." << endl;

		// Case where cut was OK but might be possible to still become larger:
		if (ps >= n) {
			// Checks if result is current best:
			if (cut > bestResult){
				bestResult = cut;
			}
			// Tries to go for a larger cut:
			_min = cut + 1;
		// Case where cut was too big and did not serve all people:
		} else {
			// Makes next cut smaller:
            _max = cut;
		}

        //cout << "max = " << _max << endl << "min = " << _min << endl;
    } while (_max > _min);


    cout << bestResult << endl;
	return 0;
}
