
int v()
{
    var = fgets();
    printf(var);
    eax = *m;
    if (eax == 0x40)
    {
            fwrite("Wait what?!\n", 0x1, 0xc, *stdout@@GLIBC_2.0);
            eax = system("/bin/sh");
    }
    return eax;
}

void main()
{
    v();
    return;
}
