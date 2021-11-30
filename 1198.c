int palindrome( char *s )
{
int i,len,j;
 len=strlen(s);
 for(i=0,j=len-1;i<j;i++,j--)
  {
  if(s[i]!=s[j])
   return 0;
   }
   return 1;
   }
