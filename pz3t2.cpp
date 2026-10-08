#include <iostream>
#include <list>

using namespace std;

int main() {
    list<double> numbers = {11.2, 7.5, 23.6, 18.4, 29.1};

    cout << "Початковий список: ";
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    numbers.push_front(4.5);
    numbers.push_back(32.5);
    numbers.pop_front();
    
    cout << "Після змін: ";
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    return 0;
}
