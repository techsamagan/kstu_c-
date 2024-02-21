

//#include <iostream>
//#include <string>
//#include <iomanip>
//
//using namespace std;
//
//class Employee
//{
//private:
//    string name;
//    string position;
//    double salary;
//
//public:
//    
//    Employee() : name(""), position(""), salary(0.0) {}
//    Employee(string _name, string _position, double _salary) : name(_name), position(_position), salary(_salary) {}
//
//   
//    ~Employee() {}
//
//   
//    double calculateAnnualSalary()
//    {
//        return salary * 12;
//    }
//    string getname() { return name; }
//    void displayInfo()
//    {
//        cout << "Имя: " << name << endl;
//        cout << "Должность: " << position << endl;
//        cout << "Месячная зарплата: $" << fixed << setprecision(2) << salary << endl;
//    }
//};
//
//class Manager : public Employee
//{
//private:
//    double annual_bonus;
//    string company_car;
//    int stock_options;
//
//public:
//    
//    Manager() : Employee(), annual_bonus(0.0), company_car(""), stock_options(0) {}
//    Manager(string _name, string _position, double _salary, double _bonus, string _car, int _options)
//        : Employee(_name, _position, _salary), annual_bonus(_bonus), company_car(_car), stock_options(_options) {}
//
//    
//    ~Manager() {}
//
//    
//    void displayInfo()
//    {
//        Employee::displayInfo(); 
//
//        cout << "Годовой бонус: $" << fixed << setprecision(2) << annual_bonus << endl;
//        cout << "Машина компании: " << company_car << endl;
//        cout << "Опции на акции: " << stock_options << endl;
//    }
//    
//    double calculateAnnualSalary()
//    {
//      
//        return Employee::calculateAnnualSalary() + annual_bonus;
//    }
//};
//
//int main()
//{
//    setlocale(LC_ALL, "rus");
//    int choice;
//    Employee* employees = nullptr;
//    Manager* managers = nullptr;
//    int employeeCount = 0;
//    int managerCount = 0;
//
//    while (true)
//    {
//        cout << "Меню" << endl;
//        cout << "1. Добавить сотрудника" << endl;
//        cout << "2. Добавить менеджера" << endl;
//        cout << "3. Просмотреть информацию о сотрудниках" << endl;
//        cout << "4. Рассчитать годовую зарплату" << endl;
//        cout << "5. Выход" << endl;
//        cout << "Выберите опцию:" << endl;
//
//        cin >> choice;
//
//        switch (choice)
//        {
//        case 1:
//        {
//            string name, position;
//            double salary;
//
//            cout << "Введите имя сотрудника: ";
//            cin >> name;
//            cout << "Введите должность сотрудника: ";
//            cin >> position;
//            cout << "Введите месячную зарплату сотрудника: $";
//            cin >> salary;
//
//            
//            Employee* temp = new Employee[employeeCount + 1];
//            for (int i = 0; i < employeeCount; ++i)
//                temp[i] = employees[i];
//            temp[employeeCount++] = Employee(name, position, salary);
//
//            delete[] employees;
//            employees = temp;
//
//            cout << "Сотрудник добавлен." << endl;
//            break;
//        }
//
//        case 2:
//        {
//            string name, position, company_car;
//            double salary, annual_bonus;
//            int stock_options;
//
//            cout << "Введите имя менеджера: ";
//            cin >> name;
//            cout << "Введите должность менеджера: ";
//            cin >> position;
//            cout << "Введите месячную зарплату менеджера: $";
//            cin >> salary;
//            cout << "Введите годовой бонус менеджера: $";
//            cin >> annual_bonus;
//            cout << "Введите машину компании менеджера: ";
//            cin >> company_car;
//            cout << "Введите количество опций на акции менеджера: ";
//            cin >> stock_options;
//
//            
//            Manager* temp = new Manager[managerCount + 1];
//            for (int i = 0; i < managerCount; ++i)
//                temp[i] = managers[i];
//            temp[managerCount++] = Manager(name, position, salary, annual_bonus, company_car, stock_options);
//
//            delete[] managers;
//            managers = temp;
//
//            cout << "Менеджер добавлен." << endl;
//            break;
//        }
//
//        case 3:
//        {
//            cout << "Информация о сотрудниках:" << endl;
//            for (int i = 0; i < employeeCount; ++i)
//            {
//                employees[i].displayInfo();
//                cout << "------------------------" << endl;
//            }
//
//            cout << "Информация о менеджерах:" << endl;
//            for (int i = 0; i < managerCount; ++i)
//            {
//                managers[i].displayInfo();
//                cout << "------------------------" << endl;
//            }
//            break;
//        }
//
//        case 4:
//        {
//            
//            cout << "Годовая зарплата каждого сотрудника:" << endl;
//            for (int i = 0; i < employeeCount; ++i)
//            {
//                cout << employees[i].getname() << ":  " << employees[i].calculateAnnualSalary() << endl;
//            }
//
//            cout << "Годовая зарплата каждого менеджера (включая бонус):" << endl;
//            for (int i = 0; i < managerCount; ++i)
//            {
//                cout << managers[i].getname()<<":  " << managers[i].calculateAnnualSalary() << endl;
//            }
//            break;
//        }
//
//        case 5:
//           
//            delete[] employees;
//            delete[] managers;
//            return 0;
//
//        default:
//            cout << "Неверный выбор. Пожалуйста, попробуйте снова." << endl;
//            break;
//        }
//    }
//
//    return 0;
//}





//#include <iostream>
//#include <string>
//#include <iomanip>
//
//using namespace std;
//
//const int MAX_DISPLAYS = 10;
//const int MAX_MOTHERBOARDS = 10;
//const int MAX_COMPUTERS = 10;
//
//class Display
//{
//private:
//    long colors;
//    int x_resolution;
//    int y_resolution;
//
//public:
//    Display() : colors(0), x_resolution(0), y_resolution(0) {}
//    Display(long c, int x, int y) : colors(c), x_resolution(x), y_resolution(y) {}
//
//    void getInf()
//    {
//        cout << colors << setw(20) << x_resolution << setw(20) << y_resolution << endl;
//    }
//};
//
//class MotherBoard
//{
//private:
//    int processor;
//    int speed;
//    int ram;
//
//public:
//    MotherBoard() : processor(0), speed(0), ram(0) {}
//    MotherBoard(int p, int s, int r) : processor(p), speed(s), ram(r) {}
//
//    void getInf()
//    {
//        cout << processor << setw(20) << speed << setw(20) << ram << endl;
//    }
//};
//
//class Computer : public Display, public MotherBoard
//{
//private:
//    string mark;
//    int hard_disk;
//
//public:
//    Computer():Display(), MotherBoard(), mark(""), hard_disk(0) {}
//    Computer(const Display& d, const MotherBoard& mb, const string& m, int h)
//        : Display(d), MotherBoard(mb), mark(m), hard_disk(h) {}
//
//    void Show()
//    {
//        cout << "\nИнформация о компьютере:" << endl;
//        cout << "Марка: " << mark << setw(20) << "Жесткий диск: " << hard_disk << endl;
//
//        
//        cout << "Информация о дисплее:" << endl;
//        cout << "colors" << setw(20) << "x_resolution" << setw(20) << "y_resolution" << endl;
//        Display::getInf();
//
//        cout << endl;
//        cout << endl;
//
//        cout << "\nИнформация о материнской плате:" << endl;
//        cout << "processor" << setw(20) << "speed" << setw(20) << "ram" << endl;
//        MotherBoard::getInf();
//    }
//
//    string getMark()
//    {
//        return mark;
//    }
//};
//
//int main()
//{
//    setlocale(LC_ALL, "rus");
//
//    Display displays[MAX_DISPLAYS];
//    MotherBoard motherboards[MAX_MOTHERBOARDS];
//    Computer computers[MAX_COMPUTERS];
//
//    int displayCount = 0;
//    int motherboardCount = 0;
//    int computerCount = 0;
//
//    int choice;
//
//    while (true)
//    {
//        cout << "Меню" << endl;
//        cout << "1. Добавить компьютер" << endl;
//        cout << "2. Вывести компьютер" << endl;
//        cout << "3. Добавить Display" << endl;
//        cout << "4. Добавить MotherBoard" << endl;
//        cout << "0. Выход" << endl;
//        cout << "Выберите опцию:" << endl;
//        cin >> choice;
//
//        switch (choice)
//        {
//        case 1:
//        {
//            if (displayCount == 0 || motherboardCount == 0)
//            {
//                cout << "Добавьте хотя бы один Display и одну MotherBoard перед добавлением компьютера." << endl;
//                break;
//            }
//
//            int displayChoice, motherboardChoice;
//            string mark;
//            int hardDisk;
//
//            cout << "Выберите дисплей для компьютера:" << endl;
//            for (int i = 0; i < displayCount; ++i)
//            {
//                cout << i + 1 << ". ";
//                displays[i].getInf();
//            }
//            cin >> displayChoice;
//
//            cout << "Выберите материнскую плату для компьютера:" << endl;
//            for (int i = 0; i < motherboardCount; ++i)
//            {
//                cout << i + 1 << ". ";
//                motherboards[i].getInf();
//            }
//            cin >> motherboardChoice;
//
//            cout << "Введите марку компьютера: ";
//            cin >> mark;
//
//            cout << "Введите размер жесткого диска: ";
//            cin >> hardDisk;
//
//            computers[computerCount] = Computer(displays[displayChoice - 1], motherboards[motherboardChoice - 1], mark, hardDisk);
//            computerCount++;
//
//            cout << "Компьютер добавлен." << endl;
//        }
//        break;
//
//        case 2:
//        {
//            if (computerCount > 0)
//            {
//                for (int i = 0; i < computerCount; ++i)
//                {
//                    computers[i].Show();
//                }
//            }
//            else
//            {
//                cout << "Нет информации о компьютерах." << endl;
//            }
//        }
//        break;
//
//        case 3:
//        {
//            if (displayCount < MAX_DISPLAYS)
//            {
//                long c;
//                int x, y;
//
//
//                cout << "Введите информацию о дисплее:" << endl;
//                cout << "Цвета: ";
//                cin >> c;
//                cout << "Разрешение по X: ";
//                cin >> x;
//                cout << "Разрешение по Y: ";
//                cin >> y;
//
//                displays[displayCount] = Display(c, x, y);
//                displayCount++;
//
//                cout << "Дисплей добавлен." << endl;
//            }
//            else
//            {
//                cout << "Достигнуто максимальное количество дисплеев." << endl;
//            }
//        }
//        break;
//
//        case 4:
//        {
//            if (motherboardCount < MAX_MOTHERBOARDS)
//            {
//                int p, s, r;
//
//                cout << "Введите информацию о материнской плате:" << endl;
//                cout << "Процессор: ";
//                cin >> p;
//                cout << "Скорость: ";
//                cin >> s;
//                cout << "RAM: ";
//                cin >> r;
//
//                motherboards[motherboardCount] = MotherBoard(p, s, r);
//                motherboardCount++;
//
//                cout << "Материнская плата добавлена." << endl;
//            }
//            else
//            {
//                cout << "Достигнуто максимальное количество материнских плат." << endl;
//            }
//        }
//        break;
//
//        case 0:
//            exit(0);
//
//        default:
//            cout << "Неверная опция. Пожалуйста, выберите существующую опцию." << endl;
//            break;
//        }
//    }
//
//    return 0;
//}





//
//#include <iostream>
//#include <iomanip>
//#include <cstring>
//
//using namespace std;
//
//class Display
//{
//private:
//    char type[32];
//    long colors;
//    int x_resolution;
//    int y_resolution;
//
//public:
//    Display() = default;
//
//    void getInput()
//    {
//        cout << "Введите информацию о дисплее:" << endl;
//        cout << "Тип: ";
//        cin.ignore(); // consume newline
//        cin.getline(type, sizeof(type));
//        cout << "Цвета: ";
//        cin >> colors;
//        cout << "Разрешение (X): ";
//        cin >> x_resolution;
//        cout << "Разрешение (Y): ";
//        cin >> y_resolution;
//        cin.ignore(); // consume newline
//    }
//
//    void displayInfo() const
//    {
//        cout << "Информация о дисплее:" << endl;
//        cout << "Тип: " << type << setw(20)
//            << "Цвета: " << colors << setw(20)
//            << "Разрешение (X): " << x_resolution << setw(20)
//            << "Разрешение (Y): " << y_resolution << endl;
//    }
//};
//
//class MotherBoard
//{
//private:
//    int processor;
//    int speed;
//    int RAM;
//
//public:
//    MotherBoard() = default;
//
//    void getInput()
//    {
//        cout << "Введите информацию о материнской плате:" << endl;
//        cout << "Процессор: ";
//        cin >> processor;
//        cout << "Скорость: ";
//        cin >> speed;
//        cout << "RAM: ";
//        cin >> RAM;
//    }
//
//    void displayInfo() const
//    {
//        cout << "Информация о материнской плате:" << endl;
//        cout << "Процессор: " << processor << setw(20)
//            << "Скорость: " << speed << setw(20)
//            << "RAM: " << RAM << endl;
//    }
//};
//
//class Computer : public Display, public MotherBoard
//{
//private:
//    char name[64];
//    int hard_disk;
//
//public:
//    Computer() = default;
//
//    void getInput()
//    {
//        cout << "Введите информацию о компьютере:" << endl;
//        cout << "Марка: ";
//        cin.ignore(); 
//        cin.getline(name, sizeof(name));
//        cout << "Размер жесткого диска: ";
//        cin >> hard_disk;
//
//        Display::getInput();
//        MotherBoard::getInput();
//    }
//
//    void displayInfo() const
//    {
//        cout << "Информация о компьютере:" << endl;
//        cout << "Марка: " << name << setw(20)
//            << "Размер жесткого диска: " << hard_disk << endl;
//
//        Display::displayInfo();
//        MotherBoard::displayInfo();
//    }
//};
//
//int main()
//{
//    setlocale(LC_ALL, "");
//    int choice;
//    Display display;
//    MotherBoard motherboard;
//    Computer computer;
//
//    while (true)
//    {
//        cout << "Меню" << endl;
//        cout << "1. Добавить Display" << endl;
//        cout << "2. Добавить MotherBoard" << endl;
//        cout << "3. Добавить Computer" << endl;
//        cout << "4. Вывод Display" << endl;
//        cout << "5. Вывод MotherBoard" << endl;
//        cout << "6. Вывод Computer" << endl;
//        cout << "7. Выход" << endl;
//        cout << "Выберите опцию:" << endl;
//        cin >> choice;
//
//        switch (choice)
//        {
//        case 1:
//            display.getInput();
//            break;
//
//        case 2:
//            motherboard.getInput();
//            break;
//
//        case 3:
//            computer.getInput();
//            break;
//
//        case 4:
//            display.displayInfo();
//            break;
//
//        case 5:
//            motherboard.displayInfo();
//            break;
//
//        case 6:
//            computer.displayInfo();
//            break;
//
//        case 7:
//            exit(0);
//
//        default:
//            cout << "Неверная опция. Пожалуйста, выберите существующую опцию." << endl;
//            break;
//        }
//    }
//
//    return 0;
//}
//
