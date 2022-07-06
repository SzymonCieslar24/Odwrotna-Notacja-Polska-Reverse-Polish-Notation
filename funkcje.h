/**@file*/
#ifndef FUNKCJE_H
#define FUNKJCE_H
#include <string>
/**@brief
*	Funkcja okreœla i zwraca priorytet danego operatora arytmetycznego.
*	@param znak Operator arytmetyczny którego priorytet chcemy ustaliæ.
*/
int priorytet(char znak);

/**@brief
*	Funkcja oblicza i zwraca wartoœæ danego wyra¿enia podanego w Odwrotnej Notacji Polskiej.
*	@param wyrazenie Zapisane w Odwrotnej Notacji Polskiej wyra¿enie którego wartoœæ obliczamy.
*/

int kalkulatorONP(std::string wyrazenie);

/**@brief
*	Funkcja przekszta³ca i zwraca wyra¿enie arytmetyczne na wyra¿enie w Odwrotnej Notacji Polskiej.
*	@param wyrazenie Wyra¿enie arytmetyczne które ma zostaæ przekszta³cone do wyra¿enia w Odwrotnej Notacji Polskiej.
*/
std::string zmiananaONP(std::string wyrazenie);

#endif