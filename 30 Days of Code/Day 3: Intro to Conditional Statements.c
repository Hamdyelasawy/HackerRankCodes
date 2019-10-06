int main()
{
    char* N_endptr;
    char* N_str = readline();
    int N = strtol(N_str, &N_endptr, 10);

    if (N_endptr == N_str || *N_endptr != '\0') { exit(EXIT_FAILURE); }

    int A = N;

    if ( (A % 2 != 0)|| (A >5 && A<21))
    {
        printf("Weird");
    }
    else
    {
        printf("Not Weird");
    }
    return 0;
}
