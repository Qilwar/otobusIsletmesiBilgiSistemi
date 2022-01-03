#include "seyahatlerDeposu.h"
#include "../veri/seyahatler.h"


seyahatlerDeposu::seyahatlerDeposu() {

}


seyahatlerPtr seyahatlerDeposu::yeniSeyahat() {
	return std::make_shared<seyahatler>();
}

void seyahatlerDeposu::seyahatEkle(seyahatlerPtr seyahatler)
{
	_vSeyahat.push_back(seyahatler);
}

void seyahatlerDeposu::seyahatSil(seyahatlerVektoru::const_iterator i) {
	_vSeyahat.erase(i);
}

seyahatlerPtr seyahatlerDeposu::ilkiBul(filtreFonksiyonu sart)
{
	for (auto i = _vSeyahat.begin();
		i != _vSeyahat.end();
		i++) {
		auto seyahatler = *i;
		if (sart(seyahatler)) {
			return seyahatler;
		}
	}
}

seyahatlerPtr seyahatlerDeposu::sonunuBul(filtreFonksiyonu sart)
{
	for (auto i = _vSeyahat.rbegin();
		i != _vSeyahat.rend();
		i++) {
		auto seyahatler = *i;
		if (sart(seyahatler)) {
			return seyahatler;
		}
	}
	throw std::exception("Sarta uygun degil!!");
}

seyahatlerVektoru seyahatlerDeposu::tumunuBul(filtreFonksiyonu sart)
{
	seyahatlerVektoru sonuc;
	for (auto i = _vSeyahat.rbegin();
		i != _vSeyahat.rend();
		i++) {
		auto seyahat = *i;
		if (sart(seyahat)) {
			sonuc.push_back(seyahat);
		}
	}
	return sonuc;
}