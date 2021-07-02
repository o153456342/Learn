#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n = 0;
    int arr[50] = { 0 };
    int i = 0;
    int count = 0;
    int count1 = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        if (arr[i] < arr[i + 1])
            count++;
        if (arr[i] > arr[i + 1])
            count--;
        if (arr[i] == arr[i + 1])
            count1++;
    }
    if (count == n - 1 || count == 1 - n || count1 == n - 1)
        printf("sorted");
    else
        printf("unsorted");

    return 0;
}

int main()
{
    int n = 0;
    int arr[10000] = { 0 };
    int i = 0;
    int max = 0;
    int min = 100;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    printf("%d", max - min);
    return 0;
}

int main()
{
    int n = 0;
    int arr[50] = { 0 };
    int i = 0;
    int sum = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("%d", sum);
    return 0;
}

int main()
{
    int arr[10] = { 0 };
    int i = 0;
    int countp = 0;
    int countn = 0;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > 0)
            countp++;
        if (arr[i] < 0)
            countn++;
    }
    printf("positive:%d\nnegative:%d\n", countp, countn);
    return 0;
}

int main()
{
    int arr[10] = { 0 };
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 9; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

int main()
{
    char a[100] = { '0' };
    gets(a);
    puts(a);
    return 0;
}


int main()
{
    int m = 0;
    int n = 0;
    int i = 0;
    int j = 0;
    int sum = 0;
    int arr[10][10] = { 0 };
    scanf("%d%d", &n, &m);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (arr[i][j] > 0)
                sum += arr[i][j];
        }
    }
    printf("%d\n", sum);

    return 0;
}

int main()
{
    char p1[20] = { 0 };
    char p2[20] = { 0 };
    scanf("%s%s", &p1, &p2);
    if (strcmp(p1, p2) == 0)
    {
        printf("same");
    }
    else
        printf("different");
    return 0;
}

int cmp_int(const void* e1, const void* e2)
{
    return (*(int*)e1 - *(int*)e2);
}

int main()
{
    int n = 0;
    int arr[50] = { 0 };
    int i = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &arr[n]);
    qsort(arr, n + 1, 4, cmp_int);
    for (i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

int main()
{
    int n = 0;
    int i = 0;
    double max = 0.0;
    double min = 0.0;
    double sum = 0.0;
    double s[100] = { 0.0 };
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%lf", &s[i]);
    }
    max = s[0];
    min = s[0];
    for (i = 0; i < n; i++)
    {
        if (s[i] > max)
            max = s[i];
        if (s[i] < min)
            min = s[i];
        sum += s[i];
    }
    printf("%.2lf %.2lf %.2lf\n", max, min, sum / n);
    return 0;
}

int main()
{
    int n = 0;
    int i = 0;
    int counto = 0;
    int counte = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
            counto++;
        else
            counte++;
    }
    printf("%d %d\n", counto, counte);
    return 0;
}

int main()
{
    int i = 0;
    int count = 0;
    for (i = 1; i <= 2019; i++)
    {
        if ((i % 10 == 9) || ((i / 10) % 10 == 9) || ((i / 100) % 10 == 9))
            count++;
    }
    printf("%d\n", count);
    return 0;
}

int main()
{
    int a = 0;
    scanf("%d", &a);
    if (a > 0)
        printf("-1");
    else if (a < 0)
        printf("1");
    else
        printf("0");
    return 0;
}

int main()
{
    char s[8000] = { 0 };
    int i = 0;
    scanf("%s", s);
    char* p = s;
    long long c = 0;
    long long ch = 0;
    long long chn = 0;
    while (*p)
    {
        if (*p == 'C')
            c++;
        else if (*p == 'H')
            ch += c;
        else if (*p == 'N')
            chn += ch;
        p++;
    }
    printf("%lld\n", chn);

    return 0;
}

int main()
{
    int n = 0;
    int i = 0;
    int k = 0;
    int arr[100001] = { 0 };
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &k);
        arr[k] = k;
    }
    for (i = 0; i < 100001; i++)
    {
        if (arr[i] != 0)
            printf("%d ", arr[i]);
    }

    return 0;
}

int step(int n)
{
    if (n <= 1)
        return 1;
    else
        return step(n - 1) + step(n - 2);
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int ret = step(n);
    printf("%d", ret);
    return 0;
}

int main()
{
    long long n = 0;
    long long sum = 0;
    scanf("%lld", &n);
    int i = 0;
    while (n)
    {
        long long m = n % 10;
        if (m % 2 == 0)
        {
            m = 0;
        }
        else if (m % 2 == 1)
        {
            m = 1;
        }
        sum += m * pow(10, i);
        i++;
        n /= 10;
    }
    printf("%lld", sum);
    return 0;
}


int main()
{
    long long n = 0;
    long long m = 0;
    scanf("%lld%lld", &n, &m);
    long long a = n;
    long long b = m;
    long long max;
    long long min;
    while (max = a % b)
    {
        a = b;
        b = max;
    }
    min = m * n / b;
    printf("%lld\n", min + b);
    return 0;
}

////链表的结构
//struct Node
//{
//    int data;
//    struct Node* next;
//};
//
//int main()
//{
//    int data, n, i;
//    struct Node* list = NULL;//指向第一个结点
//    struct Node* tail = NULL;//指向最后的结点
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &data);
//        struct Node* pn = (struct Node*)malloc(sizeof(struct Node));
//        pn->data = data;
//        pn->next = NULL;//创建一个空链表
//        //尾部插入
//        if (list == NULL)
//        {
//            list = pn;
//            tail = pn;
//        }
//        else
//        {
//            tail->next = pn;
//            tail = pn;
//        }
//    }
//    //删除指定数字
//
//    int d = 0;
//    int a = 0;
//    scanf("%d", &d);
//    struct Node* cur = list;
//    struct Node* pevl = NULL;
//    while (cur)
//    {
//        if (cur->data == d)
//        {
//            //删除
//            if (cur == list)
//            {            //第一个结点
//                list = cur->next;
//                cur = list;
//            }
//            else
//            {             //非第一个结点
//                pevl->next = cur->next;
//                cur = pevl->next;
//            }
//            n--;
//        }
//        else
//        {
//            pevl = cur;
//            cur = cur->next;
//        }
//    }
//    printf("%d\n", n);
//    //打印链表
//    cur = list;
//    while (cur)
//    {
//        printf("%d ", cur->data);
//        cur = cur->next;
//    }
//    cur = list;
//    struct Node* del = NULL;
//    while (cur)
//    {
//        del = cur;
//        cur = cur->next;
//        free(del);
//    }
//    list = NULL;
//    return 0;
//}