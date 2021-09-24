#include <stdio.h>
#include <string.h>
#include <ctype.h>

char password[];
int flag;


int main() {
  printf("Enter the password: "):
  scanf("%s", &password);
}

void validate() {
  if(strlen(password) < 8) {
    printf("Password length is lesser than 8");
  } else if(
