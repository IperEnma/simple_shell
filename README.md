	

	It is a custom implementation of the C hsh programming sh shell.
	This project is an application of the C programming knowledge of the Holberton Schoolcohort 17.

DESCRIPTION


	hsh is a shell, it will run commands read from a command line string, standard input, or a specific file, and usually runs other programs. 
	This man page is not intended to be a tutorial or a complete selection of hsh.

	hsh prompts for input before each command in interactive mode.
	
	if you enter an empty line, hsh will show the prompt again.
	
	hsh first loads the paths where the programs the user wants to run are likely to be.
	
	hsh handles flags only from external programs.
	
	command search
		check that it is not an alias.

		check that it is not a built-in system command. the shell's built-in commands do not require the execution of an external program.
		
		if it is none of the above, then the shell checks that the "ls" program exists. what the system does is look for the directories 
		stored in the environment variable, called "PATH", which contains a list of directories and paths and checks that ls is in any of the
		directories, the commands that contain slash simply check if is a valid directory
		
		If any program fails in non-interactive mode, we will get the exit code of that program.
		
		to use the non-iterative mode we send the command to the hsh separating it with pipelines, example:
			echo "/bin/ls" | ./hsh
	
	
ENVIROMENT
	PATH 	The default search path for executables.
	
	PWD  	The logical value of the current working directory.
	
	OLDPWD 	The previous logical value of the current working directory.

EXAMPLE

	 1. Execute a shell command from non-interactive mode

                $ echo "/bin/ls" | ./hsh

        2. Execute a shell command from interactive mode

                first the shell is opened wich ./hsh and then we execute the command:

                $ ls -la

EXIT
	You can exit with exit command, hsh will exit with EXIT_SUCCESS

AUTHORS
	Enmanuel Hernandez and Jesus Hernandez
