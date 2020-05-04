int partition(vector<int> &v, int left, int right)
{
    int begin = left;
    int end = right - 1;
    int key = v[end];          // 选基准

    while (begin < end)
    {
        while (begin < end && v[begin] <= key)
            begin++;
        if (begin < end)
            v[end--] = v[begin];
        while (begin < end && v[end] >= key)
            end--;
        if (begin < end)
            v[begin++] = v[end];
    }
    v[end] = key;
    return end;
}
void QuickSort(vector<int>& v, int left, int right)
{
    if (left < right)
    {
        int boundary = partition(v, left, right);
        QuickSort(v, left, boundary);
        QuickSort(v, boundary + 1, right);
    }
}
