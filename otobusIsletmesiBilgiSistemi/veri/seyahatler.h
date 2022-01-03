#pragma once
#include"../tan�mlar.h"
class seyahatler
{
private:

	metin _mSeferNo;
	metin _mIsim;
	metin _mTCKimlikNo;
	metin _mOtobusPlakas�;
	tamSayi _tKoltukSayisi;
public:
	seyahatler();
	const metin& seferNo() const;
	void setSeferNo(const metin& seferNo);
	const metin& isim() const;
	void setIsim(const metin& isim);
	const metin& TCKimlikNo() const;
	void setTCKimlikNo(const metin& TCKimlikNo);
	const metin& otobusPlakas�() const;
	void setOtobusPlakas�(const metin& otobusPlakas�);
	const tamSayi& koltukSayisi() const;
	void setKoltukSayisi(const tamSayi& koltukSayisi);


};