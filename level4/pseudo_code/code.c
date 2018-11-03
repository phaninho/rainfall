
int p(void * str)
{
    eax = printf(str);
    return eax;
}

int n()
{
    char str[512];
    fgets(str, sizeof(buffer), stdin);
    p(str);
    eax = *m;
    if (eax == 0x1025544)
        eax = system("/bin/cat /home/user/level5/.pass");
    return eax;
}

void main()
{
    n();
    return;
}
