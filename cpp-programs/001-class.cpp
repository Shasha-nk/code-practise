#include <iostream>
using namespace std;
class Employee {
	public:
		int id;
		string name;
		float salary;
		static string compName;
		Employee(int i, string n,float s) {
			id = i;
			name = n;
			salary = s;
			cout << "Data initialized..." << endl;
		}
		void display() {
			cout << "Employee " << name << " with " << id << " earns " << salary << " per month" << endl;
		}
		~Employee() {
			cout << "Data destroyed" << endl;
		}
		
};
string Employee::compName = "HCL";
int main() {
	Employee E1 = Employee(1,"SHA",97000);
	E1.display();
}
