//Write a Java program to perform encryption and decryption using the following algorithms:
//b). Monoalphabetic

#include<stdio.h>
#include<string.h>
int main()
{
            char pt[52]={'A','a','B','b','C','c','D','d','E','e','F','f','G','g','H','h','I','i','J','j','K','k','L','l','M','m','N','n','O','o','P','p','Q','q','R','r','S','s','T','t','U','u','V','v','W','w','X','x','Y','y','Z','z'};
            char ct[52]={'Z','z','Y','y','X','x','W','w','V','v','U','u','T','t','S','s','R','r','Q','q','P','p','O','o','N','n','M','m','L','l','K','k','J','j','I','i','H','h','G','g','F','f','E','e','D','d','C','c','B','b','A','a'};
            char p[20]={'\0'},c[20]={'\0'};
            int i,j;
            printf("\nEnter the plain text:\t");
            scanf("%s",p);
            for(i=0;i<strlen(p);i++)
            {
                        for(j=0;j<52;j++)
                        {
                        if(pt[j]==p[i])
                        {
                                    c[i]=ct[j];
                        }
                        }
            }
            printf("\nCipher text is:\t%s\n",c);
            return 0;
}
