%{
#include <stdio.h>
int operatorCount=0,numberCount=0,operand[10000];
char operator[10000];
%}
%%
"+"|"-"|"*"|"/" {
	operator[operatorCount]=yytext[0];
	operatorCount++;
}
[0-9]+ {
	operand[numberCount]=strToNum(yytext);
	numberCount++;
}
"=" {
	printf(" = %d\n",calculateResult(operator,operatorCount,operand,numberCount));
}
%%
int main(int argc,char *argv[])
{
	if(argc!=2)
	{
		printf("exit\n");
		exit(0);
	}
	yyin=fopen(argv[1],"r");
	yylex();
}
int strToNum(char s[])
{
	int i=0;
	int ans=0;
	while(i!=strlen(s))
	{
		ans=(ans*10)+(s[i]-48);
		i++;
	}
	return ans;
}
int calculateResult(char operator[],int operatorCount,int operand[],int numberCount)
{
	int ans=operand[0];
	printf("%d ",operand[0]);
	for(int i=0;i<operatorCount;i++)
	{
		printf("%c %d ",operator[i],operand[i+1]);

		switch(operator[i])
		{
			case '+':
				ans+=operand[i+1];
				break;
			case '-':
				ans-=operand[i+1];
				break;
			case '*':
				ans*=operand[i+1];
				break;
			case '/':
				ans/=operand[i+1];
				break;
		}
	}

	return ans;
}


