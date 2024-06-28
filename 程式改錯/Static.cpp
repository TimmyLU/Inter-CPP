// 呼叫 10 次 a = ?, b = ?
void fun()
{
    static int a = 0;
    int b = 0;
    a++;
    b++;
    printf("%d\n", a);    //10
    printf("%d\n", b);    //1
}