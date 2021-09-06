#include <iostream>
#include <string>
#include <iomanip>
#include "Meals.h"
#include "Sports.h"
#include "User.h"

using namespace std;

void AnaMenu(){
	
	cout<<"1.Developer Mode\n";
	cout<<"2.User Mode\n";
	
}

void developerMenu(){
	
	cout<<"1.User islemleri icin\n2.Ogun islemleri icin\n3.Spor islemleri icin\n";
	
}


int main(){
	
	/*Developer mode nesneleri*/
	
	git:
	
	User user1;
	
	Breakfast breakfast1;
	Breakfast breakfast2;
	Breakfast breakfast3;
	Lunch lunch1;
	Dinner dinner1;
	
	Basketball basketball1;
	Football football1;
	Tennis tennis1;
	Swimming swimming1;
	
	int a;//bazý yerlerde kullanmak için
	int b;//bazý yerlerde kullanmak için
	/* ********************** */
	
	User u1;//Kullanýcý menüsünde yeni kullanýcý oluþturup tüm iþleri yaptýrmak için User classýndaki u1 nesnesi kullanýlacaktýr.
	
	
	int ogun_toplam;
	int toplam_kalori;
	string secilen_ogun;
	string spor_bilgisi;
	int spor_toplam_kalori;
	int sonuc;
	
	
	AnaMenu();
	int islem;
	int developerislem;
	cout<<"Yapmak istediginiz islemi giriniz :";
	cin>>islem;
	
	switch(islem){
		
		case 1:
			
			git1:
			cout<<endl;
			developerMenu();
			cout<<"Yapmak istediginiz islemi giriniz :";
			cin>>developerislem;
			
			switch(developerislem){
				
				case 1:
					
					cout<<"Developer mode da User islemini sectiniz!!!!\n\n"<<"Lutfen kullanici olusturunuz :\n";
					cin>>u1;
					cout<<"\nKullanici Bilgileri :\n";
					cout<<u1;
					cout<<"\n\n";
					
					cout<<"\n\nBaska islem yapmak istiyor musunuz?\n1. Evet, 2 Hayir";
					cin>>a;
					
					if(a==1) {
						system("cls");
						goto git1;
					}
					else return 0;
					
					break;
				
				case 2:
					
					cout<<"\nLutfen yaptiginiz kahvaltinin buyuklugunu seciniz!!!\n";
					breakfast1.set_breakfast(ogun_bilgisi_alma(),7);					
					cout<<breakfast1;
					cout<<"\nKahvaltida alinan kalori :"<<breakfast1.kahvalti_toplam_kalori()<<endl;
					cout<<"\nget fonksiyonu kahvaltida alinan kalori :"<<breakfast1.get_kahvalti_toplam_kalori_tutma()<<endl;
										
					cout<<"\nLutfen yaptiginiz ogle yemeginin buyuklugunu seciniz!!!\n";
					lunch1.set_Lunch(ogun_bilgisi_alma(),7);
					cout<<lunch1;
					cout<<"\nOgle yemeginde alinan kalori :"<<lunch1.lunch_toplam_kalori()<<endl;
					cout<<"\nget fonksiyonu ile ogle yemeginde alinan kalori :"<<lunch1.get_lunch_toplam_kalori_tutma()<<endl;
					
					cout<<"\nLutfen yaptiginiz aksam yemeginin buyuklugunu seciniz!!!\n";
					dinner1.set_Dinner(ogun_bilgisi_alma(),7);
					cout<<dinner1;
					cout<<"\nAksam yemeginde alinan kalori :"<<dinner1.dinner_toplam_kalori()<<endl;
					cout<<"\nget fonksiyonu ile aksam yemeginde alinan kalori :"<<dinner1.get_dinner_toplam_kalori_tutma()<<endl;
					
					cout<<"\nBaska islem yapmak istiyor musunuz?\n1. Evet, 2 Hayir";
					cin>>a;
					
					if(a==1) {
						system("cls");
						goto git1;
					}
					else return 0;

					break;					
					
				case 3:
					
					cout<<"Haftada kac defa basket oynadiniz:";
					cin>>a;
					basketball1.set_b_adet(a);
					cout<<"haftada "<<basketball1.get_b_adet()<<" kere basketball oynadiniz."<<endl;
					
					b=0;
					for(int i=0;i<basketball1.get_b_adet();i++){
						cout<<"kac dk oynadiniz :";
						cin>>a;
						b=b+a;
					}
					
					basketball1.set_b_minutes(b);
					cout<<basketball1.get_b_minutes()<<"dk kadar basketball oynadiniz."<<endl;
					
					basketball1.set_b_toplam_kalori(b*6);
					cout<<basketball1.get_b_toplam_kalori()<<" kalori verdiniz";
					
					//futbol için
					
					cout<<"\n\nHaftada kac defa futbol oynadiniz:";
					cin>>a;
					football1.set_f_adet(a);
					cout<<"Haftada "<<football1.get_f_adet()<<" kere futbol oynadiniz."<<endl;
					
					b=0;
					for(int i=0;i<football1.get_f_adet();i++){
						cout<<"kac dk oynadiniz :";
						cin>>a;
						b=b+a;
					}
					
					football1.set_f_minutes(b);
					cout<<football1.get_f_minutes()<<"dk kadar futbol oynadiniz."<<endl;
					football1.get_f_minutes();
					
					football1.set_f_toplam_kalori(b*5);
					cout<<football1.get_f_toplam_kalori()<<" kalori verdiniz";
					
					
					cout<<"\n\nHaftada kac defa tenis oynadiniz:";
					cin>>a;
					tennis1.set_t_adet(a);
					cout<<"Haftada "<<tennis1.get_t_adet()<<" kere tenis oynadiniz."<<endl;
					
					b=0;
					for(int i=0;i<tennis1.get_t_adet();i++){
						cout<<"kac dk oynadiniz :";
						cin>>a;
						b=b+a;
					}
					tennis1.set_t_minutes(b);
					cout<<tennis1.get_t_minutes()<<" dk kadar tenis oynadiniz."<<endl;
						
					tennis1.set_t_toplam_kalori(b*5);
					cout<<tennis1.get_t_toplam_kalori()<<" kalori verdiniz.";
					
					cout<<"\n\nHaftada kac defa yuzdunuz:";
					cin>>a;
					cout<<endl;
					swimming1.set_s_adet(a);
					cout<<"Haftada "<<swimming1.get_s_adet()<<" kere yuzdunuz."<<endl;
					
					b=0;
					
					for(int i=0;i<swimming1.get_s_adet();i++){
						cout<<"kac dk oynadiniz :";
						cin>>a;
						b=b+a;
					}
					swimming1.set_s_minutes(b);
					cout<<"\n"<<swimming1.get_s_minutes()<<" dk kadar yuzdunuz."<<endl;
					swimming1.set_s_toplam_kalori(b*7);
					cout<<swimming1.get_s_toplam_kalori()<<" kalori verdiniz.";
					
					cout<<"\nBaska islem yapmak istiyor musunuz?\n1. Evet, 2 Hayir";
					cin>>a;
					
					if(a==1) {
						system("cls");
						goto git1;
					}
					else return 0;
					
					break;
					
				default:
					system("cls");
					cout<<"Lutfen 1-2-3 islemlerinden birini seciniz!!!\n";
					goto git1;
				
			}//case 1 içindeki swtich sonu
			
			
			break;
			
		case 2:
			
			cout<<"User Mode sectiniz!!!!\n\n"<<"Lutfen kullanici olusturunuz :\n";
			cin>>u1;
			cout<<"Kullanici Bilgileri :\n";
			cout<<u1;
			cout<<"\n\n";
			
			//Kullanýcý ile gün gün kahvaltý, öðle yemeði ve akþam yemeðinde hangi boyutta yemek yediði bilgisini tutma*/
			cout<<"\nLutfen yaptiginiz kahvaltinin buyuklugunu seciniz!!!\n";
			u1.br1.set_breakfast(ogun_bilgisi_alma(),7);
			cout<<"\nKahvaltida yaptiginiz ogunlerin buyuklugu :";
			u1.br1.showB();
			//u1.br1.showB();
			
			cout<<"\nLutfen yaptiginiz ogle yemeginin buyuklugunu seciniz!!!\n";
			u1.l1.set_Lunch(ogun_bilgisi_alma(),7);
			cout<<"\nOgle yemeginde yaptiginiz ogunlerin buyuklugu :";
			u1.l1.showL();
			
			cout<<"\nLutfen yaptiginiz aksam yemeginin buyuklugunu seciniz!!!\n";
			u1.d1.set_Dinner(ogun_bilgisi_alma(),7);
			cout<<"\nAksam yemeginde yaptiginiz ogunlerin buyuklugu :";
			u1.d1.showD();
			/* ******************************************************************************************************* */
			
			secilen_ogun=ogun_adet_sorgula();
			ogun_toplam=u1.br1.adet_sayisi_hesaplama_beakfast(secilen_ogun)+u1.l1.adet_sayisi_hesaplama_lunch(secilen_ogun)+u1.d1.adet_sayisi_hesaplama_dinner(secilen_ogun);
			cout<<secilen_ogun<<"boyut bir hafta icersinde toplam "<<ogun_toplam<<" kere tuketilmistir.";
			
			/*Kullanýcýnýn toplam aldýðý kalori sayýsýný hesaplamak için kullanýlacak*/
			cout<<"\n\n";
			cout<<"\nKahvaltida toplam "<<u1.br1.kahvalti_toplam_kalori()<<" kalori alinmistir.\n";
			cout<<"Ogle yemeginde toplam "<<u1.l1.lunch_toplam_kalori()<<" kalori alinmistir.\n";
			cout<<"Aksam yemeginde toplam "<<u1.d1.dinner_toplam_kalori()<<" kalori alinmistir.\n";
			toplam_kalori=u1.br1.kahvalti_toplam_kalori()+u1.l1.lunch_toplam_kalori()+u1.d1.dinner_toplam_kalori();
			cout<<"1 haftada toplam "<<toplam_kalori<<" kalori almissiniz.\n";
			
			/* *********************************************************************** */
		
			/*sporlar string arrayi içinde bilgiler tutalacak*/
			//basketball//
			cout<<endl;
			cout<<"1.Basketball\n2.Football\n3.Tennis\n4.Swimming\n";
			cout<<"Yaptiginiz sporu giriniz:\n";
			
			kullanicidan_spor_alma_ekrana_yazdirma();
			spor_bilgisi="Basketball";
			u1.b1.set_b_adet(haftada_kac_gun_spor(spor_bilgisi));
			cout<<"\n1 haftada "<<u1.b1.get_b_adet()<<" defa Basketbol oynadiniz.";

			u1.b1.set_basketPtr(basket_dk_bilgisi_alma(7),7);
			cout<<endl;
			cout<<"Basketbol oynayarak toplam "<<u1.b1.toplam_harcanan_kalori()<<"kalori harcadiniz.\n";
			//************************************************************************//
			/*Futbol*/
			spor_bilgisi="Football";
			u1.f1.set_f_adet(haftada_kac_gun_spor(spor_bilgisi));
			cout<<"\n1 haftada "<<u1.f1.get_f_adet()<<" defa futbol oynadiniz.";
			
			u1.f1.set_futbolPtr(futbol_dk_bilgisi_alma(7),7);
			cout<<endl;
			cout<<"Futbol oynayarak toplam "<<u1.f1.toplam_f_harcanan_kalori()<<" kalori harcadiniz.\n";
			//************************************************************************ //
			/*Tenis*/
			spor_bilgisi="Tennis";
			u1.t1.set_t_adet(haftada_kac_gun_spor(spor_bilgisi));
			cout<<"\n1 haftada "<<u1.t1.get_t_adet()<<" defa tenis oynadiniz.";
			
			u1.t1.set_tenisPtr(tenis_dk_bilgisi_alma(7),7);
			cout<<endl;
			cout<<"Tenis oynayarak toplam "<<u1.t1.toplam_t_harcanan_kalori()<<" kalori harcadiniz.\n";
			
			
			//************************************************************************ //
			/*Swimming*/
			
			spor_bilgisi="Swimming";
			u1.s1.set_s_adet(haftada_kac_gun_spor(spor_bilgisi));
			cout<<"\n1 haftada "<<u1.s1.get_s_adet()<<" defa yuzdunuz.";
			
			u1.s1.set_yuzmePtr(yuzme_dk_bilgisi_alma(7),7);
			cout<<endl;
			cout<<"Yuzerek toplam "<<u1.s1.toplam_s_harcanan_kalori()<<" kalori harcadiniz.\n";
			
		
			/* *********************************************************************** */
			/*Sporla toplam */
			cout<<endl;
			spor_toplam_kalori=u1.b1.toplam_harcanan_kalori()+u1.f1.toplam_f_harcanan_kalori()+u1.t1.toplam_t_harcanan_kalori()+u1.s1.toplam_s_harcanan_kalori();
			cout<<"Haftalik toplam "<<spor_toplam_kalori<<" kalori harcadiniz.";
			
			sonuc=toplam_kalori-spor_toplam_kalori;
			
			cout<<"\n1 haftada sonuclariniz: "<<sonuc;
			
			break;
			
		default:
			
			system("cls");
			cout<<"Lutfen 1-2 islemlerinden birini seciniz!!!\n";
			goto git;
			
			break;
			
	}//switch case sonu
	
	return 0;
}

