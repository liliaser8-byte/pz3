#include <iostream>
#include <list>

using namespace std;

int main() {
    list<double> numbers = {11.2, 7.5, 23.6, 18.4, 29.1};

    cout << "Завдання 3 (зворотний порядок):" << endl;
    for (auto it = numbers.rbegin(); it != numbers.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    return 0;
}