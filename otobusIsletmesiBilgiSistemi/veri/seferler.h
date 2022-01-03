#pragma once
#include"../tanýmlar.h"

class seferler
{
private:
	metin _mRota;
	metin _mHavaDurumu;
	metin _mKalkisYeri;
	metin _mMolaSayisi;
	metin _mVarisYeri;
	metin _mSeferNo;
	metin _mTarih;
	tamSayi _tSaat;
	tamSayi _tYolculukSuresi;
	tamSayi _tUcret;
public:

	seferler();
	const metin& rota() const;
	void setRota(const metin& rota);
	const metin& havaDurumu() const;
	void setHavaDurumu(const metin& havaDurumu);
	const metin& tarih() const;
	void setTarih(const tamSayi& tarih);
	const metin& kalkisYeri() const;
	void setKalkisYeri(const metin& kalkisYeri);
	const metin& molaSayisi() const;
	void setMolaSayisi(const metin& molaSayisi);
	const tamSayi& saat() const;
	void setSaat(const tamSayi& saat);
	const metin& varisYeri() const;
	void setVarisYeri(const metin& varisYeri);
	const metin& seferNo() const;
	void setSeferNo(const metin& seferNo);
	const tamSayi& yolculukSuresi() const;
	void setYolculukSuresi(const tamSayi& yolculukSuresi);
	const tamSayi& ucret() const;
	void setUcret(const tamSayi& ucret);

};

