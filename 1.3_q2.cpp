#include<iostream>
using namespace std;

class Cars{
	public:
	int car_id;
	char car_company_name[50];
	char car_color[50];
	char car_model[50];
	int car_release_year;

};

int main()
{
	int i;
	
	Cars a[4];
	
	for(i=0;i<4;i++)
	{
	    cout << "Enter car Id : ";
	    cin >> a[i].car_id;
	    cout << "Enter car company name : ";
	    cin >> a[i].car_company_name;
	    cout << "Enter car color : ";
	    cin >> a[i].car_color;
	    cout << "Enter car model : ";
	    cin >> a[i].car_model;
	    cout << "Enter car release year : ";
	    cin >> a[i].car_release_year;
	
	    cout << "-------------------------------------------" << endl;
	  
    }
   
    cout << "-------------------------------------------" << endl;
	
	for(i=0;i<4;i++)
	{
		cout << "Id : " << a[i].car_id << endl;
		cout << "Company name : " << a[i].car_company_name << endl;
		cout << "Color : " << a[i].car_color << endl;
		cout << "Model : " << a[i].car_model << endl;
		cout << "Release year : " << a[i].car_release_year << endl;
		
		cout << "-------------------------------------------" << endl;
    }
    
    cout << "-------------------------------------------" << endl;
   
    return 0;
		
}
