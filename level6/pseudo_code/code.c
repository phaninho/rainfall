
int n(void * )
{
    eax = system("/bin/cat /home/user/level7/.pass");
    return eax;
}

void m()
{
    printf("nope");
    return;
}

int main(int ac, char **av)
{
    char *A = malloc(64);
    char *B = malloc(4);
    *B = &(m());
    strcpy(A, *av);
    eax = *B;
    eax = (eax)();
    return eax;
}
