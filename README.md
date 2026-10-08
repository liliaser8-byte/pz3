---

**Звіт про виконання практичної роботи №3**

**Виконала:** студентка 4 курсу СОМ, Серветнік Лілія Ярославівна Варіант: 13

**Варіант:** 13

**Тема роботи: Реалізація списків. Двозв’язний список.**

**Мета роботи:** *ознайомитися з концепцією двозв’язного списку та контейнером std::list
у C++, навчитися ефективно використовувати його для виконання базових
операцій вставки, видалення та пошуку елементів.*

**Варіант завдання (Варіант 13)**
<img width="881" height="215" alt="Знімок екрана 2026-10-08 160000" src="https://github.com/user-attachments/assets/c5763ce0-98cf-4efd-84e9-c84beeef37f4" />
<img width="562" height="92" alt="Знімок екрана 2026-10-08 160214" src="https://github.com/user-attachments/assets/3aada334-f470-4c0e-8bfa-958b8206e476" />
<img width="893" height="567" alt="Знімок екрана 2026-10-08 160109" src="https://github.com/user-attachments/assets/914be852-3989-48d0-832d-0195afc472b1" />

**Виконання завдань**

**Завдання 1. Перебір та виведення списку**

*Програмний код:*

```cpp
#include <iostream>
#include <list>

using namespace std;

int main() {
    list<double> numbers = {11.2, 7.5, 23.6, 18.4, 29.1};

    cout << "Завдання 1:" << endl;
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    return 0;
}

```
*Результат виконання:*
```
Завдання 1:
11.2 7.5 23.6 18.4 29.1

```
<img width="1897" height="476" alt="image" src="https://github.com/user-attachments/assets/b8cd5622-8abf-4244-a73f-d90c0da90efe" />


**Завдання 2. Додавання та видалення елементів**

*Програмний код:*

```cpp
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

```

*Результат виконання:*
Початковий список: 11.2 7.5 23.6 18.4 29.1
Після змін: 11.2 7.5 23.6 18.4 29.1 32.5

**Завдання 3. Виведення списку у зворотному порядку**

*Програмний код:*

```cpp
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

```

*Результат виконання:*
Завдання 3 (зворотний порядок):
29.1 18.4 23.6 7.5 11.2

**Завдання 4. Модифікація значень елементів**

*Програмний код:*

```cpp
#include <iostream>
#include <list>

using namespace std;

int main() {
    list<double> numbers = {11.2, 7.5, 23.6, 18.4, 29.1};

    cout << "Після множення на 3: ";
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        *it = *it * 3.0;
        cout << *it << " ";
    }
    cout << endl;
    
    return 0;
}

```

*Результат виконання:*
Після множення на 3: 33.6 22.5 70.8 55.2 87.3

**Завдання 5. Пошук, умовне видалення та вставка**

*Програмний код:*

```cpp
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

```

*Результат виконання:*
Після видалення (>28) та вставки (перед <15): 5 11.2 5 7.5 23.6 18.4

**Завдання 6. Підрахунок середнього та зворотне виведення**

*Програмний код:*

```cpp
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

```

*Результат виконання:*
Середнє арифметичне елементів < 20: 12.3667
Список у зворотному порядку: 29.1 18.4 23.6 7.5 11.2

**Висновок**

Під час виконання практичної роботи було закріплено навички використання контейнера `std::list` у мові C++ для роботи з дійсними числами типу `double`. Опрацьовано механізми додавання та видалення елементів на кінцях списку (`push_front`, `push_back`, `pop_front`), а також точкову вставку та видалення за допомогою ітераторів (`insert`, `erase`). Особливу увагу було приділено роботі з вказівниками-ітераторами: прямому проходу циклом `for` для обчислень і зміни поточних значень елементів та зворотному проходу за допомогою `rbegin()` / `rend()`. Також були реалізовані алгоритми пошуку середнього арифметичного за умовою та умовної модифікації структури списку.
