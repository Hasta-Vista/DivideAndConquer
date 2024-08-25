#include <iostream>
#include <vector>
#include <cmath>
#include <limits>
#include <iomanip>
using namespace std;
double Distance(double x1, double y1, double x2, double y2) {
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
double MinDist(vector<pair<double, double>>& points) {
    double minDist = numeric_limits<double>::infinity();
    for (size_t i = 0; i < points.size(); ++i) {
        for (size_t j = i + 1; j < points.size(); ++j) {
            double distance = Distance(points[i].first, points[i].second, points[j].first, points[j].second);
            if (distance < minDist) {
                minDist = distance;
                cout << fixed << setprecision(6) << distance << endl;
                
            }
            return distance;
        }
    }
    
}
int main() {
    int size;
    cin >> size;
    double x, y;
    vector<pair<double, double>> points;
    points.reserve(size);
    for (int i = 0; i != size; ++i) {
        if (cin >> x >> y) {
            points.push_back(make_pair(x, y));
        }
    }
    double minDistance = MinDist(points);
   
    return 0;
}

