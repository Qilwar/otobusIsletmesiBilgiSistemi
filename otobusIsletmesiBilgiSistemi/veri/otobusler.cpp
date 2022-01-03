#include "otobusler.h"

otobusler::otobusler(){
	_mAracMarkasıVeModeli = "";
	_mRenk = "";
	_mOtobusPlakasi="";
	_tYolcuKapasitesi=0;
	_tAracYasi=0;
	_tBagajKapasitesi=0;
}

const metin& otobusler::aracMarkasiVeModeli() const
{
	return _mAracMarkasıVeModeli;
}

void otobusler::setAracMArkasi(const metin& aracMArkasiVeModeli)
{
	if (aracMArkasiVeModeli.empty()) {
		return;
	}
	_mAracMarkasıVeModeli = aracMArkasiVeModeli;
}

const metin& otobusler::renk() const
{
	return _mRenk;
}

void otobusler::setRenk(const metin& renk)
{
	if (renk.empty()) {
		return;
	}
	_mRenk = renk;
}

const metin& otobusler::otobusPlakasi() const
{
	return _mOtobusPlakasi;
}

void otobusler::setOtobusPlakasi(const metin& otobuPilakasi)
{
	if (otobuPilakasi.empty()) {
		return;
	}
	_mOtobusPlakasi = otobuPilakasi;
}

const tamSayi& otobusler::yolcuKapasitesi() const
{
	return _tYolcuKapasitesi;
}

void otobusler::setolcuKapasitesi(const tamSayi& yolcuKapasitesi)
{
	if (yolcuKapasitesi >= 0) {
		return;
	}
	_tYolcuKapasitesi = yolcuKapasitesi;
}

const tamSayi& otobusler::aracYasi() const
{	
	return _tAracYasi;
}

void otobusler::setAracYasi(const tamSayi& aracYasi)
{
	if (aracYasi > 0) {
		return;
	}
	_tAracYasi = aracYasi;
}

const tamSayi& otobusler::bagajKapasitesi() const
{
	return _tBagajKapasitesi;
}

void otobusler::setBagajKapasitesi(const tamSayi& bagajKapasitesi)
{
	if (bagajKapasitesi > 0) {
		return;
	}
	_tBagajKapasitesi = bagajKapasitesi;
}
