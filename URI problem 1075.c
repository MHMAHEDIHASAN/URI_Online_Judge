int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=10000;i++){
        if(i%n==2){
            printf("%d\n",i);
        }
    }
}
