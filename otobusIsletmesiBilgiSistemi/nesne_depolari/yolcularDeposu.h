#pragma once
#ifndef OTOBUSISLETMESIBILDGISISTEMI_YOLCULARDEPOSU_H
#define OTOBUSISLETMESIBILDGISISTEMI_YOLCULARDEPOSU_H



#include"../tanýmlar.h"
#include <functional>
class yolcularDeposu
{
private:


	yolcularVektoru _vYolcular;


public:
	yolcularDeposu();

	yolcularPtr yeniYolcular();
	void yolcularEkle(yolcularPtr yolcular);
	void yolcularSil(yolcularVektoru::const_iterator i);
	typedef std::function<bool(yolcularPtr)> filtreFonksiyonu;

	yolcularPtr ilki_bul(filtreFonksiyonu sart);

	yolcularPtr sonu_bul(filtreFonksiyonu sart);

	yolcularVektoru tumunu_bul(filtreFonksiyonu sart);


};
#endif // otobusIsletmesiBilgiSistemi_yolcularDeposu_h
