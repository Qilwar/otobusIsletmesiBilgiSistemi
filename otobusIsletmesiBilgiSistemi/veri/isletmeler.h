#pragma once
#include"../tanýmlar.h"

class isletmeler
{private:

	metin _mFirmaAdi;
	tamSayi _tAracSayisi;
	tamSayi _tPersonelSayisi;
	metin _mTelefonNumarasi;
public:
	isletmeler();
	const metin& firmaAdi() const;
	void setFirmaAdi(const metin& firmaAdi);
	const tamSayi& aracSayisi() const;
	void setAracSayisi(const tamSayi& aracSayisi);
	const tamSayi& personelSayisi() const;
	void setPersonelSayisi(const tamSayi& personelSayisi);
	const metin& telefonNumarasi() const;
	void setTelefonNumarasi(const metin& telefonNumarsi);

};

