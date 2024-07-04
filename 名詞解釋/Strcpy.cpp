/* strcpy */
void strcpy(char *dest, const char *src)
{
    if (dest == NULL || src == NULL) return;
    
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
}