#include <iostream>
#include <list>

using namespace std;

int main() {
    list<double> numbers = {11.2, 7.5, 23.6, 18.4, 29.1};

    for (auto it = numbers.begin(); it != numbers.end(); ) {
        if (*it > 28.0) {
            it = numbers.erase(it);
        } else {
            if (*it < 15.0) {
                numbers.insert(it, 5.0);
            }
            ++it;
        }
    }

    cout << "Після видалення (>28) та вставки (перед <15): ";
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    return 0;
}