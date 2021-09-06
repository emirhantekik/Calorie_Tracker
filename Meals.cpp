#include <string>
#include<iostream>
#include "Meals.h"
#include <string.h>
#include <iomanip>

using namespace std;

Breakfast::Breakfast(){
	
	br_adet=0;
	kahvalti_toplam_kalori_tutma=0;
	bSize=7;//haftanýn 7 günü için tek tek veri tutacak
	
}

void Breakfast::set_breakfast(string a[],int N){
	bSize=N;
	bPtr=new string[bSize];
	
	for(int i=0;i<bSize;i++){
		bPtr[i]=a[i];
	}
}



/*Þimdilik kalsýn en aþaðý at doðru gidip gitmediðini kontrol et sonra sil*/
void Breakfast::showB(){
	for(int i=0;i<bSize;i++){
		cout<<bPtr[i]<<" ";
	}
	cout<<endl;
}

int Breakfast::adet_sayisi_hesaplama_beakfast(string a){
	br_adet=0;
	string strTemp=a;
	for(int i=0;i<bSize;i++){
		if(bPtr[i]==strTemp){
			br_adet++;
		}
	}
	return br_adet;
}

int Breakfast::kahvalti_toplam_kalori(){
	
	kahvalti_toplam_kalori_tutma=0;
	
	for(int i=0;i<bSize;i++){
		if(bPtr[i]=="Small"){
			kahvalti_toplam_kalori_tutma=kahvalti_toplam_kalori_tutma+200;
		}
		if(bPtr[i]=="Medium"){
			kahvalti_toplam_kalori_tutma=kahvalti_toplam_kalori_tutma+400;
		}
		if(bPtr[i]=="Large"){
			kahvalti_toplam_kalori_tutma=kahvalti_toplam_kalori_tutma+600;
		}
		
	}//for döngüsü sonu
	return kahvalti_toplam_kalori_tutma;
}

Breakfast::Breakfast(int a,int b,int c){
	
	br_adet=a;
	kahvalti_toplam_kalori_tutma=b;
	bSize=c;//haftanýn 7 günü için tek tek veri tutacak
	
}

Breakfast& Breakfast::operator=(const Breakfast& other){
	br_adet=other.br_adet;
	kahvalti_toplam_kalori_tutma=other.kahvalti_toplam_kalori_tutma;
	bSize=other.bSize;
	
	for(int i=0;i<bSize;i++){
		bPtr[i]=other.bPtr[i];
	}
	return *this;
}

Breakfast Breakfast::operator+(Breakfast& b1){
	
	Breakfast breakTemp;
	
	breakTemp.bPtr=new string[7/*breakTemp.bSize*/];
	
	breakTemp.br_adet=br_adet+b1.br_adet;
	breakTemp.kahvalti_toplam_kalori_tutma=kahvalti_toplam_kalori_tutma+b1.kahvalti_toplam_kalori_tutma;
	
	for(int i=0;i<breakTemp.bSize;i++){
		
		breakTemp.bPtr[i]=bPtr[i]+b1.bPtr[i];
	}
	return breakTemp;
}

ostream& operator<<(ostream& os1, const Breakfast& other) {
	
	for(int i=0;i<other.bSize;i++){
		os1<<other.bPtr[i]<<" ";
	}
	
	return os1;
}

int Breakfast::get_br_adet(){
	return br_adet;
}

void Breakfast::set_br_adet(int a){
	br_adet=a;
}

int Breakfast::get_kahvalti_toplam_kalori_tutma(){
	return kahvalti_toplam_kalori_tutma;
}

void Breakfast::set_kahvalti_toplam_kalori_tutma(int a){
	kahvalti_toplam_kalori_tutma=a;
}

/******************************************************************************/
/******************************************************************************/


Lunch::Lunch(){
	
	L_adet=0;	
	Lsize=7;
	lunch_toplam_kalori_tutma=0;
}

void Lunch::set_Lunch(string a[],int N){
	
	Lsize=N;
	Lptr=new string[Lsize];
	
	for(int i=0;i<Lsize;i++){
		Lptr[i]=a[i];
	}
}

void Lunch::showL(){
	
	for(int i=0;i<Lsize;i++){
		cout<<Lptr[i]<<" ";
	}
	
}

int Lunch::adet_sayisi_hesaplama_lunch(string a){
	
	L_adet=0;
	string strTemp=a;
	for(int i=0;i<Lsize;i++){
		if(Lptr[i]==strTemp){
			L_adet++;
		}
	}
	return L_adet;
}

int Lunch::lunch_toplam_kalori(){
	
	lunch_toplam_kalori_tutma=0;
	
	for(int i=0;i<Lsize;i++){
		if(Lptr[i]=="Small"){
			lunch_toplam_kalori_tutma=lunch_toplam_kalori_tutma+400;
		}
		if(Lptr[i]=="Medium"){
			lunch_toplam_kalori_tutma=lunch_toplam_kalori_tutma+600;
		}
		if(Lptr[i]=="Large"){
			lunch_toplam_kalori_tutma=lunch_toplam_kalori_tutma+800;
		}
		
	}//for döngüsü sonu
	return lunch_toplam_kalori_tutma;
}

void Lunch::set_lunch_toplam_kalori_tutma(int a){
	lunch_toplam_kalori_tutma=a;
}

int Lunch::get_lunch_toplam_kalori_tutma(){
	return lunch_toplam_kalori_tutma;
}

void Lunch::set_l_adet(int a){
	L_adet=a;
}

int Lunch::get_l_adet(){
	return L_adet;
}

void Lunch::set_lsize(int a){
	Lsize=a;
}

int Lunch::get_lsize(){
	return Lsize;
}

ostream& operator<<(ostream& os1, const Lunch& other) {
	
	for(int i=0;i<other.Lsize;i++){
		os1<<other.Lptr[i]<<" ";
	}
	
	return os1;
}

/******************************************************************************/
/******************************************************************************/
/******************************************************************************/

Dinner::Dinner(){
	d_adet=0;
	Dsize=7;//haftanýn 7 günü için hangi gün hangi öðün yendiði bilgisini tutacak
	dinner_toplam_kalori_tutma=0;
}

void Dinner::set_Dinner(string a[],int N){
	
	Dsize=N;
	Dptr=new string[Dsize];
	
	for(int i=0;i<Dsize;i++){
		Dptr[i]=a[i];
	}
	
}

void Dinner::showD(){
	
	for(int i=0;i<Dsize;i++){
		cout<<Dptr[i]<<" ";
	}

}

int Dinner::adet_sayisi_hesaplama_dinner(string a){
	
	d_adet=0;
	string strTemp=a;
	for(int i=0;i<Dsize;i++){
		if(Dptr[i]==strTemp){
			d_adet++;
		}
	}
	return d_adet;
}

int Dinner::dinner_toplam_kalori(){
	
	dinner_toplam_kalori_tutma=0;
	
	for(int i=0;i<Dsize;i++){
		if(Dptr[i]=="Small"){
			dinner_toplam_kalori_tutma=dinner_toplam_kalori_tutma+400;
		}
		if(Dptr[i]=="Medium"){
			dinner_toplam_kalori_tutma=dinner_toplam_kalori_tutma+600;
		}
		if(Dptr[i]=="Large"){
			dinner_toplam_kalori_tutma=dinner_toplam_kalori_tutma+800;
		}
		
	}//for döngüsü sonu
	return dinner_toplam_kalori_tutma;
	
}

void set_d_adet(int);
int get_d_adet();
void set_dsize(int);
int get_dsize();
void set_dinner_toplam_kalori_tutma(int);
int get_dinner_toplam_kalori_tutma();

void Dinner::set_d_adet(int a){
	d_adet=a;
}

int Dinner::get_d_adet(){
	return d_adet;
}

void Dinner::set_dsize(int a){
	Dsize=a;
}

int Dinner::get_dsize(){
	return Dsize;
}

void Dinner::set_dinner_toplam_kalori_tutma(int a){
	dinner_toplam_kalori_tutma=a;
}

int Dinner::get_dinner_toplam_kalori_tutma(){
	return dinner_toplam_kalori_tutma;
}

ostream& operator<<(ostream& os2, const Dinner& other) {
	
	for(int i=0;i<other.Dsize;i++){
		os2<<other.Dptr[i]<<" ";
	}
	
	return os2;
}

/* ********************************************************************** */

string* ogun_bilgisi_alma(){

	string* bTut=new string[7];
	int a;
	
	cout<<"\n1.Small\n2.Medium\n3.Large\n\n";
	for(int i=0;i<7;i++){
		cout<<gunler[i]<<":";
		cin>>a;
		if(a==1) bTut[i]="Small";
		else if(a==2) bTut[i]="Medium";
		else bTut[i]="Large";
	}
	return bTut;
}

string ogun_adet_sorgula(){
	string strTemp;
		cout<<
		cout<<"\n1.Small\n2.Medium\n3.Large\n\n";
		cout<<"Hangi boyuttaki yemekten kac adet yedigini sorgulamak istiyorsun?\n";
		int islem;
		cin>>islem;
		switch(islem){
			case 1:
				strTemp="Small";
				break;
			
			case 2:
				strTemp="Medium";
				break;
			
			case 3:
				strTemp="Large";
				break;
			
			default :
				cout<<"1-2-3 sayisindan birini seciniz!!!";
				break;
		
		}
	
	return strTemp;
}




