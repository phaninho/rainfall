int main(int ac, ichar **av)
{
    char str[40];
    int i = atoi(av[1]);

    if (i > 9)
        return 1;
    memcpy(str, av[2], i * 4);
    if (i == 0x574f4c46)
            execl("/bin/sh", 0x8048580);
    return 0;
}
