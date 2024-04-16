#include<iostream>
#include<string.h>
using namespace std;
namespace mynmspce{

	class Emp{
		protected:
		string enm;
		int eid;
		int esalary;
		public:
			 virtual void show(){
				cout<<" Name "<<enm<<"  Id : "<<eid<<endl;
				calsalary();
			}
			Emp(){

			}
			Emp(int id,string nm,int sal){
				eid=id;
				enm=nm;
				esalary=sal;
			}
			void aceeptinfo(int id,string nm,int salary){
				eid=id;
				enm=nm;
				esalary=salary;
			}
			virtual void calsalary(){
				cout<<" Salary : "<<esalary;
			}
	};


class Manager:public virtual Emp{
        protected:
        int bonus;
        public:

        Manager(int eid ,string enm,int esalary ,int b):Emp(eid,enm,esalary){
                bonus=b;
                this->eid=eid;
				this->enm=enm;
                this->esalary=esalary;
        }
        void calsalary(){
            this->esalary=this->esalary+bonus;
			cout<<" Salary : "<<this->esalary;
        }
        void show(){
            cout<<"\n Manager   \nName "<<this->enm<<"  Id : "<<this->eid<<endl;
			calsalary();

        }

};

class Sales:public virtual Emp{
        protected:
        int pa,fa,ta,salary;
        public:

        Sales(int eid ,string enm,int esalary,int pa ,int fa ,int ta):Emp(eid,enm,esalary){
                this->eid=eid;
				this->enm=enm;
                this->fa=fa;
                this->pa=pa;
                this->ta=ta;
                this->esalary=esalary;
        }
        void calsalary(){
            this->esalary=this->esalary+this->pa+this->fa+this->ta;
			cout<<" Salary : "<<this->esalary;
        }
        void show(){
            cout<<"\n Sales  \nName "<<this->enm<<"  Id : "<<this->eid<<endl;
			calsalary();
        }

};


class SalesManager:public virtual Sales, public virtual Manager {
        protected:
        int incentive;
        public:
        SalesManager(int eid ,string enm,int esalary ,int b,int pa ,int fa ,int ta,int incen):Sales(eid,enm,esalary,pa,fa,ta),Manager( eid , enm, esalary ,bonus){
                this->eid=eid;
				this->enm=enm;
				this->esalary=esalary;
				this->bonus=b;
                this->fa=fa;
                this->pa=pa;
                this->ta=ta;
				this->incentive=incen;
        }
        void calsalary(){
            this->esalary=this->esalary+this->incentive+this->pa+this->fa+this->ta+this->bonus;
			cout<<" Salary : "<<this->esalary;
        }
        void show(){
            cout<<"\n Sales Manager   \nName "<<this->enm<<"  Id : "<<this->eid<<endl;
			calsalary();
        }

};

}
