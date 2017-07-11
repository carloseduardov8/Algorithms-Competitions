#include <iostream>
#include <vector>

using namespace std;

int main(){

    //Input:
    vector<int> vec;
    int temp;
    while(cin >> temp){
        if (temp == 0){
            break;
        } else {
            vec.push_back(temp);
        }
    }

    //Program:
    int n;
    bool* bitmask;
    bool next_m;
    //Iterates through the input vector:
    for (int i=0; i<vec.size(); i++){
        //Number of regions:
        n = vec[i];
        //Sets up loop stop condition:
        next_m = true;
        //Brutes force m:
        for (int m=2; next_m==true; m++){
            //At the start, all regions havent been visited yet:
            bitmask = new bool[n+1]();
            //Counter of turnoffs:
            int counter = 0;
            //First region to turn off:
            int k = 1;
            //Systematically turns off k'th region before region 13:
            while(true){
                //Turns off region k:
                bitmask[k] = true;
                counter++;
                //If 13 has been turned off but not as the last region, break:
                if ((k == 13) and (counter != n)){
                    break;
                //If 13 has been turned off as last region, output m and break from both loops:
                } else if (k == 13){
                    cout << m << endl;
                    next_m = false;
                    break;
                }
                //Recalculates k:
                int aux_count = 0;
                while (aux_count != m){
                    k++;
                    //Wraps to 1 if need be:
                    if (k == n+1){
                        k = 1;
                    }
                    //Only counts region if its not off yet:
                    if (bitmask[k] == false){
                        aux_count++;
                    }
                }
            }
        }
    }

}
