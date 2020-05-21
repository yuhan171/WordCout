#include <stdio.h>
#include <ctype.h>

int main()
{
	char a[100];
	char ch[100];
	int i, flag=0, word=0,A=0;
	gets(a);
   int ABCD = 0,blank = 0,digit = 0,other = 0; 
    for (i = 0; a[i]; i++) {
        if (a[i] == ' '||a[i]==',')
		{
		 if(a[i]==',')
		 {
		 	A++;
		 }
            flag= 0;
        } 
		else if (flag == 0) { 
            word++; 
            flag = 1; 
        }
    }
   
   
   
 for(i=0;ch[i]=a[i];i++)
 {
  if(isalpha(ch[i]))
  {
   ABCD++;
  }
  else if(isdigit(ch[i]))
  {
   digit++;
  }
  else if(ch[i] == ' ')
  {
   blank++;
  }
  else
  {
   other++;
  }
 }
printf("字符数为%d\n",ABCD+digit+blank+other+A); 
printf("单词数为%d\n", word);
    return 0;
}

