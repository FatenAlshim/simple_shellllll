#include "shell.h"
/**
 * _unsetenv - Removee environment vvariable
 * @info: Structure ccontaining ppotential arg..
 *        constant funct. prototype.
 *  Return: 1 on deletee, 0 otherwisee
 * @var: string env var property
 */
int _unsetenv(info_t *info, char *var)
{
list_t *node = info->env;
size_t i = 0;
char *p;
if (!node || !var)
return (0);
while (node)
{
p = starts_with(node->str, var);
if (p && *p == '=')
{
info->env_changed = delete_node_at_index(&(info->env), i);
i = 0;
node = info->env;
continue;
}
node = node->next;
i++;
}
return (info->env_changed);
}
