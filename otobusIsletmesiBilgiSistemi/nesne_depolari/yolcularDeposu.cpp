#include "yolcularDeposu.h"
#include "../veri/yolcular.h"


yolcularDeposu::yolcularDeposu() {

}


yolcularPtr yolcularDeposu::yeniYolcular() {
    return std::make_shared<yolcular>();
}

void yolcularDeposu::yolcularEkle(yolcularPtr yolcular)
{
    _vYolcular.push_back(yolcular);
}

void yolcularDeposu::yolcularSil(yolcularVektoru::const_iterator i)
{_vYolcular.erase(i);
}
    

    yolcularPtr yolcularDeposu::ilki_bul(filtreFonksiyonu sart)
    {
        for (auto i = _vYolcular.begin();
            i != _vYolcular.end();
            i++) {
            auto yolcular = *i;
            if (sart(yolcular)) {
                return yolcular;
            }
        }
        throw std::exception("Sarta uygun yolcu bulunamadi!");
    }

    yolcularPtr yolcularDeposu::sonu_bul(filtreFonksiyonu sart)
    {
        for (auto i = _vYolcular.rbegin();
            i != _vYolcular.rend();
            i++) {
            auto yolcular = *i;
            if (sart(yolcular)) {
                return yolcular;
            }
        }
        throw std::exception("Sarta uygun yolcu bulunamadi!");
    }

    yolcularVektoru yolcularDeposu::tumunu_bul(filtreFonksiyonu sart)
    {
        yolcularVektoru sonuc;
        for (auto i = _vYolcular.rbegin();
            i != _vYolcular.rend();
            i++) {
            auto yolcular = *i;
            if (sart(yolcular)) {
                sonuc.push_back(yolcular);
            }
        }
        return sonuc;
    }
