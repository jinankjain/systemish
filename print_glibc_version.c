#include <stdio.h>
#include <gnu/libc-version.h>

int main()
{
    const char *version;
    version = gnu_get_libc_version();

    printf("GNU libc version: %s", version);
    return 0;
}
