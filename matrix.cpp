#include <string>
#include <sstream>
#include <iostream>
using namespace std;

int max(int a, int b)								//Retorna el int más grande (Gracias google por la idea)
	{
	return (a > b)? a:b;
	}

/*S[0 .. n-1]      L->     <-R*/
int LongestPalindrome(string s,int n)
	{

  int j,i,cont =0, f1[n+1], f2[n+1];

  for(i=0; i<n; i++){
    f1[i]=0;
  }

  f2[0]=0;

  for(j =n-1; j >= 0; j--){
    for(i = 1; i <= n; i++){

      if(cont%2==0){
        if(s[j]==s[i]){
          f2[i] = f1[i-1]+ 1;
        }
        else{
          f2[i] = max(f2[i-1],f1[i]);
        }
      }

      else{
        if(s[j]==s[i]){
          f1[i] = f2[i-1] + 1;
        }
        else{
          f1[i] = max(f1[i-1],f2[i]);
        }
      }
    }
    cont+=1;
  }

  if(cont%2==1){
    return f1[n-1];
  }

  else{
    return f2[n-1];
  }
}

int main(){
	std::ios::sync_with_stdio(false);
	string input;										//El String
	int n;												//Largo String
    while (std::getline(std::cin, input)){ 				//Loop hasta el EOF
        n = input.length();
		std::cout<< LongestPalindrome(input, n) << "\n";
		}
	return 0;
}
