#include <stdio.h>

struct book
{
    int bid;
    char bname[20];
    int bprice;
};

int main()
{
    struct book b[100];
    int i, n;

    printf("\nEnter limit => ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter bid => ");
        scanf("%d", &b[i].bid);

        fflush(stdin);  // avoid gets(), it’s unsafe
        printf("Enter bname => ");
        scanf("%s", b[i].bname);

        printf("Enter bprice => ");
        scanf("%d", &b[i].bprice);
    }

    printf("\n%-10s %-20s %-10s\n", "Bid", "Bname", "Bprice");
    printf("----------------------------------------------\n");
    for (i = 0; i < n; i++)
    {
        printf("%-10d %-20s %-10d\n", b[i].bid, b[i].bname, b[i].bprice);
    }

    return 0;
}

