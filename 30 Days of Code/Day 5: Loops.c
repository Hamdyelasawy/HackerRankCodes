
int main()
{
    char* n_endptr;
    char* n_str = readline();
    int n = strtol(n_str, &n_endptr, 10);
    int i = 1;
    if (n_endptr == n_str || *n_endptr != '\0') { exit(EXIT_FAILURE); }

    while (i<11)
    {
        printf("%i x %i = %lli\n",n,i,i*n);
        i++;
    }
    return 0;
}
