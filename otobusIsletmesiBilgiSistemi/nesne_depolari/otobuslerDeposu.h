
#pragma once

#include"../tanýmlar.h" 
#include <functional>
class otobuslerDeposu {
private:

	otobuslerVektoru _vOtobus;
public:
	otobuslerDeposu();

	otobuslerPtr yeniOtobus();
	void otobusEkle(otobuslerPtr otobusler);
	void otobusSil(otobuslerVektoru::const_iterator i);

	typedef std::function<bool(otobuslerPtr)> filtreFonksiyonu;

	otobuslerPtr ilkiBul(filtreFonksiyonu sart);

	otobuslerPtr sonunuBul(filtreFonksiyonu sart);
	 
	otobuslerVektoru tumunuBul(filtreFonksiyonu sart);




};
