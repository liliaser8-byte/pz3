#include <iostream>
#include <list>

using namespace std;

int main() {
    list<double> numbers = {11.2, 7.5, 23.6, 18.4, 29.1};

    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    
    return 0;
}