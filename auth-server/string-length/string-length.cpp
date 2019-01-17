// a small C++ program
#include <algorithm>
#include <ios>
#include <iostream>
#include <unordered_map>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::unordered_map;
using std::string;


int main()
{

    cout << "Please enter one or more words:" << endl;

    int min_length = -1;
    int max_length = -1;
    
    string word;

    while (cin >> word) {
        int word_size = word.size();
        
        if (min_length == -1 || word_size < min_length) {
            min_length = word_size;
        }

        if (max_length == -1 || word_size > max_length) {
            max_length = word_size;
        }
    }

    cout << "Min word size: " << min_length << endl;
    cout << "Max word size: " << max_length << endl;
}
