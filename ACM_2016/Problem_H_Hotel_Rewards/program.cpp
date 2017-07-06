#include <iostream>
#include <vector>

using namespace std;

int main(){

    //Input:
    int n, k, temp;
    int* prices; //prices[i] returns the price of night i
    int* max_prices; //max_price[i] returns the (i+1)-th biggest price
    int* tokens; //tokens[i] returns the available tokens after sleeping night i

    cin >> n;
    cin >> k;
    prices = new int[n];
    for (int i=0; i<n; i++){
        cin >> temp;
        prices[i] = temp;
    }


    //Program:

    //Calculates number of free nights:
    int free_nights = n/(k+1);
    max_prices = new int[free_nights];

    //Retrieves the highest prices:
    bool* bitmask = new bool[prices]();
    for (int i=0; i<free_nights; i++){
        int max = 0;
        int position = -1;
        //Loops through the array:
        for (int j=0; j<n; j++){
            if ((prices[j] > max) and (bitmask[j] == 0)){
                max = prices[j];
                position = j;
            }
        }
        max_prices[i] = max;
    }


}
