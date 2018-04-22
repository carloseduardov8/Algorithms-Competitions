#include <iostream>
#include <cmath>

using namespace std;


int factorial(int n){
	if(n == 0) return 1;
	if(n == 1) return 1;
	return factorial(n-1) * n;
}

int main(){

	int n;
	cin >> n;

	int curr = 8;
	long long int fact = factorial(curr);

	int acc = 0;
	int answer = 0;

	while (acc != n){
		if (fact <= n - acc){
			acc += fact;
			answer += 1;
		} else {
			curr--;
		}
		fact = factorial(curr);
	}

	cout << answer << endl;

}
