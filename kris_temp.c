/**
 * this is just a file where i went through the shell2.c file
 * from Ben Harper's (HenBarper) shared test-super_simple_shell repo
 * to try to get an idea of what to do
 *
 * ignore it, im just gonna keep it for now in case i need to look back at it
 */


/**
 * [variables]
 * the input command
 * the array of separated strings from the inputted command
 * the number of these arguments
 * the process ID of the executing program (check if child or parent)
 * i, for loops
 *
 *
 * [infinite loop]
 *
 * prompt for user to type
 * getline <- allows user to type and keeps the info of what is typed
 * split up the string of the command into separate arguments
 * fork() <- creates a child process
 * !!the purpose of the child process is so that when execve is ran,
 * it doesn't stop the parent process (the loop & the rest of the function)!!
 *
 * [if statement]
 * if PID indicates that the current process is the child process:
 * execve <- executes the given commands
 *
 * [if statement]
 * if execve == -1 (doesn't work, basically):
 * perror("Error") & return (-1)
 * else, return (0)
 * [end of if statement]
 *
 * if PID indicates that the current process is the parent process:
 * wait(NULL) <- it waits to continue until the child process is finished running
 * [end of if statement]
 *
 * [end of infinite loop]
 *
 * return (0)
 */
