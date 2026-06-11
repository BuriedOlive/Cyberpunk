#ifndef DATABASE_H
#define DATABASE_H

#include <string>

#pragma pack(1)
struct EmployeeData {
    int    id;           // 4 bytes
    char   name[32];     // 32 bytes
    int    department;   // 4 bytes
    int    clearance;    // 4 bytes
    double salary;       // 8 bytes
    int    is_flagged;   // 4 bytes
};
#pragma pack()

class Employee {

public:
    Employee(const EmployeeData& data);

    int getId() const;
    std::string getName()const;
    int getDepartment()const;
    int getClearance()const;
    double getSalary()const;
    int isFlagged()const;

    void setFlagged(bool);
    std::string getDepartmentName();
    void print()const;
};

#endif