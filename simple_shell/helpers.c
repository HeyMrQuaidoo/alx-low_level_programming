#include "main.h"


/**
 * find_trailing_slash - identifies if first char
 * is a slash.
 * @cmd: first string
 * Return: 1 if yes 0 if no.
 */
int find_trailing_slash(char *cmd)
{
	int cont = 0;

	while (cmd[cont])
	{
		if (cmd[0] == '/')
		{
			printf("%c\n", cmd[0]);
			return (1);
		}

		cont++;
	}
	return (0);
}


/**
 * run_shell - keep shell alive
 * @sig: keeps shell alive
 **/
void run_shell(int sig)
{
	(void) sig;
	write(1, "\n$ ", 3);
}

/**
 *  _putchar - Takes in char c and outputs to stdout
 *  @c: Character c to output to stdout
 *
 *  Return: Always 0 (Success)
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * _stream_writer - write a line or string to the output
 * @str: char str to output to stdout
 *
 * Return: Always 0 (Success)
 */
void _stream_writer(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}


/**
 * _strcmp - function that compares two strings.
 * @s1: char 1 to compare
 * @s2: char 2 to compare
 * Return: 0 if char equal
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (; (*s2 != '\0' && *s1 != '\0') && *s1 == *s2; s1++)
	{
		if (i == 1)
			break;
		i++;
		s2++;
	}

	return (*s1 - *s2);
}

/**
 *_strlen - function that returns
 * the length of a string.
 *
 *@s: char s
 *Return: Always success
 */
int _strlen(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		n++;
		s++;
	}
	return (n);
}


/**
 * _strcat - function that concatenates two strings.
 * @dest: dest string
 * @src: src string
 * Return: dest - concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
	{
		a++;
	}

	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}


/**
 * call_params - Get parameters from command prompt and exec procedure
 * @parameter: Prompt to call
 * Return: result of function call
 **/
char **call_params(char *parameter)
{
	int i = 0;
	char *split_token;
	char *delim = " \t\n";
	char **buffer = malloc(1024 * sizeof(char *));

	split_token = strtok(parameter, delim);

	while (split_token != NULL)
	{
		buffer[i] = split_token;
		i++;
		split_token = strtok(NULL, delim);
	}
	exec_cmd(buffer);
	return (buffer);

}


/**
 * exec_cmd - function call to run commands from commmand prompt
 * @cmd: a pointer to cmd
 *
 * Return nothing
 */
void exec_cmd(char **cmd)
{

	char *param = (*(cmd + 1));
	char *s, *slash = "/";
	char *o;

	char *cmd_cpy = *cmd;
	char *argv[4];

	if ((access(cmd[0], F_OK) == 0))
	{
		argv[0] = cmd[0];
		argv[1] = param;
		argv[2] = ".";
		argv[3] = NULL;

		if (execve(argv[0], argv, NULL) == -1)
		{
			perror("Error");
		}
	}
	else
	{
		o = run_cmd(cmd_cpy);
		slash = _strcat(o, slash);
		s = _strcat(slash, *cmd);

		argv[0] = s;
		argv[1] = param;
		argv[2] = ".";
		argv[3] = NULL;

		if (execve(argv[0], argv, NULL) == -1)
		{
			perror("Error");
		}
	}
}

/**
 * run_cmd - exec command
 * @command: command to execute
 *
 * Return: string of folder for command to be executed.
 **/
char *run_cmd(char *command)
{
	DIR *folder;
	struct dirent *entry;
	char *cmd, comp, **str  = malloc(sizeof(char) * 1024);
	char **split = malloc(sizeof(char) * 1024);
	int i;

	while (*environ != NULL)
	{
		if (!(_strcmp(*environ, "PATH")))
		{
			*str = *environ;
			for (i = 0; i < 9; i++, split++, str++)
			{
				*split = strtok(*str, ":='PATH'");
				folder = opendir(*split);
				if (folder == NULL)
				{
					perror("Unable to read directory");
				}
				while ((entry = readdir(folder)))
				{
					cmd = entry->d_name;
					comp = _strcmp(cmd, command);
					if (comp == 0)
					{
						return (*split);
					}
					if (cmd == NULL)
					{
						perror("Error");
					}}}}
		environ++;
	}
	return ("Error");
}

