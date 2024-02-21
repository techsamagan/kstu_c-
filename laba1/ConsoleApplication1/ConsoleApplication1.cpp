//
//
//
//
//#include <iostream>
//using namespace std;
//
//class Money {
//private:
//    int first;
//    int second;
//
//public:
//    bool Init(int nominal, int count) {
//        if (nominal != 0 && nominal != 1 && nominal != 3 && nominal != 5 && nominal != 10 &&
//            nominal != 20 && nominal != 50 && nominal != 100 &&
//            nominal != 500 && nominal != 1000 && nominal != 5000) {
//            cerr << "Некорректный номинал купюры: " << nominal << endl;
//            return false;
//        }
//
//        if (count < 0) {
//            cerr << "Количество купюр должно быть положительным: " << count << endl;
//            return false;
//        }
//
//        first = nominal;
//        second = count;
//        return true;
//    }
//
//    int summa() const {
//        return first * second;
//    }
//
//    void Read() {
//        bool validInput = false;
//
//        while (!validInput) {
//            cout << "Введите номинал купюры: ";
//            cin >> first;
//
//            cout << "Введите количество купюр данного достоинства: ";
//            cin >> second;
//
//            validInput = Init(first, second);
//
//            if (!validInput) {
//                cout << "Некорректные данные. Пожалуйста, введите данные заново." << endl;
//            }
//        }
//    }
//
//     void Display() const {	
//        cout << "Номинал купюры: " << first << endl;
//        cout << "Количество купюр данного достоинства: " << second << endl;
//        cout << "Денежная сумма: " << summa() << endl;
//       
//    }
//};
//
//int main() {
//    setlocale(LC_ALL, "rus");
//    const int MAX_CURRENCIES = 5;
//    Money moneyList[MAX_CURRENCIES];
//    int currentCurrencyCount = 0;
//    int choice;
//    int totalSum = 0; // Initialize the total sum to 0.
//
//    while (true) {
//        cout << "Меню:" << endl;
//        cout << "1. Добавить купюру" << endl;
//        cout << "2. Просмотреть результат" << endl;
//        cout << "3. Вывести общую сумму" << endl; // Added option for total sum.
//        cout << "4. Выйти" << endl;
//        cout << "Выберите опцию: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1: {
//            if (currentCurrencyCount < MAX_CURRENCIES) {
//                moneyList[currentCurrencyCount].Read();
//                totalSum += moneyList[currentCurrencyCount].summa(); // Update the total sum.
//                currentCurrencyCount++;
//                cout << "Купюра добавлена." << endl;
//            }
//            else {
//                cout << "Достигнуто максимальное количество купюр." << endl;
//            }
//            break;
//        }
//        case 2: {
//            if (currentCurrencyCount == 0) {
//                cout << "Список купюр пуст." << endl;
//            }
//            else {
//                cout << "Список купюр и их суммы:" << endl;
//                for (int i = 0; i < currentCurrencyCount; i++) {
//                    moneyList[i].Display();
//                }
//            }
//            break;
//        }
//        case 3: {
//            cout << "Общая сумма: " << totalSum << endl; // Display the total sum.
//            break;
//        }
//        case 4: {
//            return 0;
//        }
//        default: {
//            cout << "Некорректный выбор. Пожалуйста, выберите снова." << endl;
//        }
//        }
//    }
//
//    return 0;
//}










#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Airlines {
public:
    string flightNumber;
    string departureCity;
    string destinationCity;
    string departureTime;
    string arrivalTime;
    string checkInCounter;

    void Display() const {
        cout << setw(10) << left << flightNumber << setw(20) << departureTime << setw(15) << arrivalTime << setw(25) <<
            departureCity << setw(20) << destinationCity << setw(25) << checkInCounter << endl;
    }
    void AddFlight(Airlines flights[], int& numFlights, const int MAX_FLIGHTS) {
        if (numFlights < MAX_FLIGHTS) {
            cout << "Введите информацию о рейсе:" << endl;
            Airlines newFlight;
            cout << "Номер рейса: ";
            cin >> newFlight.flightNumber;
            cout << "Пункт отправления: ";
            cin >> newFlight.departureCity;
            cout << "Пункт назначения: ";
            cin >> newFlight.destinationCity;
            cout << "Время отправления (чч:мм): ";
            cin >> newFlight.departureTime;
            cout << "Время прибытия (чч:мм): ";
            cin >> newFlight.arrivalTime;
            cout << "Номер стойки для регистрации: ";
            cin >> newFlight.checkInCounter;

            flights[numFlights] = newFlight;
            numFlights++;
            cout << "Рейс добавлен." << endl;
        }
        else {
            cout << "Достигнуто максимальное количество рейсов (" << MAX_FLIGHTS << ")." << endl;
        }
    }
};
bool SearchFlight(const Airlines& flight, const string& departCity, const string& destCity);
void SortByDestination(Airlines flights[], int numFlights);




int main() {
    setlocale(LC_ALL, "rus");
    const int MAX_FLIGHTS = 10;
    Airlines flights[MAX_FLIGHTS];
    int numFlights = 0;

    while (true) {
        cout << "Меню:" << endl;
        cout << "1. Добавить рейс" << endl;
        cout << "2. Вывести список рейсов" << endl;
        cout << "3. Поиск рейсов" << endl;
        cout << "4. Выйти" << endl;
        cout << "5. Сортировка по пункту назначения" << endl;
        cout << "Выберите опцию: ";
        int choice;
        cin >> choice;

        switch (choice) {
        case 1: {
            for (int i = 0; i < 10; i++)
            {
                flights[i].AddFlight(flights, numFlights, MAX_FLIGHTS);
            }
            break;
        }
        case 2: {
            cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
            cout << setw(10) << left << "№ Рейса" << setw(20) << "Отправление" << setw(15) << "Прибытие" << setw(25) << "Пункт отправления" << setw(25) << "Пункт назначения" << setw(15) << "Стойка регистрации" << endl;
            cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
            for (int i = 0; i < numFlights; i++) {
                flights[i].Display();
            }
            cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
            break;
        }
        case 3: {
            string searchDeparture, searchDestination;

            cout << "Введите пункт отправления для поиска: ";
            cin >> searchDeparture;
            cout << "Введите пункт назначения для поиска: ";
            cin >> searchDestination;

            bool found = false;
            cout << "Результаты поиска:" << endl;
            for (int i = 0; i < numFlights; i++) {
                if (SearchFlight(flights[i], searchDeparture, searchDestination)) {
                    flights[i].Display();
                    cout << "------------------------------------------------------------------------------------------------------" << endl;
                    found = true;
                }
            }

            if (!found) {
                cout << "Рейсов из " << searchDeparture << " в " << searchDestination << " не найдено." << endl;
            }
            break;
        }
        case 4: {
            exit(0);
        }
        case 5: {
            SortByDestination(flights, numFlights);
            cout << "Рейсы отсортированы по пункту назначения." << endl;
            break;
        }
        default: {
            cout << "Некорректный выбор. Пожалуйста, выберите снова." << endl;
        }
        }
    }

    return 0;
}



bool SearchFlight(const Airlines& flight, const string& departCity, const string& destCity) {
    return (flight.departureCity == departCity && flight.destinationCity == destCity);
}

void SortByDestination(Airlines flights[], int numFlights) {
    for (int i = 0; i < numFlights - 1; i++) {
        for (int j = 0; j < numFlights - i - 1; j++) {
            if (flights[j].destinationCity > flights[j + 1].destinationCity) {

                Airlines temp = flights[j];
                flights[j] = flights[j + 1];
                flights[j + 1] = temp;
            }
        }
    }
}








//
//
//#include <iostream>
//#include <string>
//#include <iomanip>
//
//using namespace std;
//
//class Student
//{
//public:
//	string lastName;
//	string firstName;
//	string group;
//	string dateOfBirth;
//	string phoneNumber;
//	int tutionFee;
//
//	void Display()
//	{
//		cout << lastName << setw(20) << firstName << setw(20) << group << setw(20) << dateOfBirth << setw(20) << phoneNumber << setw(20) << tutionFee << endl;
//		cout << "-------------------------------------------------------------------------------------------------------------------" << endl;
//	}
//};
//
//void AddStudent(Student* newstudents, int size);
//void Deletestudent(Student* newstudents, int size);
//void Sortstudent(Student* newstudent, int size);
//void Searchstudent(Student* newstudent, int size);
//
//int main()
//{
//
//	setlocale(LC_ALL, "rus");
//	int choice, search_choice, sort_choice, size;
//	Student* newstudents = nullptr;
//	while (true)
//	{
//	Menu:
//		cout << "Меню" << endl;
//		cout << "1. Добавить студента" << endl;
//		cout << "2. Вывод студентов" << endl;
//		cout << "3. Поиск студента по определенным признакам" << endl;
//		cout << "4. Сортировка студентов по разным полям" << endl;
//		cout << "5. Удаление сдудентов" << endl;
//		cout << "6. Выйти" << endl;
//		cout << "Выберите опцию:" << endl;
//		cout << "" << endl;
//		cin >> choice;
//		switch (choice)
//		{
//		case 1:
//			cout << "Сколько количесвто студентов вы хотите добавить: ";
//			cin >> size;
//			newstudents = new Student[size];
//			AddStudent(newstudents, size);
//			break;
//		case 2:
//			cout << "Фамилия" << setw(20) << "Имя" << setw(20) << "Группа" << setw(20) << "Дата рождения" << setw(20) << "Номер телефона" << setw(20) << "Контракт" << endl;
//			cout << "-------------------------------------------------------------------------------------------------------------------" << endl;
//			for (int i = 0; i < size; i++)
//			{
//				newstudents[i].Display();
//			}
//			break;
//		case 3:
//			Searchstudent(newstudents, size);
//			break;
//		case 4:
//
//			Sortstudent(newstudents, size);
//			break;
//
//		case 5:
//			Deletestudent(newstudents, size);
//			break;
//
//		case 6:
//			exit(0);
//			break;
//		default:
//			break;
//		}
//
//	}
//
//
//	return 0;
//}
//
//void AddStudent(Student* newstudents, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		cout << "Введите фамилию: "; cin >> newstudents[i].lastName;
//		cout << "Введите имя: "; cin >> newstudents[i].firstName;
//		cout << "Введите группу: "; cin >> newstudents[i].group;
//		cout << "Введите дату рождения: "; cin >> newstudents[i].dateOfBirth;
//		cout << "Введите контракта: "; cin >> newstudents[i].tutionFee;
//
//	}
//}
//
//
//void Deletestudent(Student* newstudents, int size)
//{
//	cout << "Кого вы хотите удалить?" << endl;
//	string delLastName;
//
//	cout << "Введите фамилию студента который вы хотите удалить: ";
//	cin >> delLastName;
//
//
//	for (int i = 0; i < size; i++) {
//		if (newstudents[i].lastName == delLastName) {
//
//			for (int j = i; j < size - 1; j++) {
//				newstudents[j] = newstudents[j + 1];
//			}
//			size--;
//			cout << "Студент с фамилией " << delLastName << " удален." << endl;
//
//		}
//	}
//	cout << "Студент с фамилией " << delLastName << " не найден." << endl;
//}
//
//
//void Searchstudent(Student* newstudents, int size) {
//	int searchChoice;
//	cout << "По какому признаку вы хотите выполнять поиск?" << endl;
//	cout << "1. По фамилии" << endl;
//	cout << "2. По имени" << endl;
//	cout << "3. По группе" << endl;
//	cout << "Выберите опцию: ";
//	cin >> searchChoice;
//
//	string searchTerm;
//	cout << "Введите значение для поиска: ";
//	cin >> searchTerm;
//
//	cout << "Результаты поиска:" << endl;
//	cout << "Фамилия" << setw(20) << "Имя" << setw(20) << "Группа" << setw(20) << "Дата рождения" << setw(20) << "Номер телефона" << setw(20) << "Контракт" << endl;
//
//	for (int i = 0; i < size; i++) {
//		switch (searchChoice) {
//		case 1:
//			if (newstudents[i].lastName == searchTerm) {
//				newstudents[i].Display();
//			}
//			break;
//		case 2:
//			if (newstudents[i].firstName == searchTerm) {
//				newstudents[i].Display();
//			}
//			break;
//		case 3:
//			if (newstudents[i].group == searchTerm) {
//				newstudents[i].Display();
//			}
//			break;
//		default:
//			cout << "Неверный выбор для поиска." << endl;
//
//		}
//	}
//}
//
//void Sortstudent(Student* newstudents, int size)
//{
//	int sortChoice;
//	cout << "По какому признаку вы хотите сортировать?" << endl;
//	cout << "1. По фамилии" << endl;
//	cout << "2. По имени" << endl;
//	cout << "3. По группе" << endl;
//	cout << "Выберите опцию: ";
//	cin >> sortChoice;
//
//	for (int i = 0; i < size - 1; i++) {
//		for (int j = 0; j < size - i - 1; j++) {
//			switch (sortChoice) {
//			case 1:
//				if (newstudents[j].lastName > newstudents[j + 1].lastName) {
//					swap(newstudents[j], newstudents[j + 1]);
//				}
//				break;
//			case 2:
//				if (newstudents[j].firstName > newstudents[j + 1].firstName) {
//					swap(newstudents[j], newstudents[j + 1]);
//				}
//				break;
//			case 3:
//				if (newstudents[j].group > newstudents[j + 1].group) {
//					swap(newstudents[j], newstudents[j + 1]);
//				}
//				break;
//			default:
//				cout << "Неверный выбор для сортировки." << endl;
//
//			}
//		}
//	}
//
//	cout << "Студенты отсортированы по выбранному признаку." << endl;
//}



//
//#include <iostream>
//#include <string>
//#include <iomanip>
//
//using namespace std;
//
//class Student {
//public:
//    string lastName;
//    string firstName;
//    string group;
//    string dateOfBirth;
//    string phoneNumber;
//    int tutionFee;
//
//    void Display() {
//        cout << lastName << setw(20) << firstName << setw(20) << group << setw(20) << dateOfBirth << setw(20) << phoneNumber << setw(20) << tutionFee << endl;
//        cout << "-------------------------------------------------------------------------------------------------------------------" << endl;
//    }
//
//    void AddStudent() {
//        cout << "Введите фамилию: "; cin >> lastName;
//        cout << "Введите имя: "; cin >> firstName;
//        cout << "Введите группу: "; cin >> group;
//        cout << "Введите дату рождения: "; cin >> dateOfBirth;
//        cout << "Введите контракт: "; cin >> tutionFee;
//    }
//};
//
//void DeleteStudent(Student* students, int& size) {
//    cout << "Кого вы хотите удалить?" << endl;
//    string delLastName;
//
//    cout << "Введите фамилию студента, которого вы хотите удалить: ";
//    cin >> delLastName;
//
//    for (int i = 0; i < size; i++) {
//        if (students[i].lastName == delLastName) {
//            for (int j = i; j < size - 1; j++) {
//                students[j] = students[j + 1];
//            }
//            size--;
//            cout << "Студент с фамилией " << delLastName << " удален." << endl;
//            return; // Exit the function after deleting the student
//        }
//    }
//    cout << "Студент с фамилией " << delLastName << " не найден." << endl;
//}
//
//void SortStudents(Student* students, int size) {
//    int sortChoice;
//    cout << "По какому признаку вы хотите сортировать?" << endl;
//    cout << "1. По фамилии" << endl;
//    cout << "2. По имени" << endl;
//    cout << "3. По группе" << endl;
//    cout << "Выберите опцию: ";
//    cin >> sortChoice;
//
//    for (int i = 0; i < size - 1; i++) {
//        for (int j = 0; j < size - i - 1; j++) {
//            switch (sortChoice) {
//            case 1:
//                if (students[j].lastName > students[j + 1].lastName) {
//                    swap(students[j], students[j + 1]);
//                }
//                break;
//            case 2:
//                if (students[j].firstName > students[j + 1].firstName) {
//                    swap(students[j], students[j + 1]);
//                }
//                break;
//            case 3:
//                if (students[j].group > students[j + 1].group) {
//                    swap(students[j], students[j + 1]);
//                }
//                break;
//            default:
//                cout << "Неверный выбор для сортировки." << endl;
//            }
//        }
//    }
//
//    cout << "Студенты отсортированы по выбранному признаку." << endl;
//}
//
//void SearchStudent(Student* students, int size) {
//    int searchChoice;
//    cout << "По какому признаку вы хотите выполнять поиск?" << endl;
//    cout << "1. По фамилии" << endl;
//    cout << "2. По имени" << endl;
//    cout << "3. По группе" << endl;
//    cout << "Выберите опцию: ";
//    cin >> searchChoice;
//
//    string searchTerm;
//    cout << "Введите значение для поиска: ";
//    cin >> searchTerm;
//
//    cout << "Результаты поиска:" << endl;
//    cout << "Фамилия" << setw(20) << "Имя" << setw(20) << "Группа" << setw(20) << "Дата рождения" << setw(20) << "Номер телефона" << setw(20) << "Контракт" << endl;
//
//    for (int i = 0; i < size; i++) {
//        switch (searchChoice) {
//        case 1:
//            if (students[i].lastName == searchTerm) {
//                students[i].Display();
//            }
//            break;
//        case 2:
//            if (students[i].firstName == searchTerm) {
//                students[i].Display();
//            }
//            break;
//        case 3:
//            if (students[i].group == searchTerm) {
//                students[i].Display();
//            }
//            break;
//        default:
//            cout << "Неверный выбор для поиска." << endl;
//        }
//    }
//}
//
//int main() {
//    setlocale(LC_ALL, "rus");
//    int choice, size = 0;
//    Student* students = nullptr;
//
//    while (true) {
//        cout << "Меню" << endl;
//        cout << "1. Добавить студента" << endl;
//        cout << "2. Вывод студентов" << endl;
//        cout << "3. Поиск студента по определенным признакам" << endl;
//        cout << "4. Сортировка студентов по разным полям" << endl;
//        cout << "5. Удаление студентов" << endl;
//        cout << "6. Выйти" << endl;
//        cout << "Выберите опцию: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1:
//            cout << "Сколько студентов вы хотите добавить: ";
//            cin >> size;
//            students = new Student[size];
//            for (int i = 0; i < size; i++) {
//                students[i].AddStudent();
//            }
//            break;
//        case 2:
//            cout << "Фамилия" << setw(20) << "Имя" << setw(20) << "Группа" << setw(20) << "Дата рождения" << setw(20) << "Номер телефона" << setw(20) << "Контракт" << endl;
//            cout << "-------------------------------------------------------------------------------------------------------------------" << endl;
//            for (int i = 0; i < size; i++) {
//                students[i].Display();
//            }
//            break;
//        case 3:
//            SearchStudent(students, size);
//            break;
//        case 4:
//            SortStudents(students, size);
//            break;
//        case 5:
//            DeleteStudent(students, size);
//            break;
//        case 6:
//            delete[] students;
//            exit(0);
//            break;
//        default:
//            cout << "Некорректный выбор." << endl;
//        }
//    }
//
//    return 0;
//}


