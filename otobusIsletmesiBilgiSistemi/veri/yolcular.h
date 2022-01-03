#pragma once
#include"../tanýmlar.h"

class yolcular
{
private:
	metin _mYolcuAdi;
	metin _mTCKimlikNo;
	metin _mHesKodu;
	metin _mCinsiyet;
	tamSayi _tToplamBagaj;
	tamSayi _tKoltukNo;
	metin _mTelefonNumarasi;
public:
	yolcular();
	const metin& yolcuAdi() const;
	void setYolcuAdi(const metin& yolcuAdi);
	const metin& TCKimlikNo() const;
	void setTCKimlikNo(const metin& TCKimlikNo);
	const tamSayi& toplamBagaj() const;
	void setToplamBagaj(const tamSayi& toplambagaj);
	const metin& hesKodu() const;
	void setHesKodu(const metin& hesKodu);
	const metin& cinsiyet() const;
	void setCinsiyet(const metin& cinsiyet);
	const tamSayi& koltukNo() const;
	void setKoltukNo(const tamSayi& koltukNo);
	const metin& telefonNumarasi() const;
	void setTelefonNumarasi(const metin& telefonNumarsi);

};

