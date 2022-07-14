	<h1 align="center">Hi 👋, I'm IperEnma</h1>
<p align="left"> <img src="https://komarev.com/ghpvc/?username=iperenma&label=Profile%20views&color=0e75b6&style=flat" alt="iperenma" /> </p>

- 🌱 I’m currently learning **JAVA, C, Python, MySQL**

- 📫 How to reach me **enmanuelhernandez1843@gmail.com**

<h3 align="left">Connect with me:</h3>
<p align="left">
<a href="https://linkedin.com/in/enmanuel-h-a382b2121" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/linked-in-alt.svg" alt="enmanuel-h-a382b2121" height="30" width="40" /></a>
</p>

<h3 align="left">Languages and Tools:</h3>
<p align="left"> <a href="https://www.gnu.org/software/bash/" target="_blank" rel="noreferrer"> <img src="https://www.vectorlogo.zone/logos/gnu_bash/gnu_bash-icon.svg" alt="bash" width="40" height="40"/> </a> <a href="https://www.cprogramming.com/" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/c/c-original.svg" alt="c" width="40" height="40"/> </a> <a href="https://git-scm.com/" target="_blank" rel="noreferrer"> <img src="https://www.vectorlogo.zone/logos/git-scm/git-scm-icon.svg" alt="git" width="40" height="40"/> </a> <a href="https://www.java.com" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/java/java-original.svg" alt="java" width="40" height="40"/> </a> <a href="https://www.linux.org/" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/linux/linux-original.svg" alt="linux" width="40" height="40"/> </a> <a href="https://www.mysql.com/" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/mysql/mysql-original-wordmark.svg" alt="mysql" width="40" height="40"/> </a> <a href="https://www.python.org" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/python/python-original.svg" alt="python" width="40" height="40"/> </a> </p>

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
