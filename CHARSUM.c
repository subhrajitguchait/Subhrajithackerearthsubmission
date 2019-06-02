#include<stdio.h>
 int main()
 {
     char S[1000];
     int sum=0;
     scanf("%s", S);
     for(int i=0;S[i]!='\0';++i)
     {
        if(S[i]=='a')
        sum+=1;
        else if(S[i]=='b')
        sum+=2;
        else if(S[i]=='c')
        sum+=3;
        else if(S[i]=='d')
        sum+=4;
        else if(S[i]=='e')
        sum+=5;
        else if(S[i]=='f')
        sum+=6;
        else if(S[i]=='g')
        sum+=7;
        else if(S[i]=='h')
        sum+=8;
        else if(S[i]=='i')
        sum+=9;
        else if(S[i]=='j')
        sum+=10;
        else if(S[i]=='k')
        sum+=11;
        else if(S[i]=='l')
        sum+=12;
        else if(S[i]=='m')
        sum+=13;
        else if(S[i]=='n')
        sum+=14;
        else if(S[i]=='o')
        sum+=15;
        else if(S[i]=='p')
        sum+=16;
        else if(S[i]=='q')
        sum+=17;
        else if(S[i]=='r')
        sum+=18;
        else if(S[i]=='s')
        sum+=19;
        else if(S[i]=='t')
        sum+=20;
        else if(S[i]=='u')
        sum+=21;
        else if(S[i]=='v')
        sum+=22;
        else if(S[i]=='w')
        sum+=23;
        else if(S[i]=='x')
        sum+=24;
        else if(S[i]=='y')
        sum+=25;
        else if(S[i]=='z')
        sum+=26;
     }
     printf("%d", sum);
     return 0;
 }
