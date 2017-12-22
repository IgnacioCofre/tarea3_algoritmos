#include <string>
#include <sstream>
#include<iostream>

int max(int a, int b)								//Retorna el int más grande (Gracias google por la idea)
	{
	return (a > b)? a:b;
	}


/*S[0 .. n-1]      m->     <-n*/
int LongestPalindrome(char *S, int n, int L, int R)	//Recibe el String, el largo del string original, posicion del puntero izquierdo, posicion del puntero derecho
	{
	if (L == n || R == 0)							//Si el izquierdo llega al final, o el derecho al inicio, end
		{
		return 0;
		}
	if (S[R-1] == S[L-1])							//Si son iguales se avanza (recordar matriz)
		return 1 + LongestPalindrome(S, n, L+1, R-1);
	else  											//sino, el máximo entre los otros 2 caminos
		return max(LongestPalindrome(S, n, L+1, R), LongestPalindrome(S, n, L, R-1));
	}



int main(){
	std::ios::sync_with_stdio(false);
	std::string input;								//String (Arreglar para q sea largo dinamico)
	//int n;											//Largo String
    while (std::getline(std::cin, input)){ 	//Loop hasta el EOF
        std::stringstream stream(input);
		std::cout << input<<"\n";
		}
	return 0;
}
