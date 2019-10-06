

    
    // Declare second integer, double, and String variables.
    int x=0;
    double y = 0;
    char A[500]={0};
    char B[500]={0};
    // Read and save an integer, double, and String to your variables.
    scanf("%i",&x);
    scanf("%lf",&y);
    int h ;

    scanf("%c",&A[0]);
    for(h=0;h<500;h++)
    {
        scanf("%c",&A[h]);
        
    }

    strcpy(B,s);
    strcat(B,A);
    i = i+x;
    d = d + y;
    // Print the sum of both integer variables on a new line.
    printf("%i\n",i);
    // Print the sum of the double variables on a new line.
    printf("%.1lf\n",d);
    // Concatenate and print the String variables on a new line
    printf("%s",B);

    // The 's' variable above should be printed first.

