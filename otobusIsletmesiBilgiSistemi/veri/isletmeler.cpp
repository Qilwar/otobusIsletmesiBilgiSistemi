
#include "isletmeler.h"
isletmeler::isletmeler() {
	_mFirmaAdi = "";
	_tAracSayisi = 0;
	_tPersonelSayisi = 0;
	_mTelefonNumarasi = "";
}

const metin& isletmeler::firmaAdi() const {
	return _mFirmaAdi;
}

void isletmeler::setFirmaAdi(const metin& firmaAdi)
{
	if (firmaAdi.empty()) {
		return;
	}
	_mFirmaAdi = firmaAdi;
}

const tamSayi& isletmeler::aracSayisi() const
{
	return _tAracSayisi;
}

void isletmeler::setAracSayisi(const tamSayi& aracSayisi)
{
	if (aracSayisi > 0) {
		return;
	}
	_tAracSayisi = aracSayisi;
}

const tamSayi& isletmeler::personelSayisi() const
{
	return _tPersonelSayisi;
}

void isletmeler::setPersonelSayisi(const tamSayi& personelSayisi)
{
	if (personelSayisi > 0) {
		return;
	}
	_tPersonelSayisi = personelSayisi;
}

const metin& isletmeler::telefonNumarasi() const
{
	return _mTelefonNumarasi;
}

void isletmeler::setTelefonNumarasi(const metin& telefonNumarsi)
{
	if (telefonNumarsi.empty()) {
		return;
	}
	_mTelefonNumarasi= telefonNumarsi;

}


