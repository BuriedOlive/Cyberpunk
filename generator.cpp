//#include <fstream>
//#include <cstring>
//using namespace std;
//
//#pragma pack(1)
//struct EmployeeData {
//    int    id;
//    char   name[32];
//    int    department;
//    int    clearance;
//    double salary;
//    int    is_flagged;
//};
//#pragma pack()
//
//int main() {
//    EmployeeData records[] = {
//        {1, "Johnny Silverhand", 0, 5, 120000.0, 0},
//        {2, "Alt Cunningham",    3, 4, 95000.0, 0},
//        {3, "Adam Smasher",      1, 5, 150000.0, 0},
//        {4, "Yorinobu Arasaka",  2, 4, 110000.0, 0},
//        {5, "Saburo Arasaka",    2, 5, 200000.0, 0},
//        {6, "Panam Palmer",      0, 2, 45000.0, 0}
//    };
//
//    ofstream file("database.bin", ios::binary);
//
//    file.write("CYBR", 4);
//
//    int count = 6;
//    file.write((char*)&count, 4);
//
//    file.write((char*)records, sizeof(records));
//
//    file.close();
//
//    return 0;
//}