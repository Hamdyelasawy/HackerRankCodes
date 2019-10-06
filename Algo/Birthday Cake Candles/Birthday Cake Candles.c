// Complete the birthdayCakeCandles function below.
int birthdayCakeCandles(int ar_count, int* ar)
{
    int i = 0;
    int Maxnum = 0;
    int Rep = 0;
    while ( i < ar_count)
    {
        if ( ar[i] > Maxnum)
        {
          Maxnum = ar[i];
          Rep=1;
        }
        else if ( ar[i] == Maxnum)
        {
          Rep++;
        }
        i++;
    }
    return Rep;
}
