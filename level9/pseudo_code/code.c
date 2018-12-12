
N       N::operator-(N * arg0)
{
    edx = *(arg0 + 108);
    eax = *(arg_4 + 108);
    eax = edx - eax;
    return eax;
}

N       N::operator+(N * arg0)
{
    edx = *(arg0 + 108);
    eax = *(arg_4 + 108);
    eax = edx + eax;
    return eax;
}

int     N::setAnnotation(char * arg0)
{
    eax = memcpy(arg0 + 4, arg_4, strlen(arg_4));
    return eax;
}

void    main(int ac, char **av)
{
    var_8 = av;
    if (ac <= 1)
        _exit(1);
    else
    {
        ebx = operator new(N);
        N::N(ebx);
        char *var_8 = ebx;
        ebx = operator new(N);
        N::N(ebx);
        N::setAnnotation(var_8);
        (**ebx)(ebx, var_8);
    }
    return;
}
