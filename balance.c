// BALANCING PARANTHESIS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
   char s[1000],stack[1000],ch,dc;
   int i,j,k,l,z=0,flag=1;
   stack[0]='\0';
   scanf("%s",s);
   l=strlen(s);
   for(i=0;i<l;i++)
   {
       if((s[i]=='{')||(s[i]=='[')||(s[i]=='('))
       {
           stack[z]=s[i];
           z++;
       }
       else
       {
           if(s[i]=='}')
           {
               ch=stack[z-1];
               dc='{';
               if(ch!=dc)
               {
                   flag=0;
                   stack[z-1]='\0';
                   z--;
               }
               else
               {
                   stack[z-1]='\0';
                   z--;
               }
           }
           else if(s[i]==']')
           {
               ch=stack[z-1];
               dc='[';
               if(ch!=dc)
               {
                   flag=0;
                //   break;
                   stack[z-1]='\0';
                   z--;
               }
               else
               {
                   stack[z-1]='\0';
                   z--;
               }
           }
           else if(s[i]==')')
           {
               ch=stack[z-1];
               dc='(';
               if(ch!=dc)
               {
                   flag=0;
                   stack[z-1]='\0';
                   z--;
               }
               else
               {
                   stack[z-1]='\0';
                   z--;
               }
           }
       }
   }
   if(flag==1)
   {
       printf("BALANCED");
   }
   else
   {
       printf("NOT BALANCED");
   }
}
