

//
//#include<iostream>
//#include<cstdlib>
//#include<ctime>
//using namespace std;
//
//template<class T>
//class Array {
//private:
//    T* arr;
//    T* arr2;
//    int size;
//
//public:
//    Array(const int size) : size(size) {
//        arr = new T[size];
//        arr2 = new T[size];
//
//        for (int i = 0; i < size; i++) {
//            arr[i] = T(0.1 * (10 + rand() % 100));
//            arr2[i] = T(0.1 * (10 + rand() % 100));
//        }
//    }
//
//    T count_sum() {
//        T total_sum = 0;
//        int count = 0;
//        for (int i = 0; i < size; i++)
//            if (arr[i] > 0)
//            {  
//                count++;
//                total_sum += arr[i];
//            }
//        cout << "Сумма положительных элементов: " << count << endl;
//        cout << "Количество положительных элементов: " << total_sum << endl;
//
//
//
//        return total_sum;
//    }
//
//    T count_mul() {
//        T total_mul = 1;
//        int count = 0;
//        for (int i = 0; i < size; i++)
//            if ((i%2)==0)
//            {
//                
//                total_mul *= arr2[i];
//            }
//        
//        cout << "Количество положительных элементов: " << total_mul << endl;
//        return total_mul;
//    }
//
//    void print() {
//        cout << "Первый массив" << endl;
//        for (int i = 0; i < size; i++)
//            cout << "arr[" << i << "] = " << arr[i] << endl;
//        cout << endl;
//        cout << "Второй массив" << endl;
//        for (int i = 0; i < size; i++)
//            cout << "arr2[" << i << "] = " << arr2[i] << endl;
//        cout << endl;
//    }
//
//    ~Array() {
//        delete[] arr;
//        delete[] arr2;
//    }
//};
//
//
//int main() {
//    setlocale(LC_ALL, "");
//    srand(time(0));
//    int choice;
//    int size;
//    cout << "Размер - "; cin >> size;
//    cout << "Целочисленный массив" << endl;
//    Array<int> arr(size);
//    arr.print();
//    cout << "Общая сумма - " << arr.count_sum() << endl << endl;
//    cout << endl << endl;
//
//    cout << "Вещественный массив" << endl;
//    Array<double> arr2(size);
//    arr2.print();
//    cout << "Общая сумма - " << arr2.count_sum() << endl << endl;
//    cout << endl << endl;
//
//    cout << "Short массив" << endl;
//    Array<short> arr3(size);
//    arr3.print();
//    cout << "Общая сумма - " << arr3.count_sum() << endl << endl;
//    cout << endl << endl;
//
//    return 0;
//}



//#include<iostream>
//#include<cstdlib>
//#include<ctime>
//using namespace std;
//
//template<class T>
//T find_max(T* arr, const int size) {
//    if (size > 0) {
//        T max = arr[0];
//
//        for (int i = 1; i < size; i++)
//            max = max < arr[i] ? arr[i] : max;
//
//        return max;
//    }
//    return NULL;
//}
//
//template<class T>
//void sort(T* arr, const int size) {
//    int gap = 1;
//
//    while (gap < size / 3)
//        gap *= 3 + 1;
//
//    while (gap >= 1) {
//        for (int i = gap; i < size; i++)
//            for (int j = i; j >= gap && arr[j] < arr[j - gap]; j -= gap)
//                swap(arr[j], arr[j - gap]);
//        gap /= 3;
//    }   
//}
//
//template<class T>
//void random_full(T* arr, const int size, bool k = true) {
//    if (k) {
//        for (int i = 0; i < size; i++)
//            arr[i] = T(192 + rand() % 62);
//    }
//    else
//        for (int i = 0; i < size; i++)
//            arr[i] = 0.1 * (rand() % 100 - 45);
//}
//
//template<class T>
//void print(T* arr, const int size) {
//    for (int i = 0; i < size; i++)
//        cout << "arr[" << i << "] = " << arr[i] << endl;
//    cout << endl;
//}
//
//int main() {
//    setlocale(LC_ALL, "rus");
//    srand(time(0));
//    int choice;
//    int size;
//    cout << "Размер - "; cin >> size;
//    cout << "Целочисленный массив" << endl;
//    int* arr = new int[size];
//    random_full(arr, size);
//    print(arr, size);
//    cout << "Максимум - " << find_max(arr, size) << endl << endl;
//    cout << "Сортировка" << endl;
//    sort(arr, size);
//    print(arr, size);
//    delete[] arr;
//    cout << endl << endl;
//
//    cout << "Вещественный массив" << endl;
//    double* arr2 = new double[size];
//    random_full(arr2, size, false);
//    print(arr2, size);
//    cout << "Максимум - " << find_max(arr2, size) << endl << endl;
//    cout << "Сортировка" << endl;
//    sort(arr2, size);
//    print(arr2, size);
//    cout << endl << endl;
//    delete[] arr2;
//
//    cout << "Символьный массив" << endl;
//    char* arr3 = new char[size];
//    random_full(arr3, size);
//    print(arr3, size);
//    cout << "Максимум - " << find_max(arr3, size) << endl << endl;
//    cout << "Сортировка" << endl;
//    sort(arr3, size);
//    print(arr3, size);
//    delete[] arr3;
//
//    return 0;
//}




//
//#include<iostream>
//#include<cstdlib>
//#include<ctime>
//using namespace std;
//
//template<class T>
//class Array {
//private:
//    T* arr;
//    T* arr2;
//    int size;
//
//public:
//    Array(const int size) : size(size) {
//        arr = new T[size];
//        arr2 = new T[size];
//
//        for (int i = 0; i < size; i++) {
//            arr[i] = T(0.1 * (10 + rand() % 100));
//            arr2[i] = T(0.1 * (10 + rand() % 100));
//        }
//    }
//
//    T count_sum() {
//        T total_sum = 0;
//        int count = 0;
//        for (int i = 0; i < size; i++)
//            if (arr[i] > 0)
//            {
//                count++;
//                total_sum += arr[i];
//            }
//        cout << "Количество положительных элементов: " << count << endl;
//        cout << " Сумма положительных элементов: " << total_sum << endl;
//        return total_sum;
//    }
//
//    T count_mul() {
//        T total_mul = 1;
//        int count = 0;
//        for (int i = 0; i < size; i++)
//            if ((i % 2) == 0)
//            {
//                count++;
//                total_mul *= arr2[i];
//            }
//
//        cout << "Произведение элементов с четными индексами: " << total_mul << endl;
//        cout << "Количество умноженных элементов: " << count << endl;
//        return total_mul;
//    }
//
//    void print() {
//        cout << "Первый массив" << endl;
//        for (int i = 0; i < size; i++)
//            cout << "arr[" << i << "] = " << arr[i] << endl;
//        cout << endl;
//        cout << "Второй массив" << endl;
//        for (int i = 0; i < size; i++)
//            cout << "arr2[" << i << "] = " << arr2[i] << endl;
//        cout << endl;
//    }
//
//    ~Array() {
//        delete[] arr;
//        delete[] arr2;
//    }
//};
//
//int main() {
//    setlocale(LC_ALL, "");
//    srand(time(0));
//    int choice;
//    int size;
//    cout << "Размер - "; cin >> size;
//
//    cout << "Целочисленный массив" << endl;
//    Array<int> arr(size);
//    arr.print();
//    cout << "Общая сумма - " << arr.count_sum() << endl;
//    cout << "Общее произведение - " << arr.count_mul() << endl << endl;
//
//    cout << "Вещественный массив" << endl;
//    Array<double> arr2(size);
//    arr2.print();
//    cout << "Общая сумма - " << arr2.count_sum() << endl;
//    cout << "Общее произведение - " << arr2.count_mul() << endl << endl;
//
//    cout << "Short массив" << endl;
//    Array<short> arr3(size);
//    arr3.print();
//    cout << "Общая сумма - " << arr3.count_sum() << endl;
//
//    cout << "Общее произведение - " << arr3.count_mul() << endl << endl;
//
//    return 0;
//}





//
//#include <iostream>
//#include <stack>
//#include <vector>
//
//template <typename T>
//class Stack {
//private:
//    std::stack<T> data;
//
//public:
//    void push(const T& value) {
//        data.push(value);
//    }
//
//    T pop() {
//        T top = data.top();
//        data.pop();
//        return top;
//    }
//
//    bool empty() const {
//        return data.empty();
//    }
//
//    size_t size() const {
//        return data.size();
//    }
//
//    void display() const {
//        std::stack<T> temp = data;
//        while (!temp.empty()) {
//            std::cout << temp.top() << " ";
//            temp.pop();
//        }
//        std::cout << std::endl;
//    }
//};
//
//int main() {
//    setlocale(LC_ALL, "rus");
//
//    int choice;
//    Stack<int> originalStack;
//    Stack<int> evenStack;
//    Stack<int> oddStack;
//
//    while (true) {
//    Menu:
//        std::cout << "Меню" << std::endl;
//        std::cout << "1. Добавить стек" << std::endl;
//        std::cout << "2. Сортировка узла" << std::endl;
//        std::cout << "3. Выход" << std::endl;
//        std::cout << "4. Просмотр первого стека" << std::endl;
//        std::cout << "5. Просмотр второго и третьего стеков" << std::endl;
//        std::cout << "Выберите: " << std::endl;
//
//        std::cin >> choice;
//
//        switch (choice) {
//        case 1: {
//            // Ввод размера стека
//            size_t stackSize;
//            std::cout << "Введите размер стека: ";
//            std::cin >> stackSize;
//
//            // Создание стека и ввод элементов
//            std::cout << "Введите элементы стека:" << std::endl;
//            for (size_t i = 0; i < stackSize; ++i) {
//                int value;
//                std::cin >> value;
//                originalStack.push(value);
//            }
//            break;
//        }
//        case 2: {
//            // Разделение стека на два направления (четные и нечетные числа)
//            while (!originalStack.empty()) {
//                int value = originalStack.pop();
//                if (value % 2 == 0) {
//                    evenStack.push(value);
//                }
//                else {
//                    oddStack.push(value);
//                }
//            }
//            break;
//        }
//        case 3: {
//            exit(0);
//            break;
//        }
//        case 4: {
//            // Просмотр первого стека
//            std::cout << "Первый стек: ";
//            if (originalStack.empty() == true)
//            {
//                std::cout << "Стек пустой" << std::endl;
//            }
//            else 
//            {
//                originalStack.display();
//            }
//            break;
//        }
//        case 5: {
//            // Просмотр второго и третьего стеков
//            std::cout << "Второй стек (четные числа): ";
//            if (evenStack.empty() == true)
//            {
//                std::cout << "Стек пустой" << std::endl;
//            }
//            else
//            {
//                evenStack.display();
//            }
//            
//
//            std::cout << "Третий стек (нечетные числа): ";
//            if (oddStack.empty() == true)
//            {
//                std::cout << "Стек пустой" << std::endl;
//            }
//            else
//            {
//                oddStack.display();
//            }
//
//            break;
//        }
//        default:
//            goto Menu;
//        }
//    }
//
//    return 0;
//}
//
//
//
//


//#include <iostream>
//#include <stack>
//
//template <typename T>
//class Stack {
//private:
//    std::stack<T> data;
//
//public:
//    void push(const T& value) {
//        data.push(value);
//    }
//
//    T pop() {
//        T top = data.top();
//        data.pop();
//        return top;
//    }
//
//    bool empty() const {
//        return data.empty();
//    }
//
//    size_t size() const {
//        return data.size();
//    }
//
//    void display() const {
//        std::stack<T> temp = data;
//        while (!temp.empty()) {
//            std::cout << temp.top() << " ";
//            temp.pop();
//        }
//        std::cout << std::endl;
//    }
//};
//
//int main() {
//    setlocale(LC_ALL, "rus");
//
//    int choice;
//    Stack<float> originalStack;
//    Stack<float> evenStack;
//    Stack<float> oddStack;
//
//    while (true) {
//    Menu:
//        std::cout << "Меню" << std::endl;
//        std::cout << "1. Добавить стек" << std::endl;
//        std::cout << "2. Сортировка узла" << std::endl;
//        std::cout << "3. Выход" << std::endl;
//        std::cout << "4. Просмотр первого стека" << std::endl;
//        std::cout << "5. Просмотр второго и третьего стеков" << std::endl;
//        std::cout << "Выберите: " << std::endl;
//
//        std::cin >> choice;
//
//        switch (choice) {
//        case 1: {
//            // Ввод размера стека
//            size_t stackSize;
//            std::cout << "Введите размер стека: ";
//            std::cin >> stackSize;
//
//            // Создание стека и ввод элементов
//            std::cout << "Введите элементы стека:" << std::endl;
//            for (size_t i = 0; i < stackSize; ++i) {
//                float value;
//                std::cin >> value;
//                originalStack.push(value);
//            }
//            break;
//        }
//        case 2: {
//            // Разделение стека на два направления (четные и нечетные числа)
//            while (!originalStack.empty()) {
//                float value = originalStack.pop();
//                if (static_cast<int>(value) % 2 == 0) {
//                    evenStack.push(value);
//                }
//                else {
//                    oddStack.push(value);
//                }
//            }
//            break;
//        }
//        case 3: {
//            exit(0);
//            break;
//        }
//        case 4: {
//            // Просмотр первого стека
//            std::cout << "Первый стек: ";
//            if (originalStack.empty()) {
//                std::cout << "Стек пустой" << std::endl;
//            }
//            else {
//                originalStack.display();
//            }
//            break;
//        }
//        case 5: {
//            // Просмотр второго и третьего стеков
//            std::cout << "Второй стек (четные числа): ";
//            if (evenStack.empty()) {
//                std::cout << "Стек пустой" << std::endl;
//            }
//            else {
//                evenStack.display();
//            }
//
//            std::cout << "Третий стек (нечетные числа): ";
//            if (oddStack.empty()) {
//                std::cout << "Стек пустой" << std::endl;
//            }
//            else {
//                oddStack.display();
//            }
//
//            break;
//        }
//        default:
//            goto Menu;
//        }
//    }
//
//    return 0;
//}




#include <iostream>
#include <stack>
#include <cmath>

template <typename T>
class Stack {
private:
    std::stack<T> data;

public:
    void push(const T& value) {
        data.push(value);
    }

    T pop() {
        T top = data.top();
        data.pop();
        return top;
    }

    bool empty() const {
        return data.empty();
    }

    size_t size() const {
        return data.size();
    }

    void display() const {
        std::stack<T> temp = data;
        while (!temp.empty()) {
            std::cout << temp.top() << " ";
            temp.pop();
        }
        std::cout << std::endl;
    }
};

int main() {
    setlocale(LC_ALL, "rus");

    int choice;
    Stack<float> originalStack;
    Stack<float> evenStack;
    Stack<float> oddStack;

    while (true) {
    Menu:
        std::cout << "Меню" << std::endl;
        std::cout << "1. Добавить стек" << std::endl;
        std::cout << "2. Сортировка узла" << std::endl;
        std::cout << "3. Выход" << std::endl;
        std::cout << "4. Просмотр первого стека" << std::endl;
        std::cout << "5. Просмотр второго и третьего стеков" << std::endl;
        std::cout << "Выберите: " << std::endl;

        std::cin >> choice;

        switch (choice) {
        case 1: {
            // Ввод размера стека
            size_t stackSize;
            std::cout << "Введите размер стека: ";
            std::cin >> stackSize;

            // Создание стека и ввод элементов
            std::cout << "Введите элементы стека:" << std::endl;
            for (size_t i = 0; i < stackSize; ++i) {
                float value;
                std::cin >> value;
                originalStack.push(value);
            }
            break;
        }
        case 2: {
            // Разделение стека на два направления (четные и нечетные числа)
            while (!originalStack.empty()) {
                float value = originalStack.pop();
                if (std::fmod(value, 2.0) == 0.0) {
                    evenStack.push(value);
                }
                else {
                    oddStack.push(value);
                }
            }
            break;
        }
        case 3: {
            exit(0);
            break;
        }
        case 4: {
            // Просмотр первого стека
            std::cout << "Первый стек: ";
            if (originalStack.empty()) {
                std::cout << "Стек пустой" << std::endl;
            }
            else {
                originalStack.display();
            }
            break;
        }
        case 5: {
            // Просмотр второго и третьего стеков
            std::cout << "Второй стек (четные числа): ";
            if (evenStack.empty()) {
                std::cout << "Стек пустой" << std::endl;
            }
            else {
                evenStack.display();
            }

            std::cout << "Третий стек (нечетные числа): ";
            if (oddStack.empty()) {
                std::cout << "Стек пустой" << std::endl;
            }
            else {
                oddStack.display();
            }

            break;
        }
        default:
            goto Menu;
        }
    }

    return 0;
}
