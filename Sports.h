#ifndef Sports_h
#define Sports_h

#include "Meals.h"
#include <iomanip>

using namespace std;

class Basketball{
	
	private :
		int b_minutes;// kaç dk yapýldý
		int b_adet; // haftada kaç defa yapýldý
		int b_toplam_kalori;
		int basketSize;
		int *basketPtr;
		
	public:
		Basketball();
		Basketball(const Basketball&);
		Basketball& operator=(const Basketball&);
		void showBasket();
		void set_b_adet(int a);
		int get_b_adet();
		void set_b_minutes(int);
		int get_b_minutes();
		void set_b_toplam_kalori(int);
		int get_b_toplam_kalori();
		
		void set_basketPtr(int[],int);
		//void set_basketPtr();
		int* get_basketPtr();
		int toplam_harcanan_kalori();
		void set_toplam_kalori(int);
		int get__b_toplam_kalori();
};

class Football{
	
	private :
		int f_minutes;// kaç dk yapýldý
		int f_adet;// haftada kaç defa yapýldý
		int f_toplam_kalori;
		int futbolSize;
		int *futbolPtr;
		
	public:
		void set_f_adet(int);
		int get_f_adet();
		void set_f_minutes(int);
		int get_f_minutes();
		void set_f_toplam_kalori(int);
		int get_f_toplam_kalori();
		Football();
		Football(const Football&);
		Football& operator=(const Football&);
		void set_futbolPtr(int [],int);
		int toplam_f_harcanan_kalori();
		
};

class Tennis{
	
	private :
		int t_minutes;// kaç dk yapýldý
		int t_adet;// haftada kaç defa yapýldý
		int t_toplam_kalori;
		int tenisSize;
		int *tenisPtr;
	public:
		void set_t_adet(int a);
		int get_t_adet();
		void set_t_minutes(int);
		int get_t_minutes();
		
		Tennis();
		Tennis(const Tennis&);
		Tennis& operator=(const Tennis&);
		void set_tenisPtr(int [],int);
		void set_t_toplam_kalori(int);
		int get_t_toplam_kalori();
		int toplam_t_harcanan_kalori();
};


class Swimming{
	
	private :
		int s_minutes;// kaç dk yapýldý
		int s_adet;// haftada kaç defa yapýldý
		int s_toplam_kalori;
		int yuzmeSize;
		int *yuzmePtr;
		
	public:
		void set_s_adet(int a);
		int get_s_adet();
		void set_s_toplam_kalori(int);
		int get_s_toplam_kalori();
		void set_s_minutes(int);
		int get_s_minutes();
		
		Swimming();
		Swimming(const Swimming&);
		Swimming& operator=(const Swimming&);
		void set_yuzmePtr(int [],int);
		int toplam_s_harcanan_kalori();
};

void kullanicidan_spor_alma_ekrana_yazdirma();
int haftada_kac_gun_spor(string s);
int* basket_dk_bilgisi_alma(int);
int* futbol_dk_bilgisi_alma(int);
int* tenis_dk_bilgisi_alma(int);
int* yuzme_dk_bilgisi_alma(int);

#endif 
