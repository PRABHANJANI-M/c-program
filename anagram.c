#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,count1[256]={0},count2[256]={0},len1=0,len2=0,m,n;
    char a[100],b[100];
    fgets(a,sizeof(a),stdin);
    a[strcspn(a,"\n")]='\0';
    fgets(b,sizeof(b),stdin);
     b[strcspn(b,"\n")]='\0';
     for(m=0;a[m]!='\0';m++)
     {
         len1++;
     }
     for(n=0;b[n]!='\0';n++)
     {
         len2++;
     }
     if(len1!=len2)
     {
         printf("Not Anagram");
         return 0;
     }
     for(i=0;a[i]!='\0';i++)
     {
         count1[a[i]-'a']++;
         count2[b[i]-'a']++;
     }
     for(i=0;i<26;i++)
     {
         if(count1[i]!=count2[i])
         {
             printf("Not Anagram");
             return 0;
         }
     }
     printf("Anagram");
     return 0;
     
}













