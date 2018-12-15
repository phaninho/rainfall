int main(int ac, char **av)
{
    var = av[1];
    esp = (esp & 0xfffffff0) - 160;
    if (ac != 3)
        return 1;
    else
    {
        asm { rep stosd  dword [edi], eax };
        eax = *(var + 4);
        eax = strncpy(&dest, eax, 40);
        len = 32;
        src = *(var + 8);
        strncpy(&dest + 40, src, len);
        buf = 0x8048738;
        env_value = getenv(buf);
        if (env_value != 0)
        {
            len = 2;
            src = 0x804873d;
            buf = env_value;
            if (memcmp(buf, src, len) == 0)
                *language = 1;
            else
            {
                len = 2;
                src = 0x8048740;
                buf = env_value;
                if (memcmp(buf, src, len) == 0)
                    *language = 2;
            }
        }
        buf = rep intrinsic_movsd(buf, dest);
        eax = greetuser(buf);
    }
    return eax;
}
