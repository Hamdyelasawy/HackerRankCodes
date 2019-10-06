
int diagonalDifference(int arr_rows, int arr_columns, int** arr)
{
  //  Write your code here
  int S1st_Diagonal = 0;
  int S2nd_Diagonal = 0;
  int Iterator = 0;
  int result = 0;
    int (*A)[arr_columns]=(int (*)[arr_columns])arr;

    while   (Iterator < arr_rows)
    {
            S1st_Diagonal += arr[Iterator][Iterator];
            
            Iterator++;
    }

    Iterator=1;
    while   (Iterator <= arr_rows)
    {
            S2nd_Diagonal += arr[Iterator-1][arr_columns - Iterator];
            Iterator++;
    }

    result = S1st_Diagonal - S2nd_Diagonal;

    if ( result < 0) { result *=-1;}
    return result;

}
