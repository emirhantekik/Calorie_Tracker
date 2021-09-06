#ifndef Meals_h
#define Meals_h

#include <iomanip>
#include <string>
using namespace std;

static string gunler[7]={"Pazartesi","Sali","Carsamba","Persembe","Cuma","Cumartesi","Pazar"};
static string sporlar[7];

/*void set_s_adet(int a);
		int get_s_adet();
*/
class Breakfast{
		
	friend ostream& operator<<(ostream& , const Breakfast&) ;
	friend istream& operator>>(istream&, Breakfast& );
		
	private :
		
		int br_adet; // kaç tane yenildiðini tutacak
		int bSize;
		int kahvalti_toplam_kalori_tutma;
		string *bPtr;
		
	public:
		
		int get_br_adet();
		void set_br_adet(int);
		int get_kahvalti_toplam_kalori_tutma();
		void set_kahvalti_toplam_kalori_tutma(int);
		
		Breakfast();
		Breakfast(int,int,int);
		Breakfast(const Breakfast&);
		Breakfast& operator=(const Breakfast&);
		void set_breakfast(string[],int);// mainden aldýðým stringi breakfast classýnda oluþturduðum nesnenin arrayinin içinne atýp bilgiyi tutuyor.
		
		void showB();// þuanlýk öylesine doðru gidip gitmediðini kontrol etmek amaçlý
		int adet_sayisi_hesaplama_beakfast(string);
		int kahvalti_toplam_kalori();
		Breakfast operator+(Breakfast&);
};

class Lunch{
	
	friend ostream& operator<<(ostream&,const Lunch&);
	
	private :
		int L_adet; 
		int Lsize;
		int lunch_toplam_kalori_tutma;
		string *Lptr;
		
		
	public:
		Lunch();
		Lunch(const Lunch&);
		Lunch& operator=(const Lunch&);
		
		void set_Lunch(string[],int);
		void showL();
		int adet_sayisi_hesaplama_lunch(string);
		int lunch_toplam_kalori();
		void set_lunch_toplam_kalori_tutma(int);
		int get_lunch_toplam_kalori_tutma();
		void set_l_adet(int);
		int get_l_adet();
		int get_lsize();
		void set_lsize(int);
};


class Dinner{
	
	friend ostream& operator<<(ostream&,const Dinner&);
	
	private :
		int d_adet;//akþam yemeðinde kaç adet small yendi	
		int Dsize;
		int dinner_toplam_kalori_tutma;
		string *Dptr;
		
	public:
		Dinner();
		Dinner(const Lunch&);
		Dinner& operator=(const Dinner&);
		
		void set_Dinner(string[],int);
		void showD();
		int adet_sayisi_hesaplama_dinner(string);
		int dinner_toplam_kalori();
		
		void set_d_adet(int);
		int get_d_adet();
		void set_dsize(int);
		int get_dsize();
		void set_dinner_toplam_kalori_tutma(int);
		int get_dinner_toplam_kalori_tutma();
		
};


string* ogun_bilgisi_alma();
string ogun_adet_sorgula();

#endif
