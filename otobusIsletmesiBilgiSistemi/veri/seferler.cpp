#include"seferler.h"

seferler::seferler() {
	_mRota = "";
	_mHavaDurumu = "";
	_mTarih = "";
	_tSaat = 0;
	_tYolculukSuresi = 0;
	_tUcret = 0;
	_mKalkisYeri = "";
	_mMolaSayisi = "";
	_mVarisYeri = "";
	_mSeferNo = "";
}

const metin& seferler::rota() const {
	return _mRota;
}

void seferler::setRota(const metin& rota)
{
	if (rota.empty()) {
		return;
	}
	_mRota= rota;
}
  
const metin& seferler::havaDurumu() const {
	return _mHavaDurumu;
}

void seferler::setHavaDurumu(const metin& havaDurumu)
{
	if (havaDurumu.empty()) {
		return;
	}
	_mHavaDurumu = havaDurumu;
}



const metin& seferler::tarih() const
{
	return _mTarih;
}

void seferler::setTarih(const tamSayi& tarih)
{
	if (tarih > 0) {
		return;
	}
	_mTarih = tarih;
}

const tamSayi& seferler::saat() const
{
	return _tSaat;
}

void seferler::setSaat(const tamSayi& saat)
{
	if (saat > 0) {
		return;
	}
	_tSaat = saat;
}

const metin& seferler::kalkisYeri() const
{
	return _mKalkisYeri;
}

void seferler::setKalkisYeri(const metin& kalkisYeri)
{
	if (kalkisYeri.empty()) {
		return;
	}
	_mKalkisYeri = kalkisYeri;

}

const metin& seferler::molaSayisi() const
{
	return _mMolaSayisi;
}

void seferler::setMolaSayisi(const metin& molaSayisi)
{
	if (molaSayisi.empty()) {
		return;
	}
	_mMolaSayisi = molaSayisi;

}
const metin& seferler::varisYeri() const
{
	return _mVarisYeri;
}

void seferler::setVarisYeri(const metin& varisYeri)
{
	if (varisYeri.empty()) {
		return;
	}
	_mVarisYeri = varisYeri;

}

const metin& seferler::seferNo() const
{
	return _mSeferNo;
}

void seferler::setSeferNo(const metin& seferNo)
{
	if (seferNo.empty()) {
		return;
	}
	_mSeferNo = seferNo;

}

const tamSayi& seferler::yolculukSuresi() const
{
	return _tYolculukSuresi;
}

void seferler::setYolculukSuresi(const tamSayi& yolculukSuresi)
{
	if (yolculukSuresi > 0) {
		return;
	}
	_tYolculukSuresi = yolculukSuresi;
}

const tamSayi& seferler::ucret() const
{
	return _tUcret;
}

void seferler::setUcret(const tamSayi& ucret)
{
	if (ucret > 0) {
		return;
	}
	_tUcret = ucret;
}