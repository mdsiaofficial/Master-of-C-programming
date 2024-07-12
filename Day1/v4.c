#include <stdio.h>
#include <string.h>

int main(){

  int globe; // valid
  int Globe; // valid
  // int 2Name; // invalid
  int _var = 8;
  printf("%d", _var);

  char __Reserve[100]; // its a string now.
  int __Count = 122; 

  // valid also, but try to avoid 
  // single underscore( _ ), or double underscore ( __ )
  // because there are huge keywords of c program using _ , __ 
  // EX -
  // __STDC_UTF_16__
  // __BASE_FILE__
  // __CRT_INLINE
  // __FLT32X_MIN_10_EXP__
  // _fgetc_nolock

  scanf("%s", &__Reserve);
  printf("\n\n%s", __Reserve);


  int Count__ = 324; // valid, but
  int Count_Names; // valid
  int count_names; // valid

  
  return 0;
}