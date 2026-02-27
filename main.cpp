#include "lab_3.h"
#include <iostream>
#include <clocale>

int main() {
  setlocale(LC_ALL, "Russian");

  // 1. Работа с именами
  std::cout << "1. Примеры имен:\n";


  Name name1("Клеопатра");
  Name name2("Пушкин", "Александр", "Сергеевич");
  Name name3("Маяковский", "Владимир");

  std::cout << "Имя 1: ";
  name1.Print();
  std::cout << "Имя 2: ";
  name2.Print();
  std::cout << "Имя 3: ";
  name3.Print();
  std::cout << "\n";

  // 2. Работа с временем
  std::cout << "2. Примеры времени:\n";

  Time time1(10);
  Time time2(10000);
  Time time3(100000);

  std::cout << "10 секунд = ";
  time1.Print();
  std::cout << "10000 секунд = ";
  time2.Print();
  std::cout << "100000 секунд = ";
  time3.Print();
  std::cout << "\n";

  // 3. Сотрудники и отделы
  std::cout << "3. Сотрудники в отделе IT:\n";

  // Создаем отдел IT
  Department it("IT");

  // Создаем сотрудников
  Employee petrov(Name("Петров", "Иван", "Иванович"), &it);
  Employee kozlov(Name("Козлов", "Петр", "Сергеевич"), &it);
  Employee sidorov(Name("Сидоров", "Алексей", "Васильевич"), &it);

  // Назначаем начальника
  it.Setmanager(&kozlov);

  // Выводим информацию о сотрудниках
  petrov.Print();
  kozlov.Print();
  sidorov.Print();
  std::cout << "\n";

  // 4. Список всех сотрудников отдела
  std::cout << "4. Список всех сотрудников отдела:\n";
  std::cout << it.getEmployeeList() << "\n";

  // 5. Создание времени разными способами
  std::cout << "5. Создание времени:\n";

  // Создаем из секунд
  Time fromSeconds(10000);
  std::cout << "Из 10000 секунд: ";
  fromSeconds.Print();

  // Создаем из часов, минут, секунд
  Time fromComponents(2, 3, 5);
  std::cout << "Из 2 часов, 3 минут, 5 секунд: ";
  fromComponents.Print();
  std::cout << "\n";

  // 6. Анализ времени
  std::cout << "6. Анализ времени:\n";

  Time analyze1(34056);
  Time analyze2(4532);

  std::cout << "Время " << analyze1.toString() << ":\n";
  std::cout << "  - Часов: " << analyze1.getHours() << "\n";
  std::cout << "  - Минут с начала часа: " << analyze1.getMinutes() << "\n";
  std::cout << "  - Секунд с начала минуты: " << analyze1.getSeconds() << "\n\n";

  std::cout << "Время " << analyze2.toString() << ":\n";
  std::cout << "  - Часов: " << analyze2.getHours() << "\n";
  std::cout << "  - Минут с начала часа: " << analyze2.getMinutes() << "\n";
  std::cout << "  - Секунд с начала минуты: " << analyze2.getSeconds() << "\n";

  return 0;
}