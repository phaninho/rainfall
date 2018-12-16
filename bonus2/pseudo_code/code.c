int greetuser(int buf)
{
    src = buf;
    if (*language != 1)
    {
        if (*language != 2)
        {
            if (*language == 0)
            {
                str = *"Hello ";
                *(int16_t *)(&str + 4) = *(int16_t *)("Hello " + 4) & 0xffff;
                *(int8_t *)(&str + 6) = *(int8_t *)("Hello " + 6) & 0xff;
            }
        }
        else
        {
            str = *"Goedemiddag! ";
            *(&str + 4) = *("Goedemiddag! " + 4);
            *(&str + 8) = *("Goedemiddag! " + 8);
            *(int16_t *)(&str + 12) = *(int16_t *)("Goedemiddag! " + 12) & 0xffff;
        }
    }
    else
    {
        str = *0x8048717;
        *(&str + 4) = *0x804871b;
        *(&str + 8) = *0x804871f;
        *(&str + 12) = *0x8048723;
        *(int16_t *)(&str + 16) = *(int16_t *)0x8048727 & 0xffff;
        *(int8_t *)(&str + 18) = *(int8_t *)0x8048729 & 0xff;
    }
    strcat(&str, &src);
    return (puts(&str));
}

int main(int ac, char **av)
{
    esp = (esp & 0xfffffff0) - 160;
    if (ac != 3)
        return 1;
    strncpy(&dest, av[1], 40);
    len = 32;
    src = av[2];
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
    return (greetuser(buf));
}
