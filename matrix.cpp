#include <string>
#include <sstream>
#include <iostream>
using namespace std;

int max(int a, int b)					//Retorna el int más grande (Gracias google por la idea)
	{
	return (a > b)? a:b;
	}

/*S[0 .. n-1]      L->     <-R*/
int LongestPalindrome(string S, int n)	//Recibe el String, el largo del string original + 1
	{
	int M[n][2];						//Se almacenan los datos en 2 arreglos de tamaño n (Uso de memoria O(n))
	int L, R;
	for (R=n; R>0; R--)
		{
		for (L=0; L<n; L++)
			{
			if (R%2 == 0)				//El modulo se utiliza para decidir cual arreglo usar
				{
				if (L == 0 || R == n)
					M[L][0] = 0;
				else if (S[R-1] == S[L-1])
					M[L][0] = M[L-1][1] + 1;
				else
					M[L][0] = max(M[L-1][0], M[L][1]);
				}
			else
				{	
				if (L == 0 || R == n)
					M[L][1] = 0;
				else if (S[R-1] == S[L-1])
					M[L][1] = M[L-1][0] + 1;
				else
					M[L][1] = max(M[L-1][1], M[L][0]);
				}
			}
		}
	return max(M[n-1][1],M[n-1][0]);	// Retorna el máximo de los ultimos 2 elementos de los arreglos
	}

int main(){
	std::ios::sync_with_stdio(false);
	string input;										//El String
	int n;												//Largo String
    while (std::getline(std::cin, input)){ 				//Loop hasta el EOF
        n = input.length() + 1;
		std::cout<< LongestPalindrome(input, n) << "\n";
		}
	return 0;
}
