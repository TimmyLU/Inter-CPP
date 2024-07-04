/* union */
union data {
    unsigned char c;    //1 byte
    int val;            //4 bytes
    long int li;        //8 bytes
};

int main(void)
{
    union data d;
    d.c = 255;
    printf("%d\n", d.c);    //255
    
    return 0;
}
