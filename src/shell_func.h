/*
*  functions used in myshell.c
*/

int find_index(char *command, char *intern_com[], int size_intc);
int redir_io(char **tokens, char *io_dir);
int bg_exec(char **tokens);
// internal command functions:
void clear(char **tokens);
void quit(char **tokens);
void change_dir(char **tokens);
void echo(char **tokens);
void pause_enter(char **tokens);
void help(char **tokens);
