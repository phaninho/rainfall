int greetuser(int buf)
{
    char str[72];

    if (*language == 0)
        strcpy(str, "Hello ");
    else if (*language == 1)
        strcpy(str, "Hyvää päivää ");
    else if (*language == 2)
        strcpy(str, " Goedemiddag! ");
    strcat(str, &buf);
    return (puts(&str));
}

int main(int ac, char **av)
{
    if (ac != 3)
        return 1;
    strncpy(dest, av[1], 40);
    strncpy(&dest[40], av[2], 32);
    env_value = getenv("LANG");
    if (env_value)
    {
        *language = 0;
        if (memcmp(env_value, "fi", 2) == 0)
            *language = 1;
        else if (memcmp(env_value, "nl", 2) == 0)
            *language = 2;
    }
    strncpy(env_value, dest, 19)
    return (greetuser(dest));
}
