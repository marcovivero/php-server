// a small C++ program
#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::copy;
using std::cout;
using std::endl;
using std::getline;
using std::setprecision;
using std::streamsize;
using std::string;
using std::vector;


// Should be encapsulated as private method in some class.
// We will assume values is non-empty and already sorted.
double get_median(const vector<double>& values, double default_value = 0.0) {
    int size = values.size();

    if (size <= 0) {
        return default_value;
    } else {
        int mid = size / 2;
        
        return size % 2 == 0 ? (values[mid - 1] + values[mid]) / 2
                             : values[mid];
    }
}

template<typename T>
vector<T> slice(const vector<T>& v, int m, int n) {

    vector<T> vec(n - m + 1);
    copy(v.begin() + m, v.begin() + n + 1, vec.begin());

    return vec;
}

int main()
{

    cout << "Please enter one or more values:\n" << endl;

    vector<double> values;
    double value;
    int size = 0;

    while (cin >> value) {
        ++size;
        values.push_back(value);
    }


    if (size <= 0) {
        cout << endl << "You must enter at least one value! " << endl;

        return 1;
    } else {
        // We begin by sorting our vector of values
        sort(values.begin(), values.end());
        
        int mid = size / 2;
        vector<double> left_arr = slice(values, 0, size % 2 == 0 ? mid - 1 : mid);
        vector<double> right_arr = slice(values, mid, size - 1);

        // Finally get desired percentiles.
        double lower = get_median(left_arr);
        double median = get_median(values);
        double upper = get_median(right_arr);

        cout << endl;
        cout << "Lower quartile: " << lower << endl;
        cout << "Median:         " << median << endl;
        cout << "Upper quartile: " << upper << endl;
        cout << endl;

        return 0;

    }
}
