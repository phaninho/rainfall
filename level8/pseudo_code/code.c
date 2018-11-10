int main()
{
    do {
            char line[128];
            printf("%p, %p \n", *auth, *service);
            if (fgets(line, 128, stdin) == 0)
                break;
            if (strcmp(line, "auth")) == 0)
            {
                *auth = malloc(4);
                memset(auth, 0, sizeof(auth));
                if (!ecx <= 31)
                    strcpy(*auth, &line + 5);
            }
            if (strcmp(line, "reset")) == 0)
                free(*auth);
            if (strcmp(line, "service")) == 0)
                *service = strdup(&line + 7);
            if (strcmp(line, "login")) == 0)
                continue;
            if (*(*auth + 32) != 0)
                system("/bin/sh");
            else
                fwrite("Password:\n", 1, 10, stdout);
    } while (true);
    return 0;
}
