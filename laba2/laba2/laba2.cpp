//
//#include <iostream>
//#include <string>
//#include <iomanip>
//
//using namespace std;
//
//class Nomenclature {
//private:
//    string itemName;
//    double wholesalePrice;
//    double retailMarkup;
//    int quantityInStock;
//
//public:
//
//    Nomenclature()
//        : itemName(""), wholesalePrice(0.0), retailMarkup(0.0), quantityInStock(0) {
//    }
//
//
//    Nomenclature(const string& name, double wholesalePrice, double retailMarkup, int quantity)
//        : itemName(name), wholesalePrice(wholesalePrice), retailMarkup(retailMarkup), quantityInStock(quantity) {
//    }
//
//
//    double calculateNetProfit(int soldQuantity) const {
//        double revenue = soldQuantity * (wholesalePrice + (wholesalePrice * retailMarkup / 100.0));
//        double cost = soldQuantity * wholesalePrice;
//        return revenue - cost;
//    }
//
//
//    void display() const {
//        cout << itemName << setw(20) << wholesalePrice << setw(20) << retailMarkup << setw(20) << quantityInStock << endl;
//        cout << "----------------------------------------------------------------------------------" << endl;
//    }
//
//    void display1() const {
//        cout << itemName << setw(20) << wholesalePrice << setw(20) << retailMarkup << setw(20) << quantityInStock<<setw(20)<<"все"<<setw(15)<<wholesalePrice*(retailMarkup/100.)*quantityInStock;
//      
//    }
//
//    string getItemName() const {
//        return itemName;
//    }
//
//
//    int getQuantityInStock() const {
//        return quantityInStock;
//    }
//};
//
//int main() {
//    setlocale(LC_ALL, "rus");
//    const int MAX_ITEMS = 5;
//    Nomenclature products[MAX_ITEMS];
//    int itemCount = 0;
//
//    int choice;
//    while (true) {
//        cout << "Меню" << endl;
//        cout << "1. Добавить товар" << endl;
//        cout << "2. Вывод товаров" << endl;
//        cout << "3. Считать доход одного товара" << endl;
//        cout << "4. Общий доход" << endl;
//        cout << "5. Удалить товар" << endl;
//        cout << "6. Выход" << endl;
//        cout << "Выберите опцию: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1:
//            if (itemCount < MAX_ITEMS) {
//                string name;
//                double wholesalePrice, retailMarkup;
//                int quantity;
//                cout << "Введите имя товара: ";
//                cin >> name;
//                cout << "Оптовая цена товара: $";
//                cin >> wholesalePrice;
//                cout << "Розничная наценка (%): ";
//                cin >> retailMarkup;
//                cout << "Количество товара: ";
//                cin >> quantity;
//                products[itemCount] = Nomenclature(name, wholesalePrice, retailMarkup, quantity);
//                itemCount++;
//            }
//            else {
//                cout << "Вы ввели максимальную кол-во товаров." << endl;
//            }
//            break;
//
//        case 2:
//            cout << "Имя товара" << setw(20) << "Оптовая цена" << setw(20) << "Розничная наценка" << setw(20) << "Количество" << endl;
//            cout << "----------------------------------------------------------------------------------" << endl;
//            for (int i = 0; i < itemCount; i++) {
//                //cout << "Товар " << i + 1 << ":" << endl;
//                products[i].display();
//                cout << endl;
//            }
//            break;
//
//        case 3:
//            if (itemCount > 0) {
//                string itemName;
//                int soldQuantity;
//                cout << "Введите имя товара: ";
//                cin >> itemName;
//                bool found = false;
//                for (int i = 0; i < itemCount; i++) {
//                    if (products[i].getItemName() == itemName) {
//                        cout << "Введите сколько товаров продано: ";
//                        cin >> soldQuantity;
//                        double netProfit = products[i].calculateNetProfit(soldQuantity);
//                        cout << "Доход товара  " << itemName << " проданных " << soldQuantity << ": $" << netProfit << endl;
//                        found = true;
//                        break;
//                    }
//                }
//                if (!found) {
//                    cout << "Товар не найден." << endl;
//                }
//            }
//            else {
//                cout << "Товар не доступен." << endl;
//            }
//            break;
//
//        case 4:
//
//            cout << "Имя товара" << setw(20) << "Оптовая цена" << setw(20) << "Розничная наценка(%)" << setw(20) << "Количество" << setw(20) << " Продано" << setw(15)<<"Доход"<<endl;
//
//            for (int i = 0; i < 5; i++)
//            {
//                products[i].display1();
//                cout << endl;
//            }
//
//            if (itemCount > 0) {
//                double totalIncome = 0.0;
//                for (int i = 0; i < itemCount; i++) {
//                    totalIncome += products[i].calculateNetProfit(products[i].getQuantityInStock());
//                }
//
//               cout << "Общий доход: $" << totalIncome << endl;
//            }
//            else {
//                cout << "Товар не доступен." << endl;
//            }
//
//
//            break;
//
//        case 5:
//            if (itemCount > 0) {
//                string itemName;
//                cout << "Имя товара для удаления: ";
//                cin >> itemName;
//                bool found = false;
//                for (int i = 0; i < itemCount; i++) {
//                    if (products[i].getItemName() == itemName) {
//
//                        for (int j = i; j < itemCount - 1; j++) {
//                            products[j] = products[j + 1];
//                        }
//                        itemCount--;
//                        found = true;
//                        cout << "Товар " << itemName << " удален." << endl;
//                        break;
//                    }
//                }
//                if (!found) {
//                    cout << "Товар не найден." << endl;
//                }
//            }
//            else {
//                cout << "Тоар не доступен." << endl;
//            }
//            break;
//
//        case 6:
//            exit(0);
//            break;
//
//        default:
//            cout << "Некоррестный выбор." << endl;
//            break;
//        }
//    }
//
//    return 0;
//}

//
//
//#include <iostream>
//#include <string>
//#include <iomanip>
//
//using namespace std;
//
//struct Date {
//    int year;
//    int month;
//    int day;
//};
//
//class Soft {
//private:
//    string softName;
//    string softDeveloper;
//    int softMemory;
//    Date date;
//
//public:
//    Soft() {
//        softName = "";
//        softDeveloper = "";
//        softMemory = 0;
//        date.year = 0;
//        date.month = 0;
//        date.day = 0;
//    }
//
//    Soft(string Name, string dev, int Mem, int year, int month, int day) {
//        softName = Name;
//        softDeveloper = dev;
//        softMemory = Mem;
//        date.year = year;
//        date.month = month;
//        date.day = day;
//    }
//
//    void Display_all() {
//        cout << softName << setw(20) << softDeveloper << setw(20) << softMemory << setw(20) << date.year << "." << date.month << "." << date.day << endl;
//    }
//
//    void Differ_time(int current_year = 2023, int current_month = 10, int current_day = 16) {
//        int days;
//        string word = "время истек";
//        days = (date.year - current_year) * 365 + (date.month - current_month) * 30 + (date.day - current_day);
//        if (days > 0)
//        {
//            cout << softName << setw(20) << softDeveloper << setw(20) << softMemory << setw(20) << date.day << "." << date.month << "." << date.year << setw(20) << days << endl;
//        }
//        else {
//            cout << softName << setw(20) << softDeveloper << setw(20) << softMemory << setw(20) << date.day << "." << date.month << "." << date.year << setw(20) << word << endl;
//        }
//
//    }
//
//    ~Soft() {}
//};
//
//int main() {
//    setlocale(LC_ALL, "rus");
//
//    int choice, size, capacity;
//    int i = 0;
//    Soft* soft = nullptr;
//    capacity = 10; // Максимальная емкость (сколько программ можно добавить)
//
//    while (true) {
//        cout << "Меню" << endl;
//        cout << "1. Добавить программу" << endl;
//        cout << "2. Вывод всех программ" << endl;
//        cout << "3. Информация о программе" << endl;
//        cout << "4. Удалить программу" << endl;
//        cout << "5. Выйти" << endl;
//        cout << "Выберите опцию:" << endl;
//        cout << "" << endl;
//        cin >> choice;
//
//        switch (choice) {
//        case 1:
//            if (i < capacity) {
//                if (soft == nullptr) {
//                    soft = new Soft[capacity];
//                }
//
//                string name, developer;
//                int memory, year, month, day;
//                cout << "Введите имя софта: ";
//                cin.ignore();
//                getline(cin, name);
//                cout << "Введите разработчика: ";
//                getline(cin, developer);
//                cout << "Введите объем памяти: ";
//                cin >> memory;
//                cout << "Введите год: ";
//                cin >> year;
//                cout << "Введите месяц: ";
//                cin >> month;
//                cout << "Введите день: ";
//                cin >> day;
//
//                soft[i] = Soft(name, developer, memory, year, month, day);
//                i++;
//            }
//            else {
//                cout << "Достигнута максимальная емкость." << endl;
//            }
//            break;
//        case 2:
//            cout << "Soft Name" << setw(20) << "Создатель" << setw(20) << "Память" << setw(35) << "Дата завершения лицензии" << endl;
//            for (int j = 0; j < i; j++) {
//                soft[j].Display_all();
//            }
//            break;
//        case 3:
//            cout << "Soft Name" << setw(20) << "Создатель" << setw(20) << "Память" << setw(35) << "Дата завершения лицензии" << setw(20) << "Кол-во дней" << endl;
//            for (int j = 0; j < i; j++) {
//                soft[j].Differ_time();
//            }
//            break;
//        case 4:
//            if (i > 0) {
//                cout << "Введите индекс программы, которую хотите удалить: ";
//                int delete_index;
//                cin >> delete_index;
//
//                if (delete_index >= 0 && delete_index < i) {
//                    // Сдвигаем оставшиеся программы в массиве
//                    for (int j = delete_index; j < i - 1; j++) {
//                        soft[j] = soft[j + 1];
//                    }
//                    i--;
//                }
//                else {
//                    cout << "Неверный индекс программы." << endl;
//                }
//            }
//            else {
//                cout << "Нет программ для удаления." << endl;
//            }
//            break;
//        case 5:
//            if (soft != nullptr) {
//                delete[] soft;
//            }
//            exit(0);
//            break;
//        default:
//            break;
//        }
//    }
//    return 0;
//}
//
//




#include <iostream>
#include <string>
#include <sstream>
#include <ctime>
#include <chrono>
#include <thread>

using namespace std;

class Timer {
private:
    int seconds;

public:
    Timer() : seconds(0) {}

    Timer(int sec) : seconds(sec) {}

    Timer(const string& time_str) {
        int minutes = 0, sec = 0;
        istringstream stream(time_str);

        if (stream >> minutes && stream.get() == ' ' && stream >> sec) {
            seconds = minutes * 60 + sec;
        }
        else {
            seconds = stoi(time_str);
        }
    }

    Timer(int minutes, int sec) : seconds(minutes * 60 + sec) {}

    void displayTime(int remaining_seconds) {
        int minutes = remaining_seconds / 60;
        int sec = remaining_seconds % 60;

        cout << "\rОсталось времени: " << minutes << " минут " << sec << " секунд" << flush;
    }

    void start() {
        time_t start_time = time(nullptr);
        time_t end_time = start_time + seconds;
        int remaining_seconds = seconds;

        while (time(nullptr) < end_time) {
            displayTime(remaining_seconds);
            this_thread::sleep_for(chrono::seconds(1));
            remaining_seconds = end_time - time(nullptr);
        }

        displayTime(0); // Отобразить "0 минут 0 секунд" после завершения
        cout << endl << "Таймер завершил работу!" << endl;
    }
};

int main() {
    setlocale(LC_ALL, "rus");
    int choice;
    string input_time;
    Timer timer1;
    Timer timer2;
    Timer timer3;

    while (true) {
        cout << "Меню" << endl;
        cout << "1. Задать время для таймера 1" << endl;
        cout << "2. Задать время для таймера 2" << endl;
        cout << "3. Задать время для таймера 3" << endl;
        cout << "4. Запустить таймер 1" << endl;
        cout << "5. Запустить таймер 2" << endl;
        cout << "6. Запустить таймер 3" << endl;
        cout << "7. Остановить все таймеры" << endl;
        cout << "8. Выйти" << endl;
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Введите время для таймера 1 (минуты:секунды): ";
            cin >> input_time;
            timer1 = Timer(input_time);
            break;
        case 2:
            cout << "Введите время для таймера 2 (минуты:секунды): ";
            cin >> input_time;
            timer2 = Timer(input_time);
            break;
        case 3:
            cout << "Введите время для таймера 3 (минуты:секунды): ";
            cin >> input_time;
            timer3 = Timer(input_time);
            break;
        case 4:
            cout << "Запущен таймер 1." << endl;
            timer1.start();
            break;
        case 5:
            cout << "Запущен таймер 2." << endl;
            timer2.start();
            break;
        case 6:
            cout << "Запущен таймер 3." << endl;
            timer3.start();
            break;
        case 7:
            cout << "Все таймеры остановлены." << endl;
            break;
        case 8:
            exit(0);
        default:
            break;
        }
    }

    return 0;
}
