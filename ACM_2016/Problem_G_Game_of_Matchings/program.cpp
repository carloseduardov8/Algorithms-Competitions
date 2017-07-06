#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main(){

    //Input:
    string line;
    getline(cin, line);

    int n;
    cin >> n;

    vector<int> codes;
    int temp;
    while (cin >> temp){
        codes.push_back( temp );
    }

    //Program:
    int counter = 0;
    char* code_to_char;
    int* char_to_code;

    //Loops through every char of string:
    for (int i=0; i<line.length(); i++){

        //If number of remaining characters < codes size, break:
        if ((line.length() - i) < codes.size()){
            break;
        }
        code_to_char = new char[27]();
        char_to_code = new int[255]();

        //Tries to match code to string:
        for (int j=0; j<n; j++){

            //Checks to see if assigning letter i+j to codes[j] is possible:
            if ( ((code_to_char[ codes[j] ] == 0) or (code_to_char[ codes[j] ] == line[i+j]))
            and ( (char_to_code[ line[i+j] ] == codes[j]) or (char_to_code[ line[i+j] ] == 0) )){
                //Assigns letter i+j to codes[j]:
                code_to_char[ codes[j] ] = line[i+j];
                char_to_code[ line[i+j] ] = codes[j];
            //Assigning isnt possible, continue the outer loop:
            } else {
                break;
            }
            //End of successful inner loop, increments counter:
            if (j == n-1){
                counter++;
            }
        }
        delete[] code_to_char;
        delete[] char_to_code;
    }
    //Prints the counter:
    cout << counter << endl;

}
