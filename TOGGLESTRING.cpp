#include<iostream>
#include<string.h>
using namespace std;
int main()
{    int i=0;
  char str[100];
  cin>>str;
  char c;
  while (str[i])
  {
    c=str[i];
    if(islower(c))
   { putchar (toupper(c));
   }
   else if(isupper(c))
   {
     putchar (tolower(c));   
   }
    i++;
  }
  
	return 0;
}
