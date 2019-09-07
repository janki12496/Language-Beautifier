#include<stdio.h>
#include<conio.h>
void main()
{
	char c[100]="#include<stdio.h>#include<conio.h>void main(){int a=5,b;for(b=0;b<a;b++){printf(b);}a++;}"; //input
	int i,j,x,y=0;
	clrscr();
	for(i=0;i<strlen(c);i++)
	{
		if(c[i]=='#')
		{

		while(c[i]!='>')
		{
			printf("%c",c[i]);
			i++;
		}
		printf("%c",c[i]);
		printf("\n");
		}
		if(c[i]=='>'&& c[i+1]!='#')
		{
			while(c[i]!=')')
			{
				printf("%c",c[i+1]);
				i++;
			}
		printf("\n");
		}
		if(c[i]=='{')
		{
			printf("%c\n",c[i]);
			i++;
		    x:	while(c[i]!='}'){

				printf("%c",c[i]);
				if(c[i]=='{')
				{
				printf("\n");
				y++;
				}
				else if (c[i]==';')
				{
					printf("\n");
				}
				else if(c[i]=='(')
				{
					while(c[i]!=')'){
					printf("%c",c[i+1]);
					i++;
					}
				}
				i++;
			}
			printf("%c",c[i]);
			i++;
		}
		while(y!=0){
			printf("\n");
			y--;
			goto x;
		}
	}
getch();
}
