#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int quantityMas,quantityNumbers;
	cin >> quantityMas;
	vector<int>mas(quantityMas);
	for (int i = 0; i != mas.size(); ++i) {
		cin >> mas[i];
	}
	cin >> quantityNumbers;
	vector<int>numbers(quantityNumbers);
	for (int i = 0; i != numbers.size(); ++i) {
		cin >> numbers[i];
	}
	
	for (int elem : numbers) {
		int counter = count(mas.begin(), mas.end(), elem);
		cout << counter;
		if (elem != numbers.back()) {
			cout << " ";
		}
	}
	
	
	return 0;
}
