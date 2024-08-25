#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
int main()
{
	int size;
	cin >> size;
	vector <int> sequence(size);
	for (int i = 0; i != size; ++i) {
		cin >> sequence[i];
	}
	vector<int>check;
	check.reserve(size);
	sort(sequence.begin(), sequence.end());
	for (int elem : sequence) {
		if (find(check.begin(),check.end(), elem) == check.end()) {
			check.push_back(elem);
			int counter = count(sequence.begin(), sequence.end(), elem);
			if (counter > size / 2) {
				cout << "1";
				break;
			}
			else if(elem == sequence.back() && counter <= size / 2) {
				cout << "0";
			}
		}
	}
	return 0;
}
