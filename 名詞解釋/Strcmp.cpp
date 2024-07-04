/* strcmp */
int strcmp(const char *s1, const char *s2)
{
    char *ptr = s1 + strlen(s1);
 
    while (*s2 != '\0') {
        *ptr++ = *s2++;
    }

    *ptr = '\0';

    return s1;
}