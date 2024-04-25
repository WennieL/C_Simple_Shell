# Simple Shell

Simple Shell is a basic UNIX command-line interpreter written in C. It provides a minimalistic interface for executing commands and built-in functions, suitable for educational purposes or as a starting point for more advanced shell implementations.

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
   git clone https://github.com/WennieL/simple-shell.git
   ```

2. Navigate to the project directory:
   ```bash
   cd simple-shell
   ```

3. Compile the source code:
   ```bash
   gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o shell
   ```

## Usage

### Interactive Mode
Run the shell in interactive mode by executing the compiled binary:

   ```bash
    ./shell
   ```
You will be prompted with a $ symbol to enter commands. Type your commands and press Enter to execute them. 
To exit the shell, type `exit`.


### Non-interactive Mode
You can also run the shell in non-interactive mode by providing input from a stream. 
For example, you can pipe commands from a file or another program's output:

  ```bash
  echo "/bin/ls" | ./shell
  ```

## Built-in Commands
`exit`: Terminate the shell.
`env`: Print the current environment variables.


