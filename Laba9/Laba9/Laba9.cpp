//#include<iostream>
//
//using namespace std;
//
//const int LIMIT = 100;
//
//class SafeArray {
//private:
//    int arr[LIMIT];
//public:
//    class Range {
//    private:
//        string msg;
//    public:
//        Range(const string& str) :msg(str) {}
//
//        void what() {
//            cout << msg << endl;
//        }
//    };
//    void putel(int n, int elvalue) {
//        if (n < 0 || n >= LIMIT)
//            throw Range("Выход за диапазон");
//        arr[n] = elvalue;
//    }
//
//    int getel(int n) const {
//        if (n < 0 || n >= LIMIT)
//            throw Range("Выход за диапазон");
//        return arr[n];
//    }
//};
//
//
//int main() {
//    setlocale(LC_ALL, "rus");
//    srand(time(0));
//
//    SafeArray sa;
//
//    for (int i = 0; i < LIMIT; i++) {
//        try {
//            sa.putel(i, i * 10);
//        }
//        catch (SafeArray::Range ex) {
//            ex.what();
//        }
//    }
//
//
//    for (int i = 0; i < LIMIT; i++) {
//        try {
//            cout << "Элемент " << i << " = " << sa.getel(i) << endl;
//        }
//        catch (SafeArray::Range ex) {
//            ex.what();
//        }
//    }
//
//    return 0;
//}


//#include<iostream>
//#include<Windows.h>
//#include<process.h>
//using namespace std;
//
//class Rectangle {
//private:
//    int length, width;
//
//public:
//
//    int rect_area(int a, int b) {
//        return a * b;
//    }
//
//    int rect_area(int a) {
//        return a * a;
//    }
//};
//
//class ShootAir {
//private:
//    int p;
//
//public:
//
//    bool shoot_plane(int p, int n) {
//        for (int i = 0; i < n; i++) {
//            double res = double(rand());
//            if (res < p)
//                return 1;
//        }
//        return 0;
//    }
//
//    double estimatated(int n) {
//        return 1 - pow(1 - p, n);
//    }
//};
//
//int main() {
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    srand(time(0));
//
//
//    return 0;
//}


//#include<iostream>
//#include<Windows.h>
//#include<process.h>
//using namespace std;
//
//class ShootAir {
//private:
//    int p;
//
//public:
//
//    bool shoot_plane(int p, int n) {
//        for (int i = 0; i < n; i++) {
//            double res = double(rand());
//            if (res < p)
//                return 1;
//        }
//        return 0;
//    }
//
//    double estimatated(int n) {
//        return 1 - pow(1 - p, n);
//    }
//};
//
//int main() {
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    srand(time(0));
//
//
//    return 0;
//}