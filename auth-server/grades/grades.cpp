// a small C++ program
#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::setprecision;
using std::streamsize;
using std::string;
using std::vector;

int main()
{
    cout << "Please enter your full name: ";
    string name;
    getline(cin, name);

    cout << "Please enter your midterm and final grades: ";
    double midterm_grade, final_grade;
    cin >> midterm_grade >> final_grade;

    cout << "Please enter all of your homework grades "
            "(followed by \\n character):" << endl;
    int count = 0;
    vector<double> all_hwk; 

    double hwk_grade;
    while (cin >> hwk_grade) {
        ++count;
        all_hwk.push_back(hwk_grade);
    }

    typedef vector<double>::size_type vec_sz;
    vec_sz size = all_hwk.size();

    if (size <= 0) {
        cout << endl << "You must enter at least one homework grade. "
                        "Please try again." << endl;

        return 1;
    }

    // First we must sort the homework.
    sort(all_hwk.begin(), all_hwk.end());
    
    int mid = (int) size / 2;
    double median = size % 2 == 0 ? (all_hwk.at(mid - 1) + all_hwk.at(mid)) / 2
                                  : all_hwk.at(mid);

    int des_prec = 5;
    streamsize prec = cout.precision();
    cout << "Your final grade is "
         << setprecision(des_prec)
         << 0.2 * midterm_grade + 0.4 * final_grade + 0.4 * median 
         << setprecision(prec)
         << endl;

    return 0;
}
