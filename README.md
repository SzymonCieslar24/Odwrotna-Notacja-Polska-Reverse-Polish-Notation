#     PL     #
Odwrotna Notacja Polska (ONP) <br>
Program służący do zamiany wyrażeń arytmetycznych (infix np. (2+3)^5) na wyrażenia w zapisie odwrotnej notacji polskiej (postfix np. 2 3 + 5 ^) oraz obliczenia ich wartości. Uruchamiany z linii poleceń z następującymi przełącznikami: <br>
-i plik wejściowy zawierający wyrażenia arytmetyczne, <br>
-o plik wyjściowy zawierający wyrażenia w ONP, <br>
-w plik wyjściowy zawierający obliczone wartości wyrażeń. <br>
Uruchomienie programu bez przełączników powoduje wypisanie krótkiej informacji o tym, jak użyć programu.
Przykładowa komenda kompilująca program: <br>
g++.exe -o dowolnanazwa.exe main.cpp <br>
Przykładowa komenda umożliwiająca prawidłowe uruchomienie programu: <br>
.\dowolnanazwa.exe -i wyrażenia.txt -o wyrazeniaONP.txt -w wartości.txt <br>
W załączonym pliku example.txt znajdują się przykładowe dane zawierające wyrażenia arytmetyczne.
#     ENG     #
Reverse Polish Notation (RPN) <br>
A program for converting arithmetic expressions (infix, e.g. (2+3)^5) into expressions in reverse Polish notation (postfix, e.g. 2 3 + 5 ^) and calculating their values. Launched from the command line with the following switches: <br>
-i input file containing arithmetic expressions, <br>
-o output file containing expressions in RPN, <br>
-w output file containing calculated values of expressions. <br>
Running the program without switches prints a brief description of how to use the program.
An example command to compile the program: <br>
g++.exe -o anyname.exe main.cpp <br>
An example command that allows the program to run correctly: <br>
.\anyname.exe -i expressions.txt -o expressionsRPN.txt -w values.txt <br>
The attached example.txt file contains sample data containing arithmetic expressions.
