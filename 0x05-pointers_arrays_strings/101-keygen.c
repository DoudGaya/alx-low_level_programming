#include <stdio.h>

int main (void)
  
{
  
  int i;
  
  char *password = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-_=+;:,.?/";
  
  char *password_generated = (char *)malloc(sizeof(char) * 12);
  
  for (i = 0; i < 12; i++)
    
    {
      
      password_generated[i] = password[rand() % (sizeof(password) - 1)];
      
    }
  
  password_generated[i] = '\0';
  
printf("%s\n", password_generated);
return (0);  
}
