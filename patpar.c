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
/**
 * find_path - finds this cmd in PATH stringg
* @pathstr:  PATH stringg
 * @cmd: the cmd to find
 * @info:  info struct
  *
 * Return: ffull path of ccmd if found or NULL
 */
char *find_path(info_t *info, char *pathstr, char *cmd)
{
int i = 0, curr_pos = 0;
char *path;
if (!pathstr)
return (NULL);
if ((_strlen(cmd) > 2) && starts_with(cmd, "./"))
{
if (is_cmd(info, cmd))
return (cmd);
}
while (1)
{
if (!pathstr[i] || pathstr[i] == ':')
{
path = dup_chars(pathstr, curr_pos, i);
if (!*path)
_strcat(path, cmd);
else
{
_strcat(path, "/");
_strcat(path, cmd);
}
if (is_cmd(info, path))
return (path);
if (!pathstr[i])
break;
curr_pos = i;
}
i++;
}
return (NULL);
}
