
//#include<iostream>
//#include<Windows.h>
//#include<process.h>
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
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
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



 