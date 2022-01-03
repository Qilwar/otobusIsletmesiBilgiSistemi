#pragma once
#include <string>
#include <memory>



typedef int tamSayi;
typedef std::string metin;

class isletmeler;
class otobusler;
class seferler;
class yolcular;
class seyahatler;


typedef std::shared_ptr<isletmeler> isletmelerPtr;
typedef std::shared_ptr<otobusler> otobuslerPtr;
typedef std::shared_ptr<seferler> seferlerPtr;
typedef std::shared_ptr<yolcular> yolcularPtr;
typedef std::shared_ptr<seyahatler> seyahatlerPtr;

#include<vector>
typedef std::vector<isletmelerPtr> isletmelerVektoru;
typedef std::vector<otobuslerPtr> otobuslerVektoru;
typedef std::vector<seferlerPtr> seferlerVektoru;
typedef std::vector<yolcularPtr> yolcularVektoru;
typedef std::vector<seyahatlerPtr> seyahatlerVektoru;