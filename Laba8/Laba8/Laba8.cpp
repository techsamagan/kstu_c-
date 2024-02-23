



//
//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//
//class AntiAircraftGun {
//private:
//    double probability;
//
//public:
//    AntiAircraftGun(double p) : probability(p) {}
//
//    int shootDown(int n) {
//        std::srand(static_cast<unsigned int>(std::time(nullptr)));
//
//        for (int i = 0; i < n; ++i) {
//            double randomValue = static_cast<double>(rand()) / RAND_MAX;
//
//            // Выводим результат каждого выстрела (0 или 1)
//            std::cout << "Выстрел " << i + 1 << ": " << (randomValue < probability ? 1 : 0) << std::endl;
//
//            // Если случайное число меньше вероятности попадания, цель сбита
//            if (randomValue < probability) {
//                return 1; // Цель уничтожена
//            }
//        }
//
//        return 0; // Самолет не сбит
//    }
//
//    double estimateProbability(int n) {
//        return 1.0 - std::pow(1.0 - probability, n);
//    }
//};
//
//int main() {
//    setlocale(LC_ALL, "rus");
//    double p;
//    int n;
//
//    std::cout << "Введите вероятность попадания (0 <= p <= 1): ";
//    std::cin >> p;
//
//    std::cout << "Введите количество выстрелов n: ";
//    std::cin >> n;
//
//    if (p < 0 || p > 1 || n <= 0) {
//        std::cout << "Некорректный ввод данных." << std::endl;
//        return 1;
//    }
//
//    AntiAircraftGun gun(p);
//
//    int result = gun.shootDown(n);
//    std::cout << "Результат стрельбы: " << (result ? "Цель уничтожена" : "Самолет не сбит") << std::endl;
//
//    double estimatedProbability = gun.estimateProbability(n);
//    std::cout << "Оценочная вероятность поражения цели: " << estimatedProbability << std::endl;
//
//    return 0;
//}


//
//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//
//class AntiAircraftGun {
//private:
//    double probability;
//
//public:
//    static void setLocaleRussian() {
//        setlocale(LC_ALL, "rus");
//    }
//
//    AntiAircraftGun(double p) : probability(p) {}
//
//    int shootDown(int n) {
//        std::srand(static_cast<unsigned int>(std::time(nullptr)));
//
//        for (int i = 0; i < n; ++i) {
//            double randomValue = static_cast<double>(rand()) / RAND_MAX;
//
//            // Выводим результат каждого выстрела (0 или 1)
//            std::cout << "Выстрел " << i + 1 << ": " << (randomValue < probability ? 1 : 0) << std::endl;
//
//            
//            if (randomValue < probability) {
//                return 1; // Цель уничтожена
//            }
//        }
//
//        return 0; // Самолет не сбит
//    }
//
//    double estimateProbability(int n) {
//        return 1.0 - std::pow(1.0 - probability, n);
//    }
//};
//
//int main() {
//    AntiAircraftGun::setLocaleRussian(); // Set Russian locale
//
//    double p;
//    int n;
//
//    std::cout << "Введите вероятность попадания (0 <= p <= 1): ";
//    std::cin >> p;
//
//    std::cout << "Введите количество выстрелов n: ";
//    std::cin >> n;
//
//    if (p < 0 || p > 1 || n <= 0) {
//        std::cout << "Некорректный ввод данных." << std::endl;
//        return 1;
//    }
//
//    AntiAircraftGun gun(p);
//
//    int result = gun.shootDown(n);
//    std::cout << "Результат стрельбы: " << (result ? "Цель уничтожена" : "Самолет не сбит") << std::endl;
//
//    double estimatedProbability = gun.estimateProbability(n);
//    std::cout << "Оценочная вероятность поражения цели: " << estimatedProbability << std::endl;
//
//    return 0;
//}


#include <iostream>
#include <cmath>

class ZenithGun {
private:
    static double probability; 

public:
    // Установка вероятности
    static void setProbability(double p) {
        probability = p;
    }

    // Вычисление результата стрельбы
    static int shoot(int n) {
        double result = 1.0 - std::pow((1.0 - probability), n);
        return (result >= 1.0) ? 1 : 0;
    }


    static double estimateProbability(int n) {
        return 1.0 - std::pow((1.0 - probability), n);
    }
};

double ZenithGun::probability = 0.0;

int main() {
    setlocale(LC_ALL, "rus");
    Begin:
    double p;
    std::cout << "Введите вероятность попадания одного выстрела (p): ";
    std::cin >> p;

    int n;
    std::cout << "Введите количество выстрелов (n): ";
    std::cin >> n;

    // Устанавливаем вероятность попадания одного выстрела
    ZenithGun::setProbability(p);

    // Вывод вероятности каждого выстрела до первого попадания
    for (int i = 1; i <= (n*0.2)+1; ++i) {
        double singleShotProbability = ZenithGun::estimateProbability(i);
        std::cout << "Вероятность попадания после " << i << " выстрела(ов): " << singleShotProbability << std::endl;
    }

    // Вычисление результата стрельбы
    int result = ZenithGun::shoot(n);
    if (result == 1) {
        std::cout << "Цель уничтожена!" << std::endl;
        goto Begin;
    }
    
    else {
        std::cout << "Самолет не сбит." << std::endl;
    }

    return 0;
}


