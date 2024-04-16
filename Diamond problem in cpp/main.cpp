#include <iostream>
#include "emp.h"
using namespace std;
using namespace mynmspce;

int main(){

	typedef mynmspce::Emp Employee;
	typedef mynmspce::Manager Man;
	typedef mynmspce::Sales Sales;
	typedef mynmspce::	SalesManager SalesMan;

	cout<<"\n Employee "<<endl;
	Employee e;
	e.aceeptinfo(101,"Ranjan",20000);
	e.show();

	cout<<endl;

	//Manager(int eid ,string enm,int esalary ,int b)
	Man m(102,"Rutwij",25000,1000);
	m.show();

    cout<<endl;


	//Sales(int eid ,string enm,int esalary,int pa ,int fa ,int ta)
	Sales s(103,"Mira",20000,1000,1000,1000);
	s.show();

    cout<<endl;

	// SalesManager(int eid ,string enm,int esalary ,int b,int pa ,int fa ,int ta,int incen)
	SalesMan sm(104,"Revati",40000,10000,1000,1000,1000,5000);
	sm.show();


}
