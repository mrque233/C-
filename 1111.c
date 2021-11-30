void ReadString( char s[] )
{
	int a;
	gets(s);
 } 

void strmcpy( char *t, int m, char *s ){
    int i;
    for(i=0;i<strlen(t);i++){
        s[i]=t[m-1];
        m++;
    }
}

 
