#include <iostream>
#include <string>
#include <iomanip>
#include "Meals.h"
#include "Sports.h"
#include "User.h"

using namespace std;

User::User(){
	
	name="Bilgi Yok";
	surname="Bilgi Yok";
	id=0;
	yas=0;
	kilo=0.0;
	numberOfWeeks=0;
	
}

User::User(string a,string b,int c, int d,int e, float f){
	
	name=a;
	surname=b;
	id=c;
	yas=e;
	kilo=f;
	numberOfWeeks=d;
}

ostream& operator<<(ostream& os, const User& other){
	
	os<<other.name<<" "<<other.surname<<" "<<other.id<<" "<<other.yas<<" "<<other.kilo<<" "<<other.numberOfWeeks;
	return os;
}

istream& operator>>(istream& is, User& other){

	cout<<"Sirasi ile ad, soyad,id, yas, kilo ve yilin kacinci haftasi oldugunu giriniz!!"<<endl;
	is>>other.name>>other.surname>>other.id>>other.yas>>other.kilo>>other.numberOfWeeks;
	return is;
}

User::User(const User& other){
	
	name=other.name;
	surname=other.surname;
	id=other.id;
	yas=other.yas;
	kilo=other.kilo;
	numberOfWeeks=other.numberOfWeeks;
	
}

const User& User::operator=(const User& other){
	
	name=other.name;
	surname=other.surname;
	id=other.id;
	yas=other.yas;
	kilo=other.kilo;
	numberOfWeeks=other.numberOfWeeks;
	
	return *this;
}
	


void User::set_name(string a){
	name=a;
}

string User::get_name(){
	return name;
}

void User::set_surname(string a){
	surname=a;
}

string User::get_surname(){
	return surname;
}

void User::set_id(int a){
	id=a;
}

int User::get_id(){
	return id;
}

void User::set_yas(int a){
	yas=a;
}

int User::get_yas(){
	return yas;
}

void User::set_kilo(float a){
	kilo=a;
}

float User::get_kilo(){
	return kilo;
}

void User::set_numberofweeks(int a){
	numberOfWeeks=a;
}

int User::get_numberofweeks(){
	return numberOfWeeks;
}
