
int p(void *dest)
{
    puts('-');
    read(0, &buf, 4096);
    strchr(&buf, '\n') = '\0';
    strncpy(dest, &buf, 20);
}

int pp(char *str)
{
    char varA[20];
    char varB[20];

    p(varA);
    p(varB);
    strcpy(str, varA);
    int len = strlen(str);
    str[len] = ' ';
    strcat(str, varB);
}


int main()
{
    char *str[40];

    pp(str);
    puts(str);
    return 0;
}
