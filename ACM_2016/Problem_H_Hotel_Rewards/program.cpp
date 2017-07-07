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

    //Retrieves the highest prices and saves them to max_prices in descending order:
    bool* bitmask = new bool[prices]();
    for (int i=0; i<free_nights; i++){
        int max = 0; //Max element
        int pos = -1; //Position of max element
        //Loops through the array:
        for (int j=0; j<n; j++){
            if ((prices[j] > max) and (bitmask[j] == false)){
                max = prices[j];
                pos = j;
            }
        }
        max_prices[i] = max;
        bitmask[pos] = true;
    }
    delete[] bitmask;

    //Fills in the array of available tokens:
    for (int i=0; i<n; i++){
        tokens[i] = i+1;
    }

    //Iterates through the array of max prices, starting from the highest price:
    for (int i=0; i<free_nights; i++){
        
    }


}
