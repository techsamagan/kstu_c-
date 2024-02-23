//#include <iostream>
//
//const int MAX_SIZE = 100;  // Максимально возможный размер массива
//
//class Array {
//protected:
//    unsigned int elements[MAX_SIZE];
//    unsigned int size;
//
//public:
//    Array(unsigned int initialSize = 0, unsigned int initialValue = 0) : size(initialSize) {
//        for (unsigned int i = 0; i < size; ++i) {
//            elements[i] = initialValue;
//        }
//    }
//
//    virtual void addElements(const Array& other) {
//        unsigned int minSize = (size < other.size) ? size : other.size;
//        for (unsigned int i = 0; i < minSize; ++i) {
//            elements[i] += other.elements[i];
//        }
//    }
//
//    virtual void display() const {
//        for (unsigned int i = 0; i < size; ++i) {
//            std::cout << elements[i] << " ";
//        }
//        std::cout << std::endl;
//    }
//};
//
//class IntArray : public Array {
//public:
//    IntArray(unsigned int initialSize = 0, unsigned int initialValue = 0) : Array(initialSize, initialValue) {}
//
//    void addElements(const Array& other) override {
//        for (unsigned int i = 0; i < size; ++i) {
//            elements[i] += static_cast<const IntArray&>(other).elements[i];
//        }
//    }
//};
//
//class DoubleArray : public Array {
//public:
//    DoubleArray(unsigned int initialSize = 0, unsigned int initialValue = 0) : Array(initialSize, initialValue) {}
//
//    void addElements(const Array& other) override {
//        for (unsigned int i = 0; i < size; ++i) {
//            elements[i] += static_cast<const DoubleArray&>(other).elements[i];
//        }
//    }
//};
//
//int main() {
//    IntArray intArray1(3, 1);
//    IntArray intArray2(3, 2);
//
//    DoubleArray doubleArray1(3, 1);
//    DoubleArray doubleArray2(3, 2);
//
//    std::cout << "Int Arrays:" << std::endl;
//    std::cout << "Array 1: ";
//    intArray1.display();
//
//    std::cout << "Array 2: ";
//    intArray2.display();
//
//    intArray1.addElements(intArray2);
//    std::cout << "After addition: ";
//    intArray1.display();
//
//    std::cout << "\nDouble Arrays:" << std::endl;
//    std::cout << "Array 1: ";
//    doubleArray1.display();
//
//    std::cout << "Array 2: ";
//    doubleArray2.display();
//
//    doubleArray1.addElements(doubleArray2);
//    std::cout << "After addition: ";
//    doubleArray1.display();
//
//    return 0;
//}





//#include <iostream>
//#include <cmath>
//
//class Figure {
//public:
//    virtual double getArea() const = 0;
//    virtual double getPerimeter() const = 0;
//    virtual ~Figure() {}
//};
//
//class Rectangle : public Figure {
//protected:
//    double length;
//    double width;
//
//public:
//    Rectangle(double l, double w) : length(l), width(w) {}
//
//    double getArea() const override {
//        return length * width;
//    }
//
//    double getPerimeter() const override {
//        return 2 * (length + width);
//    }
//};
//
//class Circle : public Figure {
//protected:
//    double radius;
//
//public:
//    Circle(double r) : radius(r) {}
//
//    double getArea() const override {
//        return M_PI * radius * radius;
//    }
//
//    double getPerimeter() const override {
//        return 2 * M_PI * radius;
//    }
//};
//
//class Trapezium : public Figure {
//protected:
//    double base1;
//    double base2;
//    double height;
//
//public:
//    Trapezium(double b1, double b2, double h) : base1(b1), base2(b2), height(h) {}
//
//    double getArea() const override {
//        return (base1 + base2) * height / 2.0;
//    }
//
//    double getPerimeter() const override {
//        // Периметр трапеции не всегда имеет стандартное формулу, поэтому здесь возвращаем -1.
//        return -1;
//    }
//};
//
//int main() {
//    Rectangle rectangle(4, 5);
//    Circle circle(3);
//    Trapezium trapezium(2, 4, 3);
//
//    std::cout << "Rectangle - Area: " << rectangle.getArea() << ", Perimeter: " << rectangle.getPerimeter() << std::endl;
//    std::cout << "Circle - Area: " << circle.getArea() << ", Perimeter: " << circle.getPerimeter() << std::endl;
//    std::cout << "Trapezium - Area: " << trapezium.getArea() << ", Perimeter: N/A" << std::endl;
//
//    return 0;
//}





//
//#include <iostream>
//
//class Currency {
//public:
//    virtual double toRubles(double amount) const = 0;
//    virtual void display() const = 0;
//    virtual ~Currency() {}
//};
//
//class Dollar : public Currency {
//public:
//    double toRubles(double amount) const override {
//        // Предположим, что курс доллара к рублю равен 75.
//        return amount * 75.0;
//    }
//
//    void display() const override {
//        std::cout << "Dollar";
//    }
//};
//
//class Euro : public Currency {
//public:
//    double toRubles(double amount) const override {
//        // Предположим, что курс евро к рублю равен 90.
//        return amount * 90.0;
//    }
//
//    void display() const override {
//        std::cout << "Euro";
//    }
//};
//
//int main() {
//    Dollar dollar;
//    Euro euro;
//
//    double amountInDollars = 100.0;
//    double amountInEuros = 80.0;
//
//    std::cout << "Amount in Dollars: " << amountInDollars << " USD" << std::endl;
//    std::cout << "Equivalent in Rubles: " << dollar.toRubles(amountInDollars) << " RUB" << std::endl;
//
//    std::cout << "\nAmount in Euros: " << amountInEuros << " EUR" << std::endl;
//    std::cout << "Equivalent in Rubles: " << euro.toRubles(amountInEuros) << " RUB" << std::endl;
//
//    return 0;
//}
//
//
//








