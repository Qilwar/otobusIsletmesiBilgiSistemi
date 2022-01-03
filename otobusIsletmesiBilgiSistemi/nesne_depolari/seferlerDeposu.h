#pragma once

#include <functional>
#include"../tanýmlar.h"
class seferlerDeposu
{
private:


	seferlerVektoru _vSeferler;


public:
	seferlerDeposu();

	seferlerPtr yeniSeferler();

	void seferlerEkle(seferlerPtr sefer);

	void seferlerSil(seferlerVektoru::const_iterator i);

	typedef std::function<bool(seferlerPtr)> filtreFonksiyonu;

	seferlerPtr ilkiBul(filtreFonksiyonu sart);

	seferlerPtr sonunuBul(filtreFonksiyonu sart);

	seferlerVektoru tumunuBul(filtreFonksiyonu sart);


};
