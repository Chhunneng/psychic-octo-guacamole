#include<stdio.h>
main()
{
	int b=0,c=0;
	char input;
	while(input!='\0'|| input!="\n")
	{
		scanf(" %c",&input);
		if(input == 'a' || input == 'e' || input =='i' || input == 'o' || input == 'u')
			b +=1;
		else if(input=='\n')
			b=b;
		else if(input=='\n'|| input=='\0')
			break;
		else
			c +=1;
	}
	if(b>c)
	printf("The vowels are more than non-vowels");
	else if(b<c)
	printf("The vowels are less than the non-vowels");
	else
	printf("The vowels and the non-vowels are equal");
}
