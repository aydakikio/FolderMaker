# Folder Maker

Folder Maker is a simple C++ program that helps you create folders in a specified directory. The program supports generating folders with:

- Uppercase letters (A-Z)
- Lowercase letters (a-z)
- Numeric sequence (1-N)

## Features

- **Customizable Folder Path**: Set your desired folder path by updating the `path` variable.
- **Flexible Folder Types**: Choose from three folder types:
  - A-Z (uppercase letters)
  - a-z (lowercase letters)
  - 1 to a user-defined number (numeric sequence)
- **User-Friendly Console Options**: The program guides you through selecting the desired option and inputting parameters.

## Prerequisites

- C++17 or later (for `<filesystem>` support)
- A compiler that supports C++17 (e.g., GCC, Clang, MSVC)

## Getting Started

### 1. Clone the Repository

```bash
git clone https://github.com/your-username/folder-maker.git
cd folder-maker
```

### 2. Update the Path

Replace the `PATH` in the `path` variable with the absolute path to the parent folder where you want to create subfolders.

```cpp
std::string path = "PATH"; // Example: "C:/Users/YourName/Documents/"
```

### 3. Compile the Code

Use a C++ compiler to compile the code. For example, with GCC:

```bash
g++ -std=c++17 folder_maker.cpp -o folder_maker
```

### 4. Run the Program

Execute the compiled program:

```bash
./folder_maker
```

## Usage

When you run the program, you will see the following options:

```
########################## Folder Maker ##########################
Please enter one of these options:
0 : Creating A-Z folders
1 : Creating a-z folders
2 : Creating 1-number folders
```

### Option 0: Create A-Z Folders
This option creates folders named `A`, `B`, ..., `Z` in the specified parent folder.

### Option 1: Create a-z Folders
This option creates folders named `a`, `b`, ..., `z` in the specified parent folder.

### Option 2: Create Numeric Folders
This option creates folders numbered from `1` to the user-defined number in the specified parent folder.

Example:
```
Option: 2
Please enter the number of folders that you want: 10
Creating folders ... Please Wait!
```
Creates folders `1`, `2`, ..., `10`.

### Invalid Input Handling
The program will display error messages for invalid inputs, such as non-numeric folder counts or unsupported options.

## Limitations

- Ensure the specified path exists and you have permission to write to it.
- The program does not handle duplicate folder names; existing folders with the same name will not be overwritten.

## Contributing

Contributions are welcome! If you encounter issues or have feature suggestions, feel free to open an issue or submit a pull request.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Crypto Donations

If you'd like to support this project, consider donating via cryptocurrency :)


   * BitCoin:
     
      > bc1qvg2q52vwpzfrqwjx73uf9q4esexwsxx3u63r9r
      
   * Ethereum:
     
      > 0x92e76FB62555C37eE39beBa5Cf17DB2C0f67856C
      
   * Litecoin:
     
      > ltc1ql4aau4ppcplddv224szvsav8zhqah474k009qk
      
   * Cardano:
     
      > addr1qxy0qskx0d74whguqn85gecf93dtry2j54eryr9agg52y86wj06yzk3pruy02ntwtak7m4naq8wvrj297jmg7eznunus9c7cw2


