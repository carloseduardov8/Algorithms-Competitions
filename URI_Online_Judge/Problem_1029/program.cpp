#include <iostream>

using namespace std;

int fibonacci(int* it, int fib){
	(*it) += 1;
	if (fib == 0){
		return 0;
	} else if (fib == 1){
		return 1;
	}
	return fibonacci(it, fib-1) + fibonacci(it, fib-2);
}

int main(){
	int temp, result;
	int* it = new int;
	cin >> temp;
	while (cin >> temp){
	    *it = 0;
		result = fibonacci(it, temp);
		cout << "fib(" << temp << ") = " << (*it)-1 << " calls = " << result << endl;
	}
	delete it;
}
