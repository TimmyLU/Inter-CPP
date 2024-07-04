/* strcat */
void strcat(char *dest, const char *src)
{
    char *p = dest;
    int loc = 0;

    if (dest == NULL || src == NULL) return;

    while(*(p++) != '\0') loc++;
    
    while(*src != '\0') {
        dest[loc] = *src;
        src++;
        loc++;
    }
}