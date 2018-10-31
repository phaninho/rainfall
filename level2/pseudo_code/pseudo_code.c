int p(void * )
{
    fflush(*stdout@@GLIBC_2.0);
    eax = gets(&var_4C);
    var_C = ret_addr; //__builtin_return_address(0)

    if ((var_C & 0xb0000000) == 0xb0000000)
    {
            printf("(%p)\n", var_C);
            eax = _exit(0x1);
    }
    else
    {
            puts(&var_4C);
            eax = strdup(&var_4C);
    }
    return eax;
}


void main()
{
    p();
    return;
}
