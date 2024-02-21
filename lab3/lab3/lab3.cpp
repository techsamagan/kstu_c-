

//#include <iostream>
//using namespace std;
//
//class Vector3D;
//
//class Point3D {
//public:
//    Point3D(double x, double y, double z) : x(x), y(y), z(z) {}
//
//    void display() {
//        cout << "Point(" << x << ", " << y << ", " << z << ")" << endl;
//    }
//
//    friend void moveByVector(Point3D& point, const Vector3D& vector);
//
//private:
//    double x, y, z;
//};
//
//class Vector3D {
//public:
//    Vector3D(double x, double y, double z) : x(x), y(y), z(z) {}
//
//    void display() {
//        cout << "Vector(" << x << ", " << y << ", " << z << ")" << endl;
//    }
//
//  
//    friend void moveByVector(Point3D& point, const Vector3D& vector);
//
//private:
//    double x, y, z;
//};
//
//
//void moveByVector(Point3D& point, const Vector3D& vector)
//{
//    point.x += vector.x;
//    point.y += vector.y;
//    point.z += vector.z;
//}
//
//int main() {
//    setlocale(LC_ALL, "rus");
//    double x, y, z;
//    cout << "Введите координаты точки (x, y, z): " << endl;
//    cout << "X: ";
//    cin >> x;
//    cout << "Y: ";
//    cin >> y;
//    cout << "Z: ";
//    cin >> z;
//
//    Point3D point(x, y, z);
//
//    int choice;
//
//    while (true) {
//        cout << "Выберите операцию:" << endl;
//        cout << "1. Отобразить начальную точку" << endl;
//        cout << "2. Добавить точку перемещение" << endl;
//        cout << "0. Выход" << endl;
//        cin >> choice;
//
//        if (choice == 0) {
//            break;
//        }
//
//        if (choice == 1) {
//            point.display();
//        }
//        else if (choice == 2) {
//            double vx, vy, vz;
//            cout << "Введите координаты вектора перемещения (vx, vy, vz): " << endl;
//            cout << "VX: ";
//            cin >> vx;
//            cout << "VY: ";
//            cin >> vy;
//            cout << "VZ: ";
//            cin >> vz;
//
//            Vector3D vector(vx, vy, vz);
//            moveByVector(point, vector);
//            cout << "Точка перемещена вектором." << endl;
//        }
//        else {
//            cout << "Некорректный выбор. Выберите другую опцию." << endl;
//        }
//    }
//
//    return 0;
//}



//
//#include <iostream>
//using namespace std;
//
//class Vector3D;
//
//class Point3D {
//public:
//    Point3D(double x, double y, double z) : x(x), y(y), z(z) {}
//
//    void display() {
//        cout << "Point(" << x << ", " << y << ", " << z << ")" << endl;
//    }
//
//    friend class Vector3D; // Сделаем класс Vector3D дружественным для Point3D
//
//    void moveByVector(const Vector3D& vector);
//
//private:
//    double x, y, z;
//};
//
//class Vector3D {
//public:
//    Vector3D(double x, double y, double z) : x(x), y(y), z(z) {}
//
//    void display() {
//        cout << "Vector(" << x << ", " << y << ", " << z << ")" << endl;
//    }
//
//    friend class Point3D; // Сделаем класс Point3D дружественным для Vector3D
//
//private:
//    double x, y, z;
//};
//
//void Point3D::moveByVector(const Vector3D& vector) {
//    x += vector.x;
//    y += vector.y;
//    z += vector.z;
//}
//
//int main() {
//    setlocale(LC_ALL, "rus");
//    double x, y, z;
//    cout << "Введите координаты точки (x, y, z): " << endl;
//    cout << "X: ";
//    cin >> x;
//    cout << "Y: ";
//    cin >> y;
//    cout << "Z: ";
//    cin >> z;
//
//    Point3D point(x, y, z);
//
//    int choice;
//
//    while (true) {
//        cout << "Выберите операцию:" << endl;
//        cout << "1. Отобразить начальную точку" << endl;
//        cout << "2. Добавить точку перемещение" << endl;
//        cout << "0. Выход" << endl;
//        cin >> choice;
//
//        if (choice == 0) {
//            break;
//        }
//
//        if (choice == 1) {
//            point.display();
//        }
//        else if (choice == 2) {
//            double vx, vy, vz;
//            cout << "Введите координаты вектора перемещения (vx, vy, vz): " << endl;
//            cout << "VX: ";
//            cin >> vx;
//            cout << "VY: ";
//            cin >> vy;
//            cout << "VZ: ";
//            cin >> vz;
//
//            Vector3D vector(vx, vy, vz);
//            point.moveByVector(vector);
//            cout << "Точка перемещена вектором." << endl;
//        }
//        else {
//            cout << "Некорректный выбор. Выберите другую опцию." << endl;
//        }
//    }
//
//    return 0;
//}


//
//#include <iostream>
//using namespace std;
//
//class Vector3D;
//
//class Point3D {
//public:
//    Point3D(double x, double y, double z) : x(x), y(y), z(z) {}
//
//    void display() {
//        cout << "Point(" << x << ", " << y << ", " << z << ")" << endl;
//    }
//
//    void moveByVector(const Vector3D& vector); // Сделаем метод moveByVector дружественным классу Vector3D
//
//private:
//    double x, y, z;
//};
//
//class Vector3D {
//public:
//    Vector3D(double x, double y, double z) : x(x), y(y), z(z) {}
//
//    void display() {
//        cout << "Vector(" << x << ", " << y << ", " << z << ")" << endl;
//    }
//
//    friend void Point3D::moveByVector(const Vector3D& vector); // Сделаем метод moveByVector класса Point3D дружественным классу Vector3D
//
//private:
//    double x, y, z;
//};
//
//void Point3D::moveByVector(const Vector3D& vector) {
//    x += vector.x;
//    y += vector.y;
//    z += vector.z;
//}
//
//int main() {
//    double x, y, z;
//    cout << "Введите координаты точки (x, y, z): " << endl;
//    cout << "X: ";
//    cin >> x;
//    cout << "Y: ";
//    cin >> y;
//    cout << "Z: ";
//    cin >> z;
//
//    Point3D point(x, y, z);
//
//    int choice;
//
//    while (true) {
//        cout << "Выберите операцию:" << endl;
//        cout << "1. Отобразить начальную точку" << endl;
//        cout << "2. Добавить точку перемещение" << endl;
//        cout << "0. Выход" << endl;
//        cin >> choice;
//
//        if (choice == 0) {
//            break;
//        }
//
//        if (choice == 1) {
//            point.display();
//        }
//        else if (choice == 2) {
//            double vx, vy, vz;
//            cout << "Введите координаты вектора перемещения (vx, vy, vz): " << endl;
//            cout << "VX: ";
//            cin >> vx;
//            cout << "VY: ";
//            cin >> vy;
//            cout << "VZ: ";
//            cin >> vz;
//
//            Vector3D vector(vx, vy, vz);
//            point.moveByVector(vector);
//            cout << "Точка перемещена вектором." << endl;
//        }
//        else {
//            cout << "Некорректный выбор. Выберите другую опцию." << endl;
//        }
//    }
//
//    return 0;
//}
//
//
//
//
//










//
//
//#include <iostream>
//#include <string>
//#include <iomanip>
//
//using namespace std;
//
//class Tatra; 
//
//class Kamaz {
//private:
//    string car_name;
//    string driver_name;
//    struct Speed_time {
//        double time_plain;
//        double time_mountain;
//        double time_desert;
//    };
//    string race_name;
//    Speed_time speed_time;
//
//public:
//    Kamaz(string car_name, string driver_name, double time_plain, double time_mountain, double time_desert, string race_name)
//        : car_name(car_name), driver_name(driver_name), race_name(race_name) {
//        speed_time.time_plain = time_plain;
//        speed_time.time_mountain = time_mountain;
//        speed_time.time_desert = time_desert;
//    }
//
//    Kamaz() : car_name(""), driver_name(""), race_name("") {
//        speed_time.time_plain = 0.0;
//        speed_time.time_mountain = 0.0;
//        speed_time.time_desert = 0.0;
//    }
//
//    void Display() {
//        cout << setw(20) << car_name
//            << setw(20) << driver_name
//            << setw(20) << speed_time.time_plain
//            << setw(20) << speed_time.time_mountain
//            << setw(20) << speed_time.time_desert
//            << setw(20) << race_name << endl;
//    }
//
//    friend void FrCreater(Kamaz kamaz[], int k, Tatra tatra[], int t, int* score_kam, int* score_tat);
//};
//
//class Tatra {
//private:
//    string car_name;
//    string driver_name;
//    struct Speed_time {
//        double time_plain;
//        double time_mountain;
//        double time_desert;
//    };
//    string race_name;
//    Speed_time speed_time;
//
//public:
//    Tatra(string car_name, string driver_name, double time_plain, double time_mountain, double time_desert, string race_name)
//        : car_name(car_name), driver_name(driver_name), race_name(race_name) {
//        speed_time.time_plain = time_plain;
//        speed_time.time_mountain = time_mountain;
//        speed_time.time_desert = time_desert;
//    }
//
//    Tatra() : car_name(""), driver_name(""), race_name("") {
//        speed_time.time_plain = 0.0;
//        speed_time.time_mountain = 0.0;
//        speed_time.time_desert = 0.0;
//    }
//
//    void Display() {
//        cout << setw(20) << car_name
//            << setw(20) << driver_name
//            << setw(20) << speed_time.time_plain
//            << setw(20) << speed_time.time_mountain
//            << setw(20) << speed_time.time_desert
//            << setw(20) << race_name << endl;
//    }
//
//    friend void FrCreater(Kamaz kamaz[], int k, Tatra tatra[], int t, int* score_kam, int* score_tat);
//};
//
//void FrCreater(Kamaz kamaz[], int k, Tatra tatra[], int t, int* score_kam, int* score_tat) {
//    double kam_min_plain = DBL_MAX, kam_min_mountain = DBL_MAX, kam_min_desert = DBL_MAX;
//    double tat_min_plain = DBL_MAX, tat_min_mountain = DBL_MAX, tat_min_desert = DBL_MAX;
//
//    for (int i = 0; i < k; i++) {
//        if (kam_min_plain > kamaz[i].speed_time.time_plain) {
//            kam_min_plain = kamaz[i].speed_time.time_plain;
//        }
//
//        if (kam_min_mountain > kamaz[i].speed_time.time_mountain) {
//            kam_min_mountain = kamaz[i].speed_time.time_mountain;
//        }
//
//        if (kam_min_desert > kamaz[i].speed_time.time_desert) {
//            kam_min_desert = kamaz[i].speed_time.time_desert;
//        }
//    }
//
//    for (int i = 0; i < t; i++) {
//        if (tat_min_plain > tatra[i].speed_time.time_plain) {
//            tat_min_plain = tatra[i].speed_time.time_plain;
//        }
//
//        if (tat_min_mountain > tatra[i].speed_time.time_mountain) {
//            tat_min_mountain = tatra[i].speed_time.time_mountain;
//        }
//
//        if (tat_min_desert > tatra[i].speed_time.time_desert) {
//            tat_min_desert = tatra[i].speed_time.time_desert;
//        }
//    }
//
//    if (kam_min_plain < tat_min_plain) {
//        cout << "Kamaz выиграл по равнине" << endl;
//        *score_kam += 2;
//    }
//    else if (kam_min_plain > tat_min_plain) {
//        cout << "Tatra выиграл по равнине" << endl;
//        *score_tat += 2;
//    }
//    else {
//        cout << "Была ничья по равнине" << endl;
//        *score_kam += 1;
//        *score_tat += 1;
//    }
//
//    if (kam_min_mountain < tat_min_mountain) {
//        cout << "Kamaz выиграл по горам" << endl;
//        *score_kam += 2;
//    }
//    else if (kam_min_mountain > tat_min_mountain) {
//        cout << "Tatra выиграл по горам" << endl;
//        *score_tat += 2;
//    }
//    else {
//        cout << "Была ничья по горам" << endl;
//        *score_kam += 1;
//        *score_tat += 1;
//    }
//
//    if (kam_min_desert < tat_min_desert) {
//        cout << "Kamaz выиграл по пустыне" << endl;
//        *score_kam += 2;
//    }
//    else if (kam_min_desert > tat_min_desert) {
//        cout << "Tatra выиграл по пустыне" << endl;
//        *score_tat += 2;
//    }
//    else {
//        cout << "Была ничья по пустыне" << endl;
//        *score_kam += 1;
//        *score_tat += 1;
//    }
//}
//
//int main() {
//    setlocale(LC_ALL, "");
//    int k, t;
//    int score_tat = 0;
//    int score_kam = 0;
//    string car, driver, race = "Равнина, Горы, Пустыня";
//    double t1, t2, t3;
//
//    cout << "Сколько Kamaz участвуют в гонке: ";
//    cin >> k;
//    cout << "Сколько Tatra участвуют в гонке: ";
//    cin >> t;
//
//    Kamaz* kamaz = new Kamaz[k];
//    Tatra* tatra = new Tatra[t];
//
//    for (int i = 0; i < k; i++) {
//        cout << "Введите марку #" << i + 1 << "го Kamaz: ";
//        cin >> car;
//        cout << "Введите имя гонщика #" << i + 1 << "го Kamaz: ";
//        cin >> driver;
//        cout << "Введите время #" << i + 1 << "го Kamaz по равнине: ";
//        cin >> t1;
//        cout << "Введите время #" << i + 1 << "го Kamaz по горам: ";
//        cin >> t2;
//        cout << "Введите время #" << i + 1 << "го Kamaz по пустыне: ";
//        cin >> t3;
//
//        kamaz[i] = Kamaz(car, driver, t1, t2, t3, race);
//    }
//
//    for (int i = 0; i < t; i++) {
//        cout << "Введите марку #" << i + 1 << "го Tatra: ";
//        cin >> car;
//        cout << "Введите имя гонщика #" << i + 1 << "го Tatra: ";
//        cin >> driver;
//        cout << "Введите время #" << i + 1 << "го Tatra по равнине: ";
//        cin >> t1;
//        cout << "Введите время #" << i + 1 << "го Tatra по горам: ";
//        cin >> t2;
//        cout << "Введите время #" << i + 1 << "го Tatra по пустыне: ";
//        cin >> t3;
//
//        tatra[i] = Tatra(car, driver, t1, t2, t3, race);
//    }
//
//    FrCreater(kamaz, k, tatra, t, &score_kam, &score_tat);
//
//    if (score_kam > score_tat) {
//        cout << "Kamaz выиграл Tatra со счетом " << score_kam << ":" << score_tat << endl;
//    }
//    else if (score_kam < score_tat) {
//        cout << "Tatra выиграл Kamaz со счетом " << score_kam << ":" << score_tat << endl;
//    }
//    else {
//        cout << "Ничья со счетом " << score_kam << ":" << score_tat << endl;
//    }
//
//  
//    delete[] kamaz;
//    delete[] tatra;
//
//    return 0;
//}


//
//#include <iostream>
//#include <string>
//#include <iomanip>
//
//using namespace std;
//
//class Tatra; 
//
//class Kamaz {
//private:
//    string car_name;
//    string driver_name;
//    struct Speed_time {
//        double time_plain;
//        double time_mountain;
//        double time_desert;
//    };
//    string race_name;
//    Speed_time speed_time;
//
//public:
//    Kamaz(string car_name, string driver_name, double time_plain, double time_mountain, double time_desert, string race_name)
//        : car_name(car_name), driver_name(driver_name), race_name(race_name) {
//        speed_time.time_plain = time_plain;
//        speed_time.time_mountain = time_mountain;
//        speed_time.time_desert = time_desert;
//    }
//
//    Kamaz() : car_name(""), driver_name(""), race_name("") {
//        speed_time.time_plain = 0.0;
//        speed_time.time_mountain = 0.0;
//        speed_time.time_desert = 0.0;
//    }
//
//    void Display() {
//        cout << setw(20) << car_name
//            << setw(20) << driver_name
//            << setw(20) << speed_time.time_plain
//            << setw(20) << speed_time.time_mountain
//            << setw(20) << speed_time.time_desert
//            << setw(20) << race_name << endl;
//    }
//    friend class Tatra;
//    void FrCreater(Kamaz kamaz[], int k, Tatra tatra[], int t, int* score_kam, int* score_tat);
//    //friend void FrCreater(Kamaz kamaz[], int k, Tatra tatra[], int t, int* score_kam, int* score_tat);
//};
//
//class Tatra {
//private:
//    string car_name;
//    string driver_name;
//    struct Speed_time {
//    public:
//        double time_plain;
//        double time_mountain;
//        double time_desert;
//    };
//    string race_name;
//    Speed_time speed_time;
//
//public:
//    Tatra(string car_name, string driver_name, double time_plain, double time_mountain, double time_desert, string race_name)
//        : car_name(car_name), driver_name(driver_name), race_name(race_name) {
//        speed_time.time_plain = time_plain;
//        speed_time.time_mountain = time_mountain;
//        speed_time.time_desert = time_desert;
//    }
//
//    Tatra() : car_name(""), driver_name(""), race_name("") {
//        speed_time.time_plain = 0.0;
//        speed_time.time_mountain = 0.0;
//        speed_time.time_desert = 0.0;
//    }
//
//    void Display() {
//        cout << setw(20) << car_name
//            << setw(20) << driver_name
//            << setw(20) << speed_time.time_plain
//            << setw(20) << speed_time.time_mountain
//            << setw(20) << speed_time.time_desert
//            << setw(20) << race_name << endl;
//    }
//    friend class Kamaz;
//    //friend void FrCreater(Kamaz kamaz[], int k, Tatra tatra[], int t, int* score_kam, int* score_tat);
//};
//
//void Kamaz::FrCreater(Kamaz kamaz[], int k, Tatra tatra[], int t, int* score_kam, int* score_tat) {
//    double kam_min_plain = DBL_MAX, kam_min_mountain = DBL_MAX, kam_min_desert = DBL_MAX;
//    double tat_min_plain = DBL_MAX, tat_min_mountain = DBL_MAX, tat_min_desert = DBL_MAX;
//
//    for (int i = 0; i < k; i++) {
//        if (kam_min_plain > kamaz[i].speed_time.time_plain) {
//            kam_min_plain = kamaz[i].speed_time.time_plain;
//        }
//
//        if (kam_min_mountain > kamaz[i].speed_time.time_mountain) {
//            kam_min_mountain = kamaz[i].speed_time.time_mountain;
//        }
//
//        if (kam_min_desert > kamaz[i].speed_time.time_desert) {
//            kam_min_desert = kamaz[i].speed_time.time_desert;
//        }
//    }
//
//    for (int i = 0; i < t; i++) {
//        if (tat_min_plain > tatra[i].speed_time.time_plain) {
//            tat_min_plain = tatra[i].speed_time.time_plain;
//        }
//
//        if (tat_min_mountain > tatra[i].speed_time.time_mountain) {
//            tat_min_mountain = tatra[i].speed_time.time_mountain;
//        }
//
//        if (tat_min_desert > tatra[i].speed_time.time_desert) {
//            tat_min_desert = tatra[i].speed_time.time_desert;
//        }
//    }
//
//    if (kam_min_plain < tat_min_plain) {
//        cout << "Kamaz выиграл по равнине" << endl;
//        *score_kam += 2;
//    }
//    else if (kam_min_plain > tat_min_plain) {
//        cout << "Tatra выиграл по равнине" << endl;
//        *score_tat += 2;
//    }
//    else {
//        cout << "Была ничья по равнине" << endl;
//        *score_kam += 1;
//        *score_tat += 1;
//    }
//
//    if (kam_min_mountain < tat_min_mountain) {
//        cout << "Kamaz выиграл по горам" << endl;
//        *score_kam += 2;
//    }
//    else if (kam_min_mountain > tat_min_mountain) {
//        cout << "Tatra выиграл по горам" << endl;
//        *score_tat += 2;
//    }
//    else {
//        cout << "Была ничья по горам" << endl;
//        *score_kam += 1;
//        *score_tat += 1;
//    }
//
//    if (kam_min_desert < tat_min_desert) {
//        cout << "Kamaz выиграл по пустыне" << endl;
//        *score_kam += 2;
//    }
//    else if (kam_min_desert > tat_min_desert) {
//        cout << "Tatra выиграл по пустыне" << endl;
//        *score_tat += 2;
//    }
//    else {
//        cout << "Была ничья по пустыне" << endl;
//        *score_kam += 1;
//        *score_tat += 1;
//    }
//}
//
//int main() {
//    setlocale(LC_ALL, "");
//    int k, t;
//    int score_tat = 0;
//    int score_kam = 0;
//    string car, driver, race = "Равнина, Горы, Пустыня";
//    double t1, t2, t3;
//
//    cout << "Сколько Kamaz участвуют в гонке: ";
//    cin >> k;
//    cout << "Сколько Tatra участвуют в гонке: ";
//    cin >> t;
//
//    Kamaz* kamaz = new Kamaz[k];
//    Tatra* tatra = new Tatra[t];
//
//    for (int i = 0; i < k; i++) {
//        cout << "Введите марку #" << i + 1 << "го Kamaz: ";
//        cin >> car;
//        cout << "Введите имя гонщика #" << i + 1 << "го Kamaz: ";
//        cin >> driver;
//        cout << "Введите время #" << i + 1 << "го Kamaz по равнине: ";
//        cin >> t1;
//        cout << "Введите время #" << i + 1 << "го Kamaz по горам: ";
//        cin >> t2;
//        cout << "Введите время #" << i + 1 << "го Kamaz по пустыне: ";
//        cin >> t3;
//
//        kamaz[i] = Kamaz(car, driver, t1, t2, t3, race);
//    }
//
//    for (int i = 0; i < t; i++) {
//        cout << "Введите марку #" << i + 1 << "го Tatra: ";
//        cin >> car;
//        cout << "Введите имя гонщика #" << i + 1 << "го Tatra: ";
//        cin >> driver;
//        cout << "Введите время #" << i + 1 << "го Tatra по равнине: ";
//        cin >> t1;
//        cout << "Введите время #" << i + 1 << "го Tatra по горам: ";
//        cin >> t2;
//        cout << "Введите время #" << i + 1 << "го Tatra по пустыне: ";
//        cin >> t3;
//
//        tatra[i] = Tatra(car, driver, t1, t2, t3, race);
//    }
//
//    kamaz[0].FrCreater(kamaz, k, tatra, t, &score_kam, &score_tat);
//
//    if (score_kam > score_tat) {
//        cout << "Kamaz выиграл Tatra со счетом " << score_kam << ":" << score_tat << endl;
//    }
//    else if (score_kam < score_tat) {
//        cout << "Tatra выиграл Kamaz со счетом " << score_kam << ":" << score_tat << endl;
//    }
//    else {
//        cout << "Ничья со счетом " << score_kam << ":" << score_tat << endl;
//    }
//
//  
//    delete[] kamaz;
//    delete[] tatra;
//
//    return 0;
//}
//
//



//
//#include <iostream>
//#include <string>
//#include <iomanip>
//
//using namespace std;
//
//class Tatra; 
//
//class Kamaz {
//private:
//    string car_name;
//    string driver_name;
//    struct Speed_time {
//        double time_plain;
//        double time_mountain;
//        double time_desert;
//    };
//    string race_name;
//    Speed_time speed_time;
//
//public:
//    Kamaz(string car_name, string driver_name, double time_plain, double time_mountain, double time_desert, string race_name)
//        : car_name(car_name), driver_name(driver_name), race_name(race_name) {
//        speed_time.time_plain = time_plain;
//        speed_time.time_mountain = time_mountain;
//        speed_time.time_desert = time_desert;
//    }
//
//    Kamaz() : car_name(""), driver_name(""), race_name("") {
//        speed_time.time_plain = 0.0;
//        speed_time.time_mountain = 0.0;
//        speed_time.time_desert = 0.0;
//    }
//
//    void Display() {
//        cout << setw(20) << car_name
//            << setw(20) << driver_name
//            << setw(20) << speed_time.time_plain
//            << setw(20) << speed_time.time_mountain
//            << setw(20) << speed_time.time_desert
//            << setw(20) << race_name << endl;
//    }
//
//    void FrCreater(Kamaz kamaz[], int k, Tatra tatra[], int t, int* score_kam, int* score_tat);
//    
//};
//
//class Tatra {
//private:
//    string car_name;
//    string driver_name;
//    struct Speed_time {
//        double time_plain;
//        double time_mountain;
//        double time_desert;
//    };
//    string race_name;
//    Speed_time speed_time;
//
//public:
//    Tatra(string car_name, string driver_name, double time_plain, double time_mountain, double time_desert, string race_name)
//        : car_name(car_name), driver_name(driver_name), race_name(race_name) {
//        speed_time.time_plain = time_plain;
//        speed_time.time_mountain = time_mountain;
//        speed_time.time_desert = time_desert;
//    }
//
//    Tatra() : car_name(""), driver_name(""), race_name("") {
//        speed_time.time_plain = 0.0;
//        speed_time.time_mountain = 0.0;
//        speed_time.time_desert = 0.0;
//    }
//
//    void Display() {
//        cout << setw(20) << car_name
//            << setw(20) << driver_name
//            << setw(20) << speed_time.time_plain
//            << setw(20) << speed_time.time_mountain
//            << setw(20) << speed_time.time_desert
//            << setw(20) << race_name << endl;
//    }
//
//    friend void Kamaz::FrCreater(Kamaz kamaz[], int k, Tatra tatra[], int t, int* score_kam, int* score_tat);
//};
//
//void Kamaz::FrCreater(Kamaz kamaz[], int k, Tatra tatra[], int t, int* score_kam, int* score_tat) {
//    double kam_min_plain = DBL_MAX, kam_min_mountain = DBL_MAX, kam_min_desert = DBL_MAX;
//    double tat_min_plain = DBL_MAX, tat_min_mountain = DBL_MAX, tat_min_desert = DBL_MAX;
//
//    for (int i = 0; i < k; i++) {
//        if (kam_min_plain > kamaz[i].speed_time.time_plain) {
//            kam_min_plain = kamaz[i].speed_time.time_plain;
//        }
//
//        if (kam_min_mountain > kamaz[i].speed_time.time_mountain) {
//            kam_min_mountain = kamaz[i].speed_time.time_mountain;
//        }
//
//        if (kam_min_desert > kamaz[i].speed_time.time_desert) {
//            kam_min_desert = kamaz[i].speed_time.time_desert;
//        }
//    }
//
//    for (int i = 0; i < t; i++) {
//        if (tat_min_plain > tatra[i].speed_time.time_plain) {
//            tat_min_plain = tatra[i].speed_time.time_plain;
//        }
//
//        if (tat_min_mountain > tatra[i].speed_time.time_mountain) {
//            tat_min_mountain = tatra[i].speed_time.time_mountain;
//        }
//
//        if (tat_min_desert > tatra[i].speed_time.time_desert) {
//            tat_min_desert = tatra[i].speed_time.time_desert;
//        }
//    }
//
//    if (kam_min_plain < tat_min_plain) {
//        cout << "Kamaz выиграл по равнине" << endl;
//        *score_kam += 2;
//    }
//    else if (kam_min_plain > tat_min_plain) {
//        cout << "Tatra выиграл по равнине" << endl;
//        *score_tat += 2;
//    }
//    else {
//        cout << "Была ничья по равнине" << endl;
//        *score_kam += 1;
//        *score_tat += 1;
//    }
//
//    if (kam_min_mountain < tat_min_mountain) {
//        cout << "Kamaz выиграл по горам" << endl;
//        *score_kam += 2;
//    }
//    else if (kam_min_mountain > tat_min_mountain) {
//        cout << "Tatra выиграл по горам" << endl;
//        *score_tat += 2;
//    }
//    else {
//        cout << "Была ничья по горам" << endl;
//        *score_kam += 1;
//        *score_tat += 1;
//    }
//
//    if (kam_min_desert < tat_min_desert) {
//        cout << "Kamaz выиграл по пустыне" << endl;
//        *score_kam += 2;
//    }
//    else if (kam_min_desert > tat_min_desert) {
//        cout << "Tatra выиграл по пустыне" << endl;
//        *score_tat += 2;
//    }
//    else {
//        cout << "Была ничья по пустыне" << endl;
//        *score_kam += 1;
//        *score_tat += 1;
//    }
//}
//
//int main() {
//    setlocale(LC_ALL, "");
//    int k, t;
//    int score_tat = 0;
//    int score_kam = 0;
//    string car, driver, race = "Равнина, Горы, Пустыня";
//    double t1, t2, t3;
//
//    cout << "Сколько Kamaz участвуют в гонке: ";
//    cin >> k;
//    cout << "Сколько Tatra участвуют в гонке: ";
//    cin >> t;
//
//    Kamaz* kamaz = new Kamaz[k];
//    Tatra* tatra = new Tatra[t];
//
//    for (int i = 0; i < k; i++) {
//        cout << "Введите марку #" << i + 1 << "го Kamaz: ";
//        cin >> car;
//        cout << "Введите имя гонщика #" << i + 1 << "го Kamaz: ";
//        cin >> driver;
//        cout << "Введите время #" << i + 1 << "го Kamaz по равнине: ";
//        cin >> t1;
//        cout << "Введите время #" << i + 1 << "го Kamaz по горам: ";
//        cin >> t2;
//        cout << "Введите время #" << i + 1 << "го Kamaz по пустыне: ";
//        cin >> t3;
//
//        kamaz[i] = Kamaz(car, driver, t1, t2, t3, race);
//    }
//
//    for (int i = 0; i < t; i++) {
//        cout << "Введите марку #" << i + 1 << "го Tatra: ";
//        cin >> car;
//        cout << "Введите имя гонщика #" << i + 1 << "го Tatra: ";
//        cin >> driver;
//        cout << "Введите время #" << i + 1 << "го Tatra по равнине: ";
//        cin >> t1;
//        cout << "Введите время #" << i + 1 << "го Tatra по горам: ";
//        cin >> t2;
//        cout << "Введите время #" << i + 1 << "го Tatra по пустыне: ";
//        cin >> t3;
//
//        tatra[i] = Tatra(car, driver, t1, t2, t3, race);
//    }
//
//    FrCreater(kamaz, k, tatra, t, &score_kam, &score_tat);
//
//    if (score_kam > score_tat) {
//        cout << "Kamaz выиграл Tatra со счетом " << score_kam << ":" << score_tat << endl;
//    }
//    else if (score_kam < score_tat) {
//        cout << "Tatra выиграл Kamaz со счетом " << score_kam << ":" << score_tat << endl;
//    }
//    else {
//        cout << "Ничья со счетом " << score_kam << ":" << score_tat << endl;
//    }
//
//  
//    delete[] kamaz;
//    delete[] tatra;
//
//    return 0;
//}


//
//#include <iostream>
//#include <string>
//#include <iomanip>
//
//
//using namespace std;
//
//class Tatra
//{
//private:
//	string driver;
//	string auto_name;
//	double time_race;
//	string name_race;
//public:
//	Tatra(string a, string b, double c, string d):driver(a), auto_name(b), time_race(c), name_race(d) {}
//	Tatra():driver(""), auto_name(""), time_race(0), name_race("") {}
//	void display()
//	{
//		cout << driver << setw(20) << auto_name << setw(20) << time_race << setw(20) << name_race << endl;
//	}
//};
//
//class Kamaz
//{
//private:
//	string driver;
//	string auto_name;
//	double time_race;
//	string name_race;
//
//public:
//	Kamaz(string a, string b, double c, string d) :driver(a), auto_name(b), time_race(c), name_race(d) {}
//	Kamaz() :driver(""), auto_name(""), time_race(0), name_race("") {}
//	void display()
//	{
//		cout << driver << setw(20) << auto_name << setw(20) << time_race << setw(20) << name_race << endl;
//	}
//};
//
//int main()
//{
//	int n_t, n_k,choice;
//	string car, driver, name_race;
//	double time_race;
//	cout << "Сколько Tatra участвуют гонке: ";
//	cin >> n_t;
//	cout << "Сколько Kamaz участвуют гонке: ";
//	cin >> n_k;
//
//	Kamaz* kamaz = new Kamaz[n_k];
//	Tatra* tatra = new Tatra[n_t];
//
//	for (int i = 0; i < n_t; i++)
//	{
//		cout << "Введите марку #" << i + 1 << "го Tatra: ";
//		cin >> car;
//		cout << "Введите имя гонщика #" << i + 1 << "го Tatra: ";
//		cin >> driver;
//	Menu:
//		cout << "Выберите участки:" << endl;
//		cout << "1. Горы" << endl;
//		cout << "2. Пустыни" << endl;
//		cout << "3. Равнины" << endl;
//		cout << "Выберите: " << endl;
//		cin >> choice;
//		switch (choice)
//		{
//		case 1:
//			name_race = "Горы";
//			break;
//		case 2:
//			name_race = "Пустыни";
//		case 3:
//			name_race = "Равнины";
//		default:
//			cout << "Oшибка! Выберите участки заново." << endl;
//			goto Menu;
//			break;
//		}
//		cout << "Введите время #" << i + 1 << "го Tatra: ";
//		cin >> time_race;
//
//		tatra[i] = Tatra(driver, car, name_race, time_race);
//	}
//
//	for (int i = 0; i < n_k; i++)
//	{
//		cout << "Введите марку #" << i + 1 << "го Kamaz: ";
//		cin >> car;
//		cout << "Введите имя гонщика #" << i + 1 << "го Kamaz: ";
//		cin >> driver;
//		Menu:
//		cout << "Выберите участки:" << endl;
//		cout << "1. Горы" << endl;
//		cout << "2. Пустыни" << endl;
//		cout << "3. Равнины" << endl;
//		cout << "Выберите: " << endl;
//		cin >> choice;
//		switch (choice)
//		{
//		case 1:
//			name_race = "Горы";
//			break;
//		case 2:
//			name_race = "Пустыни";
//		case 3:
//			name_race = "Равнины";
//		default:
//			cout << "Oшибка! Выберите участки заново." << endl;
//			goto Menu;
//			
//		}
//		cout << "Введите время #" << i + 1 << "го Kamaz: ";
//		cin >> time_race;
//
//		kamaz[i] = Kamaz(driver, car, name_race, time_race);
//	}
//
//
//
//	return 0;
//}







#include<iostream>
#include <windows.h>
#include<iomanip>
using namespace std;
class Tatra;
int countWin;

class Kamaz {

    string name;  // Имя
    int speed;   // скорость
public:
    Kamaz() :name(""), speed(0) {} // Конструктор по умолчанию

    Kamaz(const string& name, int speed) :name(name), speed(speed) {}  // Констрктор для инициализации

    ~Kamaz() {}  // Деструктор

    void show() {  // Вывод на экрана данные
        cout << "Name - " << name << " Speed - " << speed << endl;
    }

    friend class Tatra; // Класс tatra дружественный классу Камаз
    friend int FrCreatorMethod(Kamaz& k, Tatra& t);  // Задание 2 Дружественный метод для Камаз и tatra
    friend void show(Kamaz& k, Tatra& t);

    void setSpeed(int speed) {
        this->speed = speed;
    }
};


class Tatra
{
    string name;
    int speed;
public:
    Tatra() :name(""), speed(0) {}                      // Конструктор по умолчанию

    Tatra(const string& name, int speed) :name(name), speed(speed) {} // Констрктор для инициализации

    ~Tatra() {}                                         // Деструктор

    void show() {                                      // Вывод на экрана данные
        cout << "Name - " << name << " Speed - " << speed << endl;
    }

    int FrCreator(Kamaz& kamaz) {                     // метод для сравнениея скоростей
        int res = kamaz.speed - this->speed;
        return res > 0 ? 1 : res < 0 ? -1 : res;
    }

    friend int FrCreatorMethod(Kamaz& k, Tatra& t);  // Задание 2 Дружественный метод для Камаз и tatra
    friend void show(Kamaz& k, Tatra& t);            // для вывода одновремменно данные двух классов

    void setSpeed(int speed) {
        this->speed = speed;
    }
};

void wins(int result);

int main() {
    setlocale(LC_ALL, "ru");
    unsigned int giveSpeed;
    Kamaz kamaz("KAMAZ", 110);
    Tatra tatra("Tatra", 130);

    while (true) {
        countWin = 0;                                  //счетчик побед
        show(kamaz, tatra);

        cout << "\033[32mПо равнине: ";
        int result = FrCreatorMethod(kamaz, tatra);   // Использование метода за классом 
        wins(result);
        cout << "\033[0m" << endl;

        cout << "Скорость для KAMAZ "; cin >> giveSpeed;
        kamaz.setSpeed(giveSpeed);                          // Изменим скорость KAMAZ
        cout << "Скорость для Tatra "; cin >> giveSpeed;
        tatra.setSpeed(giveSpeed);


        show(kamaz, tatra);

        cout << "\033[35mПо горам: ";
        result = tatra.FrCreator(kamaz);           // Использование метода внутри дружественного класса
        wins(result);
        cout << "\033[0m" << endl;

        cout << "Скорость для KAMAZ "; cin >> giveSpeed;
        kamaz.setSpeed(giveSpeed);                          // Изменим скорость KAMAZ
        cout << "Скорость для Tatra "; cin >> giveSpeed;
        tatra.setSpeed(giveSpeed);                    // Изменим скорость Tatra

        show(kamaz, tatra);

        cout << "\033[33mВ пустыне: ";
        result = FrCreatorMethod(kamaz, tatra);
        wins(result);
        cout << "\033[0m" << endl;

        cout << "\033[31m";
        if (countWin > 0) {
            cout << "Победил KAMAZ" << endl;
        }
        else if (countWin < 0)
            cout << "Победил Tatra" << endl;
        else
            cout << "Ничья" << endl;
        cout << "\033[0m" << endl << endl;
    }
    return 0;
}

// Задание 2 Дружественный метод для Камаз и tatra
int FrCreatorMethod(Kamaz& k, Tatra& t)
{
    int res = k.speed - t.speed;
    return res > 0 ? 1 : res < 0 ? -1 : res;
}
void show(Kamaz& k, Tatra& t)
{
    cout << left << setw(10) << "Имя" << setw(8) << "Скорость" << endl;
    cout << "---------------------------------" << endl;
    cout << setw(10) << k.name << setw(8) << k.speed << endl;
    cout << setw(10) << t.name << setw(8) << t.speed << endl;
}
void wins(int result) {
    if (result == 1) {
        cout << "KAMAZ выигрывает" << endl;
        countWin++;
    }
    else if (result == -1) {
        cout << "Tatra выигрывает" << endl;
        countWin--;
    }
    else
        cout << "Ничья" << endl;
}