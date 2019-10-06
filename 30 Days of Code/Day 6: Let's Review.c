int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int x=0;
    int y=0;
    int T=0;

    scanf("%hi",&T);
   while(T>0)
   {
    char a[10000]={0};
    char b[10000]={0};
    char S[10000]={0};
    T--;
    scanf("%s",S);
    x=0;
    y=0;
    for (int j=0;j<=strlen(S);j++)
    {
        if(j%2 ==0)
        {
            a[x]=S[j];
            x++;
        }
        else
        {
            b[y]=S[j];
            y++;
        }
    }
    printf("%s %s\n",a,b);
   }
    return 0;
}
