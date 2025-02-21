# Intro to C Weekly Projects

In this repository, you will find a collection of short, simple programs written in C. These programs coincide with the **Intro to C Programming** course I'm taking. The main goal of this repository is to track my progress in learning C and help apply the knowledge I gain in each class to a real project.

## How to Run Programs

Since object files are platform-dependent, you must **compile and run the source code** yourself. You can do so on your local machine, or follow these steps to take advantage of GitHub Codespaces, a secure cloud development environment built into GitHub:

### 1) Open GitHub Codespaces
* In this repository, click the green **_< > Code_** button.
* In the dropdown menu, click the **_Codespaces_** tab.
* Click the **_+_** symbol to create a new Codespace.

### 2) Navigate to a Directory
* Once you're inside the cloud development environment, open the **_terminal_** and navigate to the directory of the project you wish to run:
    ```bash
    cd {week-number-folder}/{project-name-folder}
    ```
    Example: 
    ```bash
    cd week-3-data-in-c/temperature-converter
    ```

* Use `gcc` (pre-installed by default) to compile the C source file into an object file:
    ```bash
    gcc {file_name}.c -o {object_file_name}
    ```
    Example:
    ```bash
    gcc temperature_converter.c -o temperature_converter
    ```

* Run the compiled object file:
    ```bash
    ./{object_file_name}
    ```
    Example:
    ```bash
    ./temperature_converter
    ```

This will allow you to interact with each program in the terminal! To save time, you can quickly run the same program after running it once by hitting the up arrow on your keyboard. This will scroll through your most recent commmand history, which should be `./{object-file-name}`, and allow for easy rerunning of the same program. 
#### Note: Do not commit any changes to this repository while in Codespaces.
