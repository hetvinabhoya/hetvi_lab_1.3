#include<iostream>
using namespace std;

class Employee{
	public:   
	int emp_id;
	char emp_name[50];
	char emp_role[50];
	int emp_age;
	int emp_salary;
	int emp_experience;
	char emp_city[50];
	char emp_company_name[50];  
};

int main()
{
	int i;
	
	Employee e[5];
	
	for(i=0;i<5;i++)
	{
 	    cout << "Enter Employee Id : ";
	    cin >> e[i].emp_id;
	    cout << "Enter Employee Name : ";
	    cin >> e[i].emp_name;
	    cout << "Enter Employee Role : ";
	    cin >> e[i].emp_role;
	    cout << "Enter Employee Age : ";
	    cin >> e[i].emp_age;
	    cout << "Enter Employee Salary : ";
	    cin >> e[i].emp_salary;
	    cout << "Enter Employee Experience : ";
	    cin >> e[i].emp_experience;
	    cout << "Enter Employee City : ";
	    cin >> e[i].emp_city;
	    cout << "Enter Employee Company_name : ";
	    cin >> e[i].emp_company_name;
	
	    cout << "------------------------------------------" << endl;
	}
	
	cout << "------------------------------------------" << endl;
	
	
	for(i=0;i<5;i++)
	{
		cout << "Id : " << e[i].emp_id << endl;
		cout << "Name : " << e[i].emp_name << endl;
		cout << "Role : " <<e[i].emp_role << endl;
		cout << "Age : " <<e[i].emp_age << endl;
		cout << "Salary : " <<e[i].emp_salary << endl;
		cout << "Experience : " <<e[i].emp_experience << endl;
		cout << "City : " <<e[i].emp_city << endl;
		cout << "Company_name : " <<e[i].emp_company_name << endl;
		
		cout << "------------------------------------------" << endl;
    }
    
   	cout << "------------------------------------------" << endl;

    return 0;
		
}
