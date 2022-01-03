#include "seferlerDeposu.h"
#include "../veri/seferler.h"


seferlerDeposu::seferlerDeposu() {

}


seferlerPtr seferlerDeposu::yeniSeferler() {
    return std::make_shared<seferler>();
}

void seferlerDeposu::seferlerEkle(seferlerPtr seferler)
{
    _vSeferler.push_back(seferler);
}

void seferlerDeposu::seferlerSil(seferlerVektoru::const_iterator i) {
    _vSeferler.erase(i);
}

seferlerPtr seferlerDeposu::ilkiBul(filtreFonksiyonu sart)
{
    for (auto i = _vSeferler.begin();
        i != _vSeferler.end();
        i++) {
        auto seferler = *i;
        if (sart(seferler)) {
            return seferler;
        }
    }
    throw std::exception("Sarta uygun degildir !!");
}

seferlerPtr seferlerDeposu::sonunuBul(filtreFonksiyonu sart)
{
    for (auto i = _vSeferler.rbegin();
        i != _vSeferler.rend();
        i++) {
        auto seferler = *i;
        if (sart(seferler)) {
            return seferler;
        }
    }
    throw std::exception("Sarta uygun degildir !!");
}

seferlerVektoru seferlerDeposu::tumunuBul(filtreFonksiyonu sart)
{
    seferlerVektoru sonuc;
    for (auto i = _vSeferler.rbegin();
        i != _vSeferler.rend();
        i++) {
        auto seferler = *i;
        if (sart(seferler)) {
            sonuc.push_back(seferler);
        }
    }
    return sonuc;
}




