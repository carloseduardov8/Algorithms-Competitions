#include <iostream>

using namespace std;

int main(){
	
	//Input:
	string line;
	getline(cin, line);

    //Bitmask to hold which values are consonants:
	bool* bitmask = new bool[51]();

    //Count of consonants:
	int c_size = 0;

    //Find consonants in input:
	for (int i=0; i<line.length(); i++){
		if ((line[i] != 'a') and (line[i] != 'e') and (line[i] != 'i') and (line[i] != 'o') and (line[i] != 'u')){
			bitmask[i] = true;
			c_size++;
		}
	}

    //Array to hold all vowels of input string:
	char* word = new char[line.length()-c_size];
	int w_count = 0;

    //Copy vowels from input string to char* word:
	for (int i=0; i<line.length(); i++){
		if (bitmask[i] == false){
			word[w_count++] = line[i];
		}
	}
	
    //Iterates over vowels checking if word is a palindrome:
	for (int i=0; i<w_count; i++){
		if (word[i] != word[w_count-1-i]){ 
			cout << "N" << endl;
			return 0;
		}
	}

	cout << "S" << endl;

}
