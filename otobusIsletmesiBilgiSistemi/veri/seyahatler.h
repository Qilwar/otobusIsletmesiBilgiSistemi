#pragma once
#include"../tanımlar.h"
class seyahatler
{
private:

	metin _mSeferNo;
	metin _mIsim;
	metin _mTCKimlikNo;
	metin _mOtobusPlakası;
	tamSayi _tKoltukSayisi;
public:
	seyahatler();
	const metin& seferNo() const;
	void setSeferNo(const metin& seferNo);
	const metin& isim() const;
	void setIsim(const metin& isim);
	const metin& TCKimlikNo() const;
	void setTCKimlikNo(const metin& TCKimlikNo);
	const metin& otobusPlakası() const;
	void setOtobusPlakası(const metin& otobusPlakası);
	const tamSayi& koltukSayisi() const;
	void setKoltukSayisi(const tamSayi& koltukSayisi);


};