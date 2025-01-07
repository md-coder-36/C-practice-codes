
    for (int i = 0; i < 4; i++)   // rows
    {
        for (int j = 0; j < 6; j++)   // columns
        {
            if (i == 0 || j == 0 || i == 3 || j == 5)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
            // printf("[%d , %d]", i, j);
        }
        printf("\n");
    }
