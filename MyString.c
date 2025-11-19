void MyToUpper(char, int);
void MyToLower(char, int);

void MyToUpper(char *str, int StrLen){
int StrPos; 
  for(StrPos=0; StrPos<=StrLen; StrPos++){
    if(*str <=122 && *str >=97){
    *str - 32; 
    }
    str++;
  }
  return; 
}

void MyToLower(char *str, int StrLen){
  int StrPos;
  for(StrPos=0; StrPos<=StrLen; StrPos++){
  if(*str <=90 && *str >= 65){
  *str+32;
  }
    str++;
  }
  return; 
}

