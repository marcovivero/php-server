// a small C++ program
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

int main()
{
    // Will write this out to stdout (without terminating line).
    cout << "Please enter your full name: ";
    string name;
    getline(cin, name);


    cout << "Please specify the amount of column-padding: ";
    int col_pad;
    cin >> col_pad;

    cout << "Please specify the amount of row-padding: ";
    int row_pad;
    cin >> row_pad;

    const string greeting = "Hello, " + name + "!";
    const int num_cols = (2 * (col_pad + 1)) + (int) greeting.size();
    const int num_rows = 2 * (row_pad + 1) + 1;

    const string border_row(num_cols, '*');
    const string middle_row = "*"  + string(col_pad, ' ') + greeting + string(col_pad, ' ') + "*";
    const string space_row = "*" + string(num_cols - 2, ' ') + "*";


    string row_to_print;
    for (int rows_printed = 0; rows_printed < num_rows; ++rows_printed) {

        if (rows_printed == 0 or rows_printed == num_rows - 1) {
            row_to_print = border_row;
        }
        
        else if (rows_printed == row_pad + 1) {
            row_to_print = middle_row;
        }
        
        else {
            row_to_print = space_row;
        }
    
        cout << row_to_print << endl;
    }

    return 0;
}
