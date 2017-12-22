#include <string>
#include <sstream>
#include <iostream>
using namespace std;

int longo(String s){
  int n = s.length()+1;
  int j,i,cont =0, f1[n], f2[n];

  for(i==0; i<n; i++){
    f1[i]=0;
  }

  f2[0]=0;

  for(int j =n-2; j >= 0; j--){
    for(int i = 1; i < n+1; j++){
      if(cont%2==0){
        f2[i] = max(f2[i-1],f1[i]);

        if(c==palabra[j]){
          f2[i] +=1;
        }
      }
      if(cont%2==1){
        f1[i] = max(f1[i-1],f2[i]);

        if(c==s[j]){
          f1[i] +=1;
        }
      }
    }
    cont+=1;
  }
  if(cont%2==1){
    retun
  }
}
