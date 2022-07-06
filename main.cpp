#include <iostream>
#include <fstream>

#include "funkcje.h"

int main(int argc, char* argv[])
{
	std::string plik_odp_1, plik_odp_2, plik_wej;
	if (argc > 1) {
		if (argc == 7) {
			for (int i = 1; i < argc; i++) {
				std::string a = argv[i];
				if (a == "-i" && argv[i + 1])
					plik_wej = argv[i + 1];
				else if (a == "-o" && argv[i + 1])
					plik_odp_1 = argv[i + 1];
				else if (a == "-w" && argv[i + 1])
					plik_odp_2 = argv[i + 1];
			}
			std::ofstream wyj_1(plik_odp_1);
			std::ofstream wyj_2(plik_odp_2);
			std::ifstream wej(plik_wej);
			if (wej)
			{
				std::string wiersz;
				do
				{
					getline(wej, wiersz);
					if (wyj_1)
						wyj_1 << zmiananaONP(wiersz) << std::endl;
					else
						std::cout << "Nie udalo sie otworzyc pierwszego pliku wyjsciowego." << std::endl;
					if (wyj_2)
						wyj_2 << kalkulatorONP(zmiananaONP(wiersz)) << std::endl;
					else
						std::cout << "Nie udalo sie otworzyc drugiego pliku wyjsciowego." << std::endl;
				} while (not wej.eof());
			}
			else
				std::cout << "Nie udalo sie otworzyc pliku wejsciowego." << std::endl;
			wej.close();
			wyj_1.close();
			wyj_2.close();
		}
		else
			std::cout << "Podaj wszystkie nazwy plikow" << std::endl;
	}
	else
		std::cout << "Aby uruchomic program w wierszu polecen uzyj odpowiednich przelacznikow: \n-i plik wejsciowy zawirajacy wyrazenia arytmetyczne \n-o plik wyjsciowy zawierajacy wyrazenia w ONP \n-w plik wyjsciowy zawierajacy wartosci wyrazen \nnp. program -i wyrazenia.txt -o wyrazeniaONP.txt -w wartosci.txt." << std::endl;
}