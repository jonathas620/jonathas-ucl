#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	char letras[9][4] = { { 'a', 'b', 'c' }, {'d', 'e', 'f' }, {'g', 'h','i' }, {'j','k','l' }, {'m','n','o' }, {'p','q','r','s' }, {'t','u','v' }, {'w','x','y','z' } };

	while (true)
	{

		std::string entrada;
		std::cin >> entrada;
		int numeroLetras = stoi(entrada);
		int i;
		const int size = numeroLetras;
		std::vector<std::string> entradas(size);

		for (i = 0; i < numeroLetras; i++)
		{
			std::cin >> entradas[i];
		}

		std::string saida;

		for (i = 0; i < numeroLetras; i++)
		{
			std::string s0 = entradas[i];
			int pos1 = s0[1] - '0';
			int pos2 = s0[3] - '0';

			saida = saida + letras[pos1 - 2][pos2 - 1];
		}

		std::cout << saida << "\n";
	}
}