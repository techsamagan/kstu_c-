

#include <iostream>
#include <limits>
#include <stdexcept>

class Int {
private:
    int value;

public:
    Int(int val) : value(val) {}
		
    // Оператор перегрузки сложения
    Int operator+(const Int& other) {
        long  double result = static_cast<long double>(value) + other.value;
        if (result > std::numeric_limits<int>::max() || result < std::numeric_limits<int>::min()) {
            throw std::overflow_error("Арифметическое переполнение");
        }
        return Int(static_cast<int>(result));
    }

    // Оператор перегрузки вычитания
    Int operator-(const Int& other) {
        long double result = static_cast<long double>(value) - other.value;
        if (result > std::numeric_limits<int>::max() || result < std::numeric_limits<int>::min()) {
            throw std::overflow_error("Арифметическое переполнение");
        }
        return Int(static_cast<int>(result));
    }

    // Оператор перегрузки умножения
    Int operator*(const Int& other) {
        long double result = static_cast<long double>(value) * other.value;
        if (result > std::numeric_limits<int>::max() || result < std::numeric_limits<int>::min()) {
            throw std::overflow_error("Арифметическое переполнение");
        }
        return Int(static_cast<int>(result));
    }

    // Оператор перегрузки деления
    Int operator/(const Int& other) {
        if (other.value == 0) {
            throw std::invalid_argument("Деление на ноль");
        }
        return Int(value / other.value);
    }

    // Префиксный инкремент
    Int& operator++() {
        long double result = static_cast<long double>(value) + 1;
        if (result > std::numeric_limits<int>::max()) {
            throw std::overflow_error("Арифметическое переполнение");
        }
        ++value;
        return *this;
    }

    // Постфиксный инкремент
    Int operator++(int) {
        Int temp = *this;
        ++(*this);
        return temp;
    }

    // Метод для получения значения
    int getValue() const {
        return value;
    }

};

int main() {
    setlocale(LC_ALL, "rus");

    try {
        int a, b, c, d, e;
        std::cout << "Введите аа: " << std::endl;
        std::cin >> a;
        std::cout << "Введите : bb" << std::endl;
        std::cin >> b;

        Int aa(a);
        Int bb(b);
        Int cc = aa + bb;
        Int dd = cc * aa;
        Int ee = dd / bb;
        Int ff = aa++;
        Int hh = cc - ff;
        Int ss = ++hh;

        std::cout << "aa: " << aa.getValue() << std::endl;
        std::cout << "bb: " << bb.getValue() << std::endl;
        std::cout << "cc = aa + bb; ";
        std::cout << "cc: " << cc.getValue() << std::endl;
        std::cout << "dd = cc * aa ";
        std::cout << "dd: " << dd.getValue() << std::endl;
        std::cout << "ee = dd / bb ";
        std::cout << "ee: " << ee.getValue() << std::endl;
        std::cout << "ff = aa++ ";
        std::cout << "ff: " << ff.getValue() << std::endl;
        std::cout << "hh = cc - ff ";
        std::cout << "hh: " << hh.getValue() << std::endl;
        std::cout << "ss = ++hh ";
        std::cout << "ss: " << ss.getValue() << std::endl;


    }
    catch (const std::exception& e)
    {
        std::cerr << "Ошибка: " << e.what() << std::endl;
    }


    return 0;
}




//
//#include <iostream>
//
//class Fraction {
//private:
//    double chislo;
//
//public:
//    // Конструкторы
//    Fraction() : chislo(0) {}
//    Fraction(double value) : chislo(value) {}
//
//    // Перегрузка оператора сложения для работы с объектами и числами
//    Fraction operator+(const Fraction& other) const {
//        return Fraction(chislo + other.chislo);
//    }
//
//    Fraction operator+(double value) const {
//        return Fraction(chislo + value);
//    }
//
//    friend Fraction operator+(double value, const Fraction& fraction) {
//        return Fraction(value + fraction.chislo);
//    }
//
//    // Перегрузка оператора вычитания для работы с объектами и числами
//    Fraction operator-(const Fraction& other) const {
//        return Fraction(chislo - other.chislo);
//    }
//
//    Fraction operator-(double value) const {
//        return Fraction(chislo - value);
//    }
//
//    friend Fraction operator-(double value, const Fraction& fraction) {
//        return Fraction(value - fraction.chislo);
//    }
//
//    // Перегрузка оператора умножения для работы с объектами и числами
//    Fraction operator*(const Fraction& other) const {
//        return Fraction(chislo * other.chislo);
//    }
//
//    Fraction operator*(double value) const {
//        return Fraction(chislo * value);
//    }
//
//    friend Fraction operator*(double value, const Fraction& fraction) {
//        return Fraction(value * fraction.chislo);
//    }
//
//    // Перегрузка оператора деления для работы с объектами и числами
//    Fraction operator/(const Fraction& other) const {
//        if (other.chislo != 0) {
//            return Fraction(chislo / other.chislo);
//        }
//        else {
//            std::cerr << "Error: Division by zero" << std::endl;
//            return Fraction();
//        }
//    }
//
//    Fraction operator/(double value) const {
//        if (value != 0) {
//            return Fraction(chislo / value);
//        }
//        else {
//            std::cerr << "Error: Division by zero" << std::endl;
//            return Fraction();
//        }
//    }
//
//    friend Fraction operator/(double value, const Fraction& fraction) {
//        if (fraction.chislo != 0) {
//            return Fraction(value / fraction.chislo);
//        }
//        else {
//            std::cerr << "Error: Division by zero" << std::endl;
//            return Fraction();
//        }
//    }
//
//    // Перегрузка префиксной операции инкремента
//    Fraction& operator++() {
//        chislo += 1;
//        return *this;
//    }
//
//    // Перегрузка постфиксной операции инкремента
//    Fraction operator++(int) {
//        Fraction temp = *this;
//        chislo += 1;
//        return temp;
//    }
//
//    // Вывод значения дроби
//    void display() const {
//        std::cout << "Value: " << chislo << std::endl;
//        std::cout << std::endl;
//    }
//};
//
//int main() {
//    setlocale(LC_ALL, "rus");
//    Fraction fraction1;
//    std::cout << "Fraction 1 (default): ";
//    fraction1.display();
//
//    // Использование конструктора с одним аргументом
//    double a;
//    std::cout << "Enter a: ";
//    std::cin >> a;
//    Fraction fraction2(a);
//    std::cout << "Fraction 2: ";
//    fraction2.display();
//
//    int choice;
//    double operand;
//
//    while (true) {
//        std::cout << "Выберите операцию:" << std::endl;
//        std::cout << "1. Сложение" << std::endl;
//        std::cout << "2. Вычитание" << std::endl;
//        std::cout << "3. Умножение" << std::endl;
//        std::cout << "4. Деление" << std::endl;
//        std::cout << "5. Префиксный инкремент" << std::endl;
//        std::cout << "6. Постфиксный инкремент" << std::endl;
//        std::cout << "0. Выйти из программы" << std::endl;
//
//        std::cin >> choice;
//
//        if (choice == 0) {
//            break;
//        }
//
//        switch (choice) {
//        case 1:
//            std::cout << "Введите операнд: ";
//            std::cin >> operand;
//            fraction1 = fraction1 + operand;
//            std::cout << "Результат сложения: ";
//            fraction1.display();
//            break;
//        case 2:
//            std::cout << "Введите операнд: ";
//            std::cin >> operand;
//            fraction1 = fraction1 - operand;
//            std::cout << "Результат вычитания: ";
//            fraction1.display();
//            break;
//        case 3:
//            std::cout << "Введите операнд: ";
//            std::cin >> operand;
//            fraction1 = fraction1 * operand;
//            std::cout << "Результат умножения: ";
//            fraction1.display();
//            break;
//        case 4:
//            std::cout << "Введите операнд: ";
//            std::cin >> operand;
//            fraction1 = fraction1 / operand;
//            std::cout << "Результат деления: ";
//            fraction1.display();
//            break;
//        case 5:
//            ++fraction1;
//            std::cout << "Префиксный инкремент: ";
//            fraction1.display();
//            break;
//        case 6:
//            fraction1++;
//            std::cout << "Постфиксный инкремент: ";
//            fraction1.display();
//            break;
//        default:
//            std::cout << "Неверный выбор операции." << std::endl;
//            break;
//        }
//    }
//
//    return 0;
//}
//




//
//#include <iostream>
//
//using namespace std;
//
//class Rectangle {
//private:
//    double length;
//    double width;
//
//public:
//    Rectangle(double l, double w) : length(l), width(w) {}
//
//    Rectangle(double l) : length(l), width(l) {}
//
//    double rect_area() const {
//        return length * width;
//    }
//
//    
//    double rect_area(double side) const {
//        return side * side;
//    }
//};
//
//int main() {
//    setlocale(LC_ALL, "rus");
//    int choice;
//    double a, b;
//   
//
//
//  
//
//    while (true)
//    {
//        Menu:
//        cout << "Menu:" << endl;
//        cout << "1. Прямоугольник" << endl;
//        cout << "2. Квадрат" << endl;
//        cout << "0. Exit:" << endl;
//        cout << "Выберите:" << endl;
//        cin >> choice;
//        if (choice == 1)
//        {
//            cout << "Введите длину: ";
//            cin >> a;
//            cout << "Введите высоту: ";
//            cin >> b;
//            Rectangle rectangle1(a, b);
//            cout << "Площадь: " << rectangle1.rect_area() << endl;
//            goto Menu;
//            break;
//        }
//        else if (choice == 2)
//        {
//            cout << "Введите длину: ";
//            cin >> a;
//            Rectangle square1(a);
//            cout << "Площадь: " << square1.rect_area() << endl;
//            goto Menu;
//        }
//        else if (choice == 0)
//        {
//            exit(0);
//        }
//        else { 
//            cout << "Error" << endl;
//            goto Menu;
//        }
//        }
// 
//   
//     return 0;
//}