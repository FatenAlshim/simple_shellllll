#include "shell.h"
/**
 * is_cmd - ddetermines if a file is executable ccomm.
  * @path: path to filee
* @info: info structt
*
 * Return: 1 if true, 0 otherwise
 */
int is_cmd(info_t *info, char *path)
{
struct stat st;
(void)info;
if (!path || stat(path, &st))
	return (0);
if (st.st_mode & S_IFREG)
{
return (1);
}
return (0);
}

