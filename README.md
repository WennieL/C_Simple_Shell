# Simple Shell

This is a simple shell Unix shell implementation developed as part of the curriclum at Holberton School.

## Features

- Interactive mode: Prompt user for commands and execute them.
- Non-interactive mode: Read commands from a stream (e.g., file or another program's output) and execute them.
- Command line arguments: Support for commands with arguments.
- Built-in functions:
  - `exit`: Terminate the shell.
  - `env`: Print the current environment variables.
- PATH handling: Search for executables in the PATH environment variable.
- Error handling: Proper handling of errors and edge cases.

## Installation

1. Clone the repository:

   ```bash
   git clone https://github.com/WennieL/C_simple_shell.git
   ```

2. Navigate to the project directory:
   ```bash
   cd C_simple_shell
   ```

3. Compile the source code:
   ```bash
   gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o shell
   ```

## Usage

### Interactive Mode: 

You will be prompted with a $ symbol to enter commands. 
Type your commands and press Enter to execute them. 
To exit the shell, type `exit`.

Your shell should work like this in interactive mode:

```bash
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```

### Non-interactive Mode

You can also run the shell in non-interactive mode by providing input from a stream. 
For example, you can pipe commands from a file or another program's output:

Your shell should work like this in non-interactive mode:

```bash
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
```

## Built-in Commands
`exit`: Terminate the shell. \n
`env`: Print the current environment variables.

## Authors
Please read [AUTHORS](https://github.com/WennieL/C_Simple_Shell/blob/main/AUTHORS) file for details.
