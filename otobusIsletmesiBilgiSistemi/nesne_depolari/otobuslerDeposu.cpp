#include "otobuslerDeposu.h"
#include "../veri/otobusler.h"
otobuslerDeposu::otobuslerDeposu()
{
}

otobuslerPtr otobuslerDeposu::yeniOtobus()
{
	return std::make_shared<otobusler>();
}

void otobuslerDeposu::otobusEkle(otobuslerPtr otobusler)
{
	_vOtobus.push_back(otobusler);
}

void otobuslerDeposu::otobusSil(otobuslerVektoru::const_iterator i)
{
	_vOtobus.erase(i);
}

otobuslerPtr otobuslerDeposu::ilkiBul(filtreFonksiyonu sart)
{
	for (auto i = _vOtobus.begin();
		i != _vOtobus.end();
		i++) {
		auto otobusler = *i;
		if (sart(otobusler)) {
			return otobusler;
		}
	}
}

otobuslerPtr otobuslerDeposu::sonunuBul(filtreFonksiyonu sart)
{
	for (auto i = _vOtobus.rbegin();
		i != _vOtobus.rend();
		i++) {
		auto otobusler = *i;
		if (sart(otobusler)) {
			return otobusler;
		}
	}
	throw std::exception("Sarta uygun degil!!");
}

otobuslerVektoru otobuslerDeposu::tumunuBul(filtreFonksiyonu sart)
{
	otobuslerVektoru sonuc;
	for (auto i = _vOtobus.rbegin();
		i != _vOtobus.rend();
		i++) {
		auto otobus = *i;
		if (sart(otobus)) {
			sonuc.push_back(otobus);
		}
	}
	return sonuc;
}
