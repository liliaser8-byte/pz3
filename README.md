Практична робота: Використання однозв’язних списків std::forward_list у C++

Виконав: студент групи [Група] [Прізвище Ім'я] (Варіант № 13)

Мета роботи: Ознайомитись із контейнером std::forward_list у стандартній бібліотеці шаблонів (STL) C++. Навчитись ініціалізувати списки, виконувати базові операції (додавання, видалення, пошук, вставка елементів), а також працювати з ітераторами для обробки даних у списку.

Завдання 1.

Завдання: Ініціалізація та виведення елементів. Створити однозв’язний список з назвами музичних жанрів (Рок, Поп, Джаз, Реп, Класика) та вивести всі його елементи на екран.

💻 Код програми:

#include <iostream>
#include <forward_list>
#include <string>

using namespace std;

int main() {
    forward_list<string> genres = { "Рок", "Поп", "Джаз", "Реп", "Класика" };
    cout << "Музичні жанри:" << endl;
    for (string genre : genres) {
        cout << genre << endl;
    }
    return 0;
}


👁️ Візуалізація пам'яті (Результат та структура):

[ Head ] 
   |
   v
[ "Рок" | next ] ---> [ "Поп" | next ] ---> [ "Джаз" | next ] ---> [ "Реп" | next ] ---> [ "Класика" | next ] ---> nullptr


Завдання 2.

Завдання: Додавання та видалення елементів. Використовуючи перший елемент ("Рок"), додати на початок списку два нові елементи за допомогою push_front(), вивести список, видалити перший елемент через pop_front() і вивести оновлений список.

💻 Код програми:

#include <iostream>
#include <forward_list>
#include <string>

using namespace std;

int main() {
    forward_list<string> genres = { "Рок" };
    genres.push_front("Поп");
    genres.push_front("Джаз");
    
    cout << "Список жанрів:" << endl;
    for (string genre : genres) {
        cout << genre << endl;
    }
    
    genres.pop_front();
    
    cout << endl << "Після видалення першого жанру:" << endl;
    for (string genre : genres) {
        cout << genre << endl;
    }
    return 0;
}


👁️ Візуалізація пам'яті (Результат):

Завдання 3.

Завдання: Знаходження та перевірка наявності елемента. За допомогою ітератора перевірити наявність у списку елемента для пошуку ("Джаз") та вивести відповідне повідомлення.

💻 Код програми:

#include <iostream>
#include <forward_list>
#include <string>

using namespace std;

int main() {
    forward_list<string> genres = { "Рок", "Поп", "Джаз", "Реп", "Класика" };
    string searchGenre;
    cout << "Введіть назву жанру для пошуку" << endl;
    cin >> searchGenre;
    
    auto it = genres.begin();
    while (it != genres.end()) {
        if (*it == searchGenre) {
            cout << "Елемент знайдено";
            break;
        }
        ++it;
    }
    
    if (it == genres.end()) {
        cout << "Елемент не знайдено";
    }
    return 0;
}


👁️ Візуалізація пам'яті (Результат):

Завдання 4.

Завдання: Підрахунок кількості символів. За допомогою ітератора переглянути всі елементи списку та обчислити загальну кількість символів у їхніх назвах.

💻 Код програми:

#include <iostream>
#include <forward_list>
#include <string>

using namespace std;

int main() {
    forward_list<string> genres = { "Рок", "Поп", "Джаз", "Реп", "Класика" };
    int sum = 0;
    
    for (string genre : genres) {
        sum = sum + genre.length();
    }
    
    cout << "Загальна кількість символів: " << sum;
    return 0;
}


👁️ Візуалізація пам'яті (Результат):

Завдання 5.

Завдання: Вставка елемента у список. За допомогою ітератора знайти елемент "Джаз" і вставити після нього новий елемент "Блюз", використовуючи метод insert_after().

💻 Код програми:

#include <iostream>
#include <forward_list>
#include <string>

using namespace std;

int main() {
    forward_list<string> genres = { "Рок", "Поп", "Джаз", "Реп", "Класика" };
    string searchElement = "Джаз";
    string newElement = "Блюз";

    auto it = genres.begin();
    while (it != genres.end()) {
        if (*it == searchElement) {
            genres.insert_after(it, newElement);
            break;
        }
        ++it;
    }

    if (it == genres.end()) {
        cout << "Елемент відсутній у списку" << endl;
    }

    for (auto i = genres.begin(); i != genres.end(); ++i) {
        cout << *i << " ";
    }
    
    return 0;
}


👁️ Візуалізація пам'яті (Результат):

Структура після вставки:
[ "Джаз" | next ] ---> [ "Блюз" | next ] ---> [ "Реп" | next ] ---> ...


Висновок: Під час виконання практичної роботи було успішно застосовано контейнер std::forward_list з бібліотеки STL C++. На практиці реалізовано ініціалізацію списку, додавання та видалення елементів (push_front, pop_front), роботу з ітераторами для навігації та пошуку, а також вставку нових елементів всередину списку (insert_after).
