#include<stdio.h>
#include<string.h>


int main()
{
	char str1[100],str2[100],i;


	printf("\n Enter the string1:");
	gets(str1);

	printf("\n Enter the string2:");
	gets(str2);


	for(i=0;str1[i]!='\0';i++)
	{
		if((str1[i]-str2[i])==0)
		{
			printf("\n Strings are same \n");
			break;
		}
		else if ((str1[i]-str2[i])>0)
		{
			printf("\n string1 is bigger than string1 \n"); 
			break;

		}

		else
		{
			printf("\n String2 is bigger than string1");
			break;
		}
	}

return 0;
}
