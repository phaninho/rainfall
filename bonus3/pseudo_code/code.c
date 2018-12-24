int main(int ac, char **av)
{
    FILE fd = fopen("/home/user/end/.pass", 'r');
    if ((fd != 0) && (ac == 2))
    {
        fread(&buf, 1, 66, fd);
        buf[atoi(av[1])] = '\0';
        fread(&buf + 66, 1, 65, fd);
        fclose(fd);
        if (strcmp(&buf, av[1]) == 0)
            execl("/bin/sh", "sh");
        else
            puts(&buf + 66);
        return 0;
    }
    return 1;
}
