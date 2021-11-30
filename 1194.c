int search(int list[],int n,int x)
{
    int sum=-1;
    for(int i=0;i<n;i++)
    {
        if(x==list[i])
        {
            sum=i;
            break;
        }
    }
    return sum;
}
