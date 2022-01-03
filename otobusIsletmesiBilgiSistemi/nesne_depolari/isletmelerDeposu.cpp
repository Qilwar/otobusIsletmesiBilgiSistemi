#include "isletmelerDeposu.h"
#include "../veri/isletmeler.h"


isletmelerDeposu::isletmelerDeposu() {

}


isletmelerPtr isletmelerDeposu::yeniIsletme() {
	return std::make_shared<isletmeler>();
}

void isletmelerDeposu::isletmeEkle(isletmelerPtr isletmeler)
{
	_vIsletme.push_back(isletmeler);
}

void isletmelerDeposu::isletmeSil(isletmelerVektoru::const_iterator i) {
	_vIsletme.erase(i);
}

isletmelerPtr isletmelerDeposu::ilkiBul(filtreFonksiyonu sart)
{
	for (auto i = _vIsletme.begin();
		i != _vIsletme.end();
		i++) {
		auto isletmeler = *i;
		if (sart(isletmeler)) {
			return isletmeler;
		}
	}
}

isletmelerPtr isletmelerDeposu::sonunuBul(filtreFonksiyonu sart)
{
	for (auto i = _vIsletme.rbegin();
		i != _vIsletme.rend();
		i++) {
		auto isletmeler = *i;
		if (sart(isletmeler)) {
			return isletmeler;
		}
	}
	throw std::exception("Sarta uygun degil!!");
}

isletmelerVektoru isletmelerDeposu::tumunuBul(filtreFonksiyonu sart)
{
	isletmelerVektoru sonuc;
	for (auto i = _vIsletme.rbegin();
		i != _vIsletme.rend();
		i++) {
		auto isletme = *i;
		if (sart(isletme)) {
			sonuc.push_back(isletme);
		}
	}
	return sonuc;
}
