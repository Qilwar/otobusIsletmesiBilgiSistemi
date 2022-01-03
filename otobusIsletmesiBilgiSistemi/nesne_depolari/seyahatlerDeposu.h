#pragma once
#ifndef OTOBUSISLETMESIBILDGISISTEMI_SEYAHATLERDEPOSU_H
#define OTOBUSISLETMESIBILDGISISTEMI_SEYAHATLERDEPOSU_H


//#include"seyahatlerDeposu.h"
//#include"../veri/seyahatler.h"

#include"../tanýmlar.h"
#include <functional>
class seyahatlerDeposu
{
private:

	seyahatlerVektoru _vSeyahat;


public:
	seyahatlerDeposu();

	seyahatlerPtr yeniSeyahat();
	void seyahatEkle(seyahatlerPtr seyahatler);
	void seyahatSil(seyahatlerVektoru::const_iterator i);

	typedef std::function<bool(seyahatlerPtr)> filtreFonksiyonu;

	seyahatlerPtr ilkiBul(filtreFonksiyonu sart);


	seyahatlerPtr sonunuBul(filtreFonksiyonu sart);


	seyahatlerVektoru tumunuBul(filtreFonksiyonu sart);


};
#endif // otobusIsletmesiBilgiSistemi_seyahatlerDeposu_h

