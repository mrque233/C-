void ReadString( char s[] )
{
	gets(s);
}
void delchar(char *str, char c)
{
	int i = 0;
	int j = 0;
	int n = 1;
	for (i = MAXN - 1; i >= 0;i--)
	{
		if (str[i] == c)
		{
		
			for (j = i; j < MAXN - n; j++)
			{
				str[j] = str[j + 1];
			}
			n++;
		}
	}
}
