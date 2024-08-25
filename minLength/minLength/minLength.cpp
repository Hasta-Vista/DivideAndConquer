#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool CheckOut(vector<int>& points, int segments, int middle) {
	int usedSegments = 0;
	int segment = 0;
	while (segment < points.size()) {
		usedSegments++;
		int lastSegment = points[segment] + middle;
		while (segment < points.size() && lastSegment >= points[segment]) {
			segment++;
		}
		if (usedSegments > segments) {
			return false;
		}
	}
	return true;

	
}
int Binary(vector <int>& points, int segments) {
	int left = 0;
	int right = points.back() - points.front();
	int result = right;
	result = right;
	while (left < right) {
		int mid = (left + right) / 2;
		if (CheckOut(points, segments, mid)) {
			result = mid;
			right = mid;
		}
		else {
			left = mid + 1;
		}
	}
	return result;
}
int main()
{
	int quantityPoints, quantitySegments;
	cin >> quantityPoints >> quantitySegments;
	vector<int>points(quantityPoints);
	for (int i = 0; i != points.size(); ++i) {
		cin >> points[i];
	}
	sort(points.begin(), points.end());
	int minLength = Binary(points, quantitySegments);
	cout << minLength;
	return 0;
}


