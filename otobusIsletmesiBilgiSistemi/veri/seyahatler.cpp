#include"seyahatler.h"
seyahatler::seyahatler() {
	 _mSeferNo="";
	 _mIsim="";
	 _mTCKimlikNo="";
	 _mOtobusPlakası="";
	 _tKoltukSayisi=0;
}
const metin& seyahatler::seferNo() const
{
	return _mSeferNo;
}

void seyahatler::setSeferNo(const metin& seferNo)
{
	if (seferNo.empty()) {
		return;
	}
	_mSeferNo = seferNo;
}

const metin& seyahatler::isim() const
{
	return _mIsim;
}

void seyahatler::setIsim(const metin& isim)
{
	if (isim.empty()) {
		return;
	}
	_mIsim = isim;
}

const metin& seyahatler::TCKimlikNo() const
{
	return _mTCKimlikNo;
}

void seyahatler::setTCKimlikNo(const metin& TCKimlikNo)
{
	if (TCKimlikNo.empty()) {
		return;
	}
	_mTCKimlikNo = TCKimlikNo;
}

const metin& seyahatler::otobusPlakası() const
{
	return _mOtobusPlakası;
}

void seyahatler::setOtobusPlakası(const metin& otobusPlakası)
{
	if (otobusPlakası.empty()) {
		return;
	}
	_mOtobusPlakası = otobusPlakası;
}

const tamSayi& seyahatler::koltukSayisi() const
{
	return _tKoltukSayisi;
}

void seyahatler::setKoltukSayisi(const tamSayi& koltukSayisi)
{

}
