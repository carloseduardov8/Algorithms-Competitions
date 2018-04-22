#include <iostream>
#include <cmath>

using namespace std;

int
fatiar(int* arr, int k, int fat){
    int acc=0;
    for (int i=0; i<k; i++){
        acc += arr[i]/fat;
    }
    return acc;
}

int
main(){
    int n; cin >> n; // (10)
    int k; cin >> k;
    int p[k];

    long long int s = 0; // soma total; (616)

    for(int i=0; i<k; i++){
        cin >> p[i];
        s += p[i];
    }

    if (s < n){
        cout << 0 << endl;
        return 0;
    }

    int _max = s/n; // limite superior (61)
    int _min = 1;   // limite inferior (1)

    cout << "Limite Superior: " << _max <<endl;
    cout << "Limite Inferior: " << _min <<endl;

    int t;
    int ps;

    do {
        t  = (_max + _min)/2;
        ps = fatiar(p, k, t);
        cout << "Pessoas Servidas: " << ps;
        cout << " onde cada fatia tem " << t << " metros." << endl;

        if (ps < n)
            _max = t; //(58)
        else
            _min = t; //(57)

        cout << "max = " << _max << endl << "min = " << _min << endl;
    } while (_max > _min);

    cout << t << endl;
return 0;
}
