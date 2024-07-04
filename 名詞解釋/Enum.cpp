/* enum */
enum GPIO_NUM {
    GPIO_IO0 = 0,
    GPIO_IO1,
    GPIO_IO2,
    GPIO_IO3,
    GPIO_IO4
};

int main(void)
{
    enum GPIO_NUM G = GPIO_IO3;
    
    printf("%d\n", G);    //3
    
    return 0;
}