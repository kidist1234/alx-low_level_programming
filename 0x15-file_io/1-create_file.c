#include "main.h"
int create_file(const char *filename, char *text_content)
{
int fd;
int i = 0;
if (!filename)
return (-1);
fd = open(filename, O_RDWR);
if (fd < 0)
{
fd = open(filename, O_CREAT | O_RDWR, 0600);
}
while(text_content[i] != '\0')
i++;
write(fd, text_content, i);
close(fd);
return (1);
}
