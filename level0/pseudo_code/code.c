int main(int arg0, int arg1)
{
    if (atoi((arg1)) == 423)
    {
            var_10 = strdup("/bin/sh");
            var_4 = __getegid();
            var_8 = __geteuid();
            setresgid(var_4, var_4, var_4); //Fixe  les  UIDs réel, effectif et sauvé du processus apppelant.
            __setresuid(var_8, var_8, var_8); //pareil
            execv("/bin/sh", &var_10);
    }
    else
        fwrite("No !\n", 0x1, 0x5, *_IO_stderr);
    return 0x0;
}
