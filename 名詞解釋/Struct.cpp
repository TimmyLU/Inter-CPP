/* struct */
struct GPIO {
    char name[12];
    unsigned char direction;
    unsigned int value;
    struct GPIO *gpio_ptr;
    //struct不能含有自己, 但可以有自己的pointer
};

int main(void)
{
    /* normal */
    /*
    struct GPIO g = {
        "GPIO_IO1",
        0,
        1,
        NULL
    };
    */
    
    /* designated initializers(recommend) */
    struct GPIO g = {
        .name = "GPIO_IO1",
        .direction = 0,
        .value = 1,
        .gpio_ptr = NULL
    };
    
    printf("%s\n", g.name);        //GPIO_IO1
    printf("%d\n", g.direction);   //0
    printf("%d\n", g.value);       //1
    printf("%p\n", g.gpio_ptr);    //nil
    
    return 0;
}