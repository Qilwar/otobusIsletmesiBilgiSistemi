#pragma once
#ifndef OTOBUSISLETMESIBILDGISISTEMI_ISLETMELERDEPOSU_H
#define OTOBUSISLETMESIBILDGISISTEMI_ISLETMELERDEPOSU_H


//#include"isletmelerDeposu.h"
//#include"../veri/isletmeler.h"

#include"../tanýmlar.h"
#include <functional>
class isletmelerDeposu
{
private:

	isletmelerVektoru _vIsletme;

		
public:
	isletmelerDeposu();

	isletmelerPtr yeniIsletme();
	void isletmeEkle(isletmelerPtr isletmeler);
	void isletmeSil(isletmelerVektoru::const_iterator i);

	typedef std::function<bool(isletmelerPtr)> filtreFonksiyonu;

	isletmelerPtr ilkiBul(filtreFonksiyonu sart);


	isletmelerPtr sonunuBul(filtreFonksiyonu sart);


	isletmelerVektoru tumunuBul(filtreFonksiyonu sart);


};
#endif // otobusIsletmesiBilgiSistemi_isletmelerDeposu_h
