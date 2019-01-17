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

    unordered_map<string, int> word_counts;
    string word;

    while (cin >> word) {

        if (word_counts.find(word) == word_counts.end()) {
            word_counts[word] = 0;
        }

        word_counts[word] += 1;
    }

    typedef unordered_map<string, int>::iterator map_iter;
    for (map_iter itr = word_counts.begin(); itr != word_counts.end(); itr++) {
        cout << "Word: " << itr->first << ", Count: " << itr->second << endl;
    }
}
