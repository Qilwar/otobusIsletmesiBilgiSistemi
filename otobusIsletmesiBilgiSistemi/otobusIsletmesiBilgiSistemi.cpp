
#include <iostream>
#include <vector>
#include "veri/isletmeler.h"
#include "nesne_depolari/isletmelerDeposu.h"

void isletmelerDeposuKullanimi() {
	auto isletme = isletmelerDeposu();
	std::cout << "Isletme olusturuldu." << std::endl;
}

int main()
{
	isletmelerDeposuKullanimi();
}

