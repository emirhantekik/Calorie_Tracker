#ifndef User_h
#define User_h

#include "Meals.h"
#include <string>
#include <iostream>
#include <iomanip>
#include "Sports.h"

using namespace std;

class User{
	
	friend ostream& operator<<(ostream& , const User&) ;
	friend istream& operator>>(istream&, User& );	
	
	private :
		
		string name;
		string surname;
		int id;
		int yas;
		float kilo;
		int numberOfWeeks;
		
		
	public:
		
		Breakfast br1;//Breakfast clasýný kullanabilmek için obje
		Lunch l1;//lunch classýný kullanabilmek için obje
		Dinner d1;//Dinner clasýný kullanabilmek için obje
		
		Basketball b1;
		Football f1;
		Tennis t1;
		Swimming s1;
		
		User();//Default constructor
		User(string a,string b,int c, int d,int e,float f);
		User(const User&);// copy constructor
		const User& operator=(const User&);//Assignment operator
		
		void set_name(string);
		string get_name();
		
		void set_surname(string);
		string get_surname();
		
		void set_id(int);
		int get_id();
		
		void set_yas(int);
		int get_yas();
		
		void set_kilo(float);
		float get_kilo();
		
		void set_numberofweeks(int);
		int get_numberofweeks();
		
};

#endif
