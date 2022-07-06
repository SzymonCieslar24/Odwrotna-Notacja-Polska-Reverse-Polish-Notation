#include <stack>
#include <cmath>

#include "funkcje.h"

int priorytet(char znak) {
	if (znak == '^')
		return 4;
	else if (znak == '/' or znak == '*')
		return 3;
	else if (znak == '+' or znak == '-')
		return 2;
	else
		return 1;
}

std::string zmiananaONP(std::string wyrazenie) {
	std::stack<int>stos;
	std::string wynik;
	std::string tmp;
	for (int i = 0; i < wyrazenie.length(); i++)
	{
		if (wyrazenie[i] >= '0' && wyrazenie[i] <= '9' && wyrazenie[i + 1] >= '0' && wyrazenie[i + 1] <= '9')
			tmp += wyrazenie[i];
		else if (wyrazenie[i] >= '0' && wyrazenie[i] <= '9') {
			wynik += tmp;
			wynik += wyrazenie[i];
			wynik += ' ';
			tmp = "";
		}
		else if (wyrazenie[i] == ' ')
			continue;
		else if (wyrazenie[i] == '(')
			stos.push('(');
		else if (wyrazenie[i] == ')') {
			while (stos.top() != '(')
			{
				wynik += stos.top();
				wynik += ' ';
				stos.pop();
			}
			stos.pop();
		}
		else if (wyrazenie[i] == '+' || wyrazenie[i] == '-' || wyrazenie[i] == '*' || wyrazenie[i] == '/' || wyrazenie[i] == '^') {
			while (!stos.empty() && priorytet(wyrazenie[i]) <= priorytet(stos.top())) {
				wynik += stos.top();
				wynik += ' ';
				stos.pop();
			}
			stos.push(wyrazenie[i]);
		}
		else
			wynik = "Niepoprawne wyra¿enie";
	}
	while (!stos.empty()) {
		wynik += stos.top();
		stos.pop();
	}
	return wynik;
}

int kalkulatorONP(std::string wyrazenie) {
	std::stack<int>stos;
	int wynik = 0;
	std::string tmp;
	int x = 0;
	for (int i = 0; i < wyrazenie.length(); i++)
	{
		int a{};
		int	b{};
		if (wyrazenie[i] >= '0' && wyrazenie[i] <= '9' && wyrazenie[i + 1] >= '0' && wyrazenie[i + 1] <= '9')
			tmp += wyrazenie[i];
		else if (wyrazenie[i] >= '0' && wyrazenie[i] <= '9') {
			tmp += wyrazenie[i];
			x = std::stoi(tmp);
			stos.push(x);
			tmp = "";
		}
		else if (wyrazenie[i] == ' ')
			continue;
		else if (wyrazenie[i] == '+' || wyrazenie[i] == '-' || wyrazenie[i] == '*' || wyrazenie[i] == '/' || wyrazenie[i] == '^')
		{
			b = stos.top();
			stos.pop();
			a = stos.top();
			stos.pop();
			switch (wyrazenie[i])
			{
			case '+':
			{
				stos.push(a + b);
				break;
			}
			case '-':
			{
				stos.push(a - b);
				break;
			}
			case '*':
			{
				stos.push(a * b);
				break;
			}
			case '/':
			{
				if (b != 0) {
					stos.push(a / b);
					break;
				}
				else
					return 0;

			}
			case '^':
			{
				stos.push(pow(a, b));
				break;
			}
			}
		}
		else
			return 0;
	}
	wynik = stos.top();
	return wynik;
}