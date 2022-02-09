main()
{
    int n;
    scanf("%d",&n);
    int a = n%10;
    if(a == 0 || a == 5)
    {
        printf("Number is divisible by 5.");
    }
    else
    {
        printf("Number is not divisible by 5.");
    }
    getch();
}
