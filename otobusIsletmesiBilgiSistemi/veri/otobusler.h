#pragma once
#include"../tanýmlar.h"
class otobusler
{
private:

	metin _mAracMarkasýVeModeli;
	metin _mRenk;
	metin _mOtobusPlakasi;
	tamSayi _tYolcuKapasitesi;
	tamSayi _tAracYasi;
	tamSayi _tBagajKapasitesi;
public:
	otobusler();
	const metin& aracMarkasiVeModeli() const;
	void setAracMArkasi(const metin& aracMArkasiVeModeli);
	const metin& renk() const;
	void setRenk(const metin& renk);
	const metin& otobusPlakasi() const;
	void setOtobusPlakasi(const metin& otobuPlakasi);
	const tamSayi& yolcuKapasitesi() const;
	void setolcuKapasitesi(const tamSayi& yolcuKapasitesi);
	const tamSayi& aracYasi() const;
	void setAracYasi(const tamSayi& aracSayisi);
	const tamSayi& bagajKapasitesi() const;
	void setBagajKapasitesi(const tamSayi& bagajKapasitesi);

};
