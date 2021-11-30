void ReadString( char *s )
{
	gets(s);
}

void StringCount( char *s )
{
	char *p=s;
	int a=0,b=0,c=0,d=0,e=0;
 
	while(*p!='\0')
	{
		if(*p>='A'&&*p<='Z')
			a++;
		else if(*p>='a'&&*p<='z')
			b++;
		else if(*p==' ')
			c++;
		else if(*p>='0'&&*p<='9')
			d++;
		else
			e++;
		p++;
	}
	printf("%d %d %d %d %d",a,b,c,d,e);
}
