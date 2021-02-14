#include <iostream>
using std::string;

class  Employee
{
public:
    string Name; 
    string Company; 
    int Age;

    void IntroduceYourself() {
        std::cout << "Name - " << Name << stf::endl;
        std::cout << "Company - " << Company << stf::endl;
        std::cout << "Age - " << Age << stf::endl;

    } 

};

int main() {
    Employee employee1;
    employee1.Name = "Akash";
    employee1.Company = "WIley";
    employee1.Age = 22;
    employee1.IntroduceYourself();
}