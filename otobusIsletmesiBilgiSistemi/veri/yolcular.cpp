#include "yolcular.h"
yolcular::yolcular() {
	_mYolcuAdi = "";
	_mTCKimlikNo = "";
	_tToplamBagaj = 0;
	_tKoltukNo = 0;
	_mTelefonNumarasi = "";
	_mHesKodu = "";
	_mCinsiyet = "";
}

const metin& yolcular::yolcuAdi() const {
	return _mYolcuAdi;
}

void yolcular::setYolcuAdi(const metin& yolcuAdi)
{
	if (yolcuAdi.empty()) {
		return;
	}
	_mYolcuAdi= yolcuAdi;
}
  
const metin& yolcular::TCKimlikNo() const {
	return _mTCKimlikNo;
}

void yolcular::setTCKimlikNo(const metin& TCKimlikNo)
{
	if (TCKimlikNo.empty()) {
		return;
	}
	_mTCKimlikNo = TCKimlikNo;
}



const tamSayi& yolcular::toplamBagaj() const
{
	return _tToplamBagaj;
}

void yolcular::setToplamBagaj(const tamSayi& toplamBagaj)
{
	if (toplamBagaj > 0) {
		return;
	}
	_tToplamBagaj = toplamBagaj;
}

const tamSayi& yolcular::koltukNo() const
{
	return _tKoltukNo;
}

void yolcular::setKoltukNo(const tamSayi& koltukNo)
{
	if (koltukNo > 0) {
		return;
	}
	_tKoltukNo = koltukNo;
}

const metin& yolcular::telefonNumarasi() const
{
	return _mTelefonNumarasi;
}

void yolcular::setTelefonNumarasi(const metin& telefonNumarsi)
{
	if (telefonNumarsi.empty()) {
		return;
	}
	_mTelefonNumarasi = telefonNumarsi;

}

const metin& yolcular::hesKodu() const
{
	return _mHesKodu;
}

void yolcular::setHesKodu(const metin& hesKodu)
{
	if (hesKodu.empty()) {
		return;
	}
	_mHesKodu = hesKodu;

}
const metin& yolcular::cinsiyet() const
{
	return _mCinsiyet;
}

void yolcular::setCinsiyet(const metin& cinsiyet)
{
	if (cinsiyet.empty()) {
		return;
	}
	_mCinsiyet = cinsiyet;

}