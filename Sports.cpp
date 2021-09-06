#include <iomanip>
#include <string>
#include <iostream>
#include "Sports.h"
#include "Meals.h"
#include "User.h"

using namespace std;

Basketball::Basketball(){
	
	b_minutes=0;// kaç dk yapýldý
	b_adet=0; // haftada kaç defa yapýldý
	b_toplam_kalori=0;
	basketSize=0;
}
/*
void Basketball::set_b_adet(int a){
	b_adet=a;
}

int Basketball::get_b_adet(){
	return b_adet;
}

void Basketball::set_toplam_kalori(int a){
	b_toplam_kalori=a;
}

int Basketball::get_b_toplam_kalori(){
	return b_toplam_kalori;
}
*/
void kullanicidan_spor_alma_ekrana_yazdirma(){
	
	int s;
	
	for(int i=0;i<7;i++){
				cout<<gunler[i]<<":";
				cin>>s;
				if(s==1) sporlar[i]="Basketball";
				else if(s==2) sporlar[i]="Football";
				else if(s==3) sporlar[i]="Tennis";
				else sporlar[i]="Swimming";
			}
			
			for(int i=0;i<7;i++){
				cout<<sporlar[i]<<" ";
			}
	
}

int haftada_kac_gun_spor(string s){
	
	Basketball b1;
	int sayac=0;
	
	for(int i=0;i<7;i++){
		
		if(sporlar[i]==s){
			sayac++;
		}
		
	}
	return sayac;
	
}

void Basketball::set_basketPtr(int a[],int N){
	
	basketSize=N;
	basketPtr=new int[basketSize];
	
	for(int i=0;i<basketSize;i++){
		basketPtr[i]=a[i];
	}
	
}

/*
void Basketball::set_basketPtr(int N){
	basketSize=N;
	basketPtr=new int[basketSize];
	int a;
	
	for(int i=0;i<basketSize;i++){
		cout
	}
	
}
*/

int* Basketball::get_basketPtr(){
	return basketPtr;
}


int Basketball::toplam_harcanan_kalori(){
	
	b_toplam_kalori=0;
	if(basketSize>0){
		for(int i=0;i<basketSize;i++){
			b_toplam_kalori=b_toplam_kalori+(basketPtr[i]*6);
		}
		return b_toplam_kalori;
	}
	else
	return b_toplam_kalori;
}

void Basketball::showBasket(){
	
	for(int i=0;i<basketSize;i++){
		cout<<basketPtr[i]<<" ";
	}
}


int* basket_dk_bilgisi_alma(int N){

	int a;
//	int haftada_kac_gun;
//	haftada_kac_gun=N; //haftada_kac_gun_spor("Basketball");
	
	int *basketTut;
	basketTut=new int[N /*haftada_kac_gun*/];
	
	for(int i=0;i<N /*haftada_kac_gun*/;i++){
		if(sporlar[i]=="Basketball"){
			cout<<"\n"<<gunler[i]<<" gunu kac dk basketbol oynadiniz:";
			cin>>a;
			basketTut[i]=a;
		}
		else basketTut[i]=0;
	}
	return basketTut;
}

void Basketball::set_b_adet(int a){
	b_adet=a;
}

int Basketball::get_b_adet(){
	return b_adet;
}

void Basketball::set_b_minutes(int a){
	b_minutes=a;
}

int Basketball::get_b_minutes(){
	return b_minutes;
}

void Basketball::set_b_toplam_kalori(int a){
	b_toplam_kalori=a;
}

int Basketball::get_b_toplam_kalori(){
	return b_toplam_kalori;
}

Football::Football(){
	
	f_minutes=0;// kaç dk yapýldý
	f_adet=0; // haftada kaç defa yapýldý
	f_toplam_kalori=0;
	futbolSize=0;
}

void Football::set_f_adet(int a){
	f_adet=a;
}

int Football::get_f_adet(){
	return f_adet;
}

void Football::set_f_toplam_kalori(int a){
	f_toplam_kalori=a;
}

int Football::get_f_toplam_kalori(){
	return f_toplam_kalori;
}


void Football::set_futbolPtr(int a[],int N){
	
	//delete[] futbolPtr;
	futbolSize=N;
	futbolPtr=new int[futbolSize];
	
	for(int i=0;i<futbolSize;i++){
		futbolPtr[i]=a[i];
	}
	
}

int Football::toplam_f_harcanan_kalori(){
	
	f_toplam_kalori=0;
	
	if(futbolSize>0){
		for(int i=0;i<futbolSize;i++){
			f_toplam_kalori=f_toplam_kalori+(futbolPtr[i]*5);
		}
		return f_toplam_kalori;
	}
	else
	return f_toplam_kalori;
}

int* futbol_dk_bilgisi_alma(int N){

	int a;
//	int haftada_kac_gun;
//	haftada_kac_gun=N; //haftada_kac_gun_spor("Basketball");
	
	int *futbolTut;
	futbolTut=new int[N /*haftada_kac_gun*/];
	
	for(int i=0;i<N /*haftada_kac_gun*/;i++){
		if(sporlar[i]=="Football"){
			cout<<"\n"<<gunler[i]<<" gunu kac dk futbol oynadiniz:";
			cin>>a;
			futbolTut[i]=a;
		}
		else futbolTut[i]=0;
	}
	return futbolTut;
}



Tennis::Tennis(){
	
	t_minutes=0;// kaç dk yapýldý
	t_adet=0; // haftada kaç defa yapýldý
	t_toplam_kalori=0;
	tenisSize=0;
}

void Tennis::set_t_adet(int a){
	t_adet=a;
}

int Tennis::get_t_adet(){
	return t_adet;
}

void Tennis::set_t_toplam_kalori(int a){
	t_toplam_kalori=a;
}

int Tennis::get_t_toplam_kalori(){
	return t_toplam_kalori;
}


void Tennis::set_tenisPtr(int a[],int N){
	
	//delete[] futbolPtr;
	tenisSize=N;
	tenisPtr=new int[tenisSize];
	
	for(int i=0;i<tenisSize;i++){
		tenisPtr[i]=a[i];
	}
	
}

int Tennis::toplam_t_harcanan_kalori(){
	
	t_toplam_kalori=0;
	
	if(tenisSize>0){
		for(int i=0;i<tenisSize;i++){
			t_toplam_kalori=t_toplam_kalori+(tenisPtr[i]*5);
		}
		return t_toplam_kalori;
	}
	else
	return t_toplam_kalori;
}

int* tenis_dk_bilgisi_alma(int N){

	int a;
	
	int *tenisTut;
	tenisTut=new int[N ];
	
	for(int i=0;i<N;i++){
		if(sporlar[i]=="Tennis"){
			cout<<"\n"<<gunler[i]<<" gunu kac dk tenis oynadiniz:";
			cin>>a;
			tenisTut[i]=a;
		}
		else tenisTut[i]=0;
	}
	return tenisTut;
}

Swimming::Swimming(){
	
	s_minutes=0;// kaç dk yapýldý
	s_adet=0; // haftada kaç defa yapýldý
	s_toplam_kalori=0;
	yuzmeSize=0;
}

void Swimming::set_s_adet(int a){
	s_adet=a;
}

int Swimming::get_s_adet(){
	return s_adet;
}

void Swimming::set_s_toplam_kalori(int a){
	s_toplam_kalori=a;
}

int Swimming::get_s_toplam_kalori(){
	return s_toplam_kalori;
}


void Swimming::set_yuzmePtr(int a[],int N){
	
	//delete[] futbolPtr;
	yuzmeSize=N;
	yuzmePtr=new int[yuzmeSize];
	
	for(int i=0;i<yuzmeSize;i++){
		yuzmePtr[i]=a[i];
	}
	
}

int Swimming::toplam_s_harcanan_kalori(){
	
	s_toplam_kalori=0;
	
	if(yuzmeSize>0){
		for(int i=0;i<yuzmeSize;i++){
			s_toplam_kalori=s_toplam_kalori+(yuzmePtr[i]*7);
		}
		return s_toplam_kalori;
	}
	else
	return s_toplam_kalori;
}

int* yuzme_dk_bilgisi_alma(int N){

	int a;
	
	int *yuzmeTut;
	yuzmeTut=new int[N ];
	
	for(int i=0;i<N;i++){
		if(sporlar[i]=="Swimming"){
			cout<<"\n"<<gunler[i]<<" gunu kac dk yuzdunuz:";
			cin>>a;
			yuzmeTut[i]=a;
		}
		else yuzmeTut[i]=0;
	}
	return yuzmeTut;
}

void Football::set_f_minutes(int a){
	f_minutes=a;
}

int Football::get_f_minutes(){
	return f_minutes;
}

void set_t_minutes(int);
		int get_t_minutes();
		void set_t_toplam_kalori(int);
		int get_t_toplam_kalori();

void Tennis::set_t_minutes(int a){
	t_minutes=a;
}

int Tennis::get_t_minutes(){
	return t_minutes;
}

void Swimming::set_s_minutes(int a){
	s_minutes=a;
}
	

int Swimming::get_s_minutes(){
	return s_minutes;
}

