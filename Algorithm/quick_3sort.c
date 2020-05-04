void quick_sort3way(int *array, int left, int right)
{
    int lt = 0;
    int i = 0;
    int gt = 0;
    int v = 0;

    if (left >= right)
    {
         return ;
    }

    v = array[left];       
    lt = left;
    i = left + 1;
    gt = right;

    while (i <= gt)
    {
         if (array[i] < v)
         {
             exchange(array, lt, i);
             lt++;
             i++;
         }
         else if (array[i] > v)　　
         {
              exchange(array, i, gt);
              gt--;
         }
         else
         {
              i++;
         }
    }

    quick_sort3way(array, left, lt - 1);
    quick_sort3way(array, gt + 1, right);
}
