#include "main.h"
/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int fd, fp, rd, x, y;
char buf[BUFSIZ];
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
fd = open(argv[1], O_RDONLY);
if (fd < 0)
{
dprintf(STDERR_FILENO, "Can't read from file %s\n", argv[1]);
exit(98);
}
fp = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
while ((rd = read(fd, buf, BUFSIZ)) > 0)
{
if (fp < 0 || write(fp, buf, rd) != rd)
{
dprintf(STDERR_FILENO, "Can't write to %s\n", argv[2]);
close(fd);
exit(99);
}
}
if (rd < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
x = close(fd);
y = close(fp);
if (x < 0 || y < 0)
{
if (x < 0)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
if (y < 0)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
return (0);
}
