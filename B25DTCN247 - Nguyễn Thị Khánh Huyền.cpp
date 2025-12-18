#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

class Employee {
private:
    int id;
    string name;
    float salary;

public:
    
    Employee() : id(0), name(""), salary(0.0f) {}
    
    Employee(int id, string name, float salary) 
        : id(id), name(name), salary(salary) {}

    void input() {
        cin.ignore();
        cout << "Nhap ten nhan vien: ";
        getline(cin, name);
        cout << "Nhap luong: ";
        cin >> salary;
    }

    void printInfo() {
        cout << "ID: " << id << " - Ten: " << name 
             << " - Luong: " << fixed << setprecision(0) << salary << endl;
    }
    
    int getId() {
        return id;
    }
    

    void setSalary(float salary) {
        this->salary = salary;
    }
};


class EmployeeManager {
private:
    vector<Employee> list;
    int nextId;

public:
    EmployeeManager() : nextId(001) {}
    
    // Thêm m?i nhân viên
    void addEmployee() {
        cout << "\n===== THEM NHAN VIEN MOI =====" << endl;
        Employee emp(nextId, "", 0);
        emp.input();
        list.push_back(emp);
        cout << "Them nhan vien thanh cong voi ID: " << nextId << endl;
        nextId++;
    }
    

    void showAll() {
        cout << "\n===== DANH SACH NHAN VIEN =====" << endl;
        if (list.empty()) {
            cout << "Danh sach trong!" << endl;
            return;
        }
        for (int i = 0; i < list.size(); i++) {
            list[i].printInfo();
        }
    }
    
    void updateSalaryById() {
        cout << "\n===== CAP NHAT LUONG =====" << endl;
        int id;
        cout << "Nhap ma nhan vien can cap nhat: ";
        cin >> id;
        
        bool found = false;
        for (int i = 0; i < list.size(); i++) {
            if (list[i].getId() == id) {
                float newSalary;
                cout << "Nhap luong moi: ";
                cin >> newSalary;
                list[i].setSalary(newSalary);
                cout << "Cap nhat luong thanh cong!" << endl;
                found = true;
                break;
            }
        }
        
        if (!found) {
            cout << "Khong tim thay nhan vien voi ma: " << id << endl;
        }
    }
    
    void deleteById() {
        cout << "\n===== XOA NHAN VIEN =====" << endl;
        int id;
        cout << "Nhap ma nhan vien can xoa: ";
        cin >> id;
        
        bool found = false;
        for (int i = 0; i < list.size(); i++) {
            if (list[i].getId() == id) {
                list.erase(list.begin() + i);
                cout << "Xoa nhan vien thanh cong!" << endl;
                found = true;
                break;
            }
        }
        
        if (!found) {
            cout << "Khong tim thay nhan vien voi ma: " << id << endl;
        }
    }
    
    void menu() {
        int choice;
        do {
            cout << "\n----- MENU -----" << endl;
            cout << "1. Them nhan vien" << endl;
            cout << "2. Hien thi danh sach" << endl;
            cout << "3. Cap nhat luong" << endl;
            cout << "4. Xoa nhan vien" << endl;
            cout << "5. Thoat" << endl;
            cout << "----------------" << endl;
            cout << "Nhap lua chon: ";
            cin >> choice;
            
            switch (choice) {
                case 1:
                    addEmployee();
                    break;
                case 2:
                    showAll();
                    break;
                case 3:
                    updateSalaryById();
                    break;
                case 4:
                    deleteById();
                    break;
                case 5:
                    cout << "Cam on ban da su dung chuong trinh!" << endl;
                    break;
                default:
                    cout << "Lua chon khong hop le! Vui long chon lai." << endl;
            }
        } while (choice != 5);
    }
};

int main() {
    EmployeeManager manager;
    manager.menu();
    return 0;
}
