void o()
{
    system("/bin/sh");
    _exit(1);
}

int n()
{
    char var[512]
    fgets(var, sizeof(var), stdin);
    printf(var);
    exit(1);;
}

void main()
{
    n();
    return;
}
