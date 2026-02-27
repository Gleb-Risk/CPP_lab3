#include <string>
#include <vector>
#include <sstream>
#include <iomanip>

class Name {
private:
  std::string surname;
  std::string firstName;
  std::string patronymic;

public:
  // Конструкторы
  Name();
  Name(const std::string& first);
  Name(const std::string& sur, const std::string& first);
  Name(const std::string& sur, const std::string& first, const std::string& pat);

  // Методы
  std::string toString() const;
  void Print() const;
};

class Time {
private:
  int totalSeconds;

public:
  // Конструкторы
  Time();
  Time(int seconds);
  Time(int hours, int minutes, int seconds);

  // Методы
  int getHours() const;
  int getMinutes() const;
  int getSeconds() const;
  std::string toString() const;
  void Print() const;

private:
  void Normalize();
};

class Employee;

class Department {
private:
  std::string name;
  std::vector<Employee*> employees;
  Employee* manager;

public:
  // Конструкторы
  Department();
  Department(const std::string& deptName);

  // Методы
  std::string getName() const;
  Employee* getManager() const;
  void Setmanager(Employee* mgr);
  void Addemployee(Employee* emp);
  std::string getEmployeeList() const;

  friend class Employee;
};

class Employee {
private:
  Name name;
  Department* department;

public:
  // Конструкторы
  Employee();
  Employee(const Name& empName);
  Employee(const Name& empName, Department* dept);

  // Методы
  Name getName() const;
  Department* getDepartment() const;
  void Setdepartment(Department* dept);
  std::string toString() const;
  void Print() const;
};