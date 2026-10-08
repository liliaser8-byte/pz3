#include <iostream>
#include <list>

using namespace std;

int main() {
    list<double> numbers = {11.2, 7.5, 23.6, 18.4, 29.1};
    
    double sum = 0;
    int count = 0;
    
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        if (*it < 20.0) {
            sum += *it;
            count++;
        }
    }
    
    if (count > 0) {
        cout << "Середнє арифметичне елементів < 20: " << sum / count << endl;
    }
    
    cout << "Список у зворотному порядку: ";
    for (auto it = numbers.rbegin(); it != numbers.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    return 0;
}