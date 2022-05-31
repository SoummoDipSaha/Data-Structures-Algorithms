int i, pos = -1;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == val)
        {
            pos = i + 1;
            break;
        }
    }
    return pos;