# hash-calculator-qt6
Hash calculator in Qt6

Graphical Hash Calculator written in C++/Qt6

By eanyx (eanyx123@gmail.com)

- Support :
    - MD5 (Legacy)
    - SHA1 (legacy)
    - SHA2 
    - SHA3
    - Keccak-512

- Support Linux, Windows and Mac OS X.
    - Tested on Ubuntu 20.04/22.04/24.04/26.04
    - Tested on Windows 10/11
    - Tested on Windows Server 2022
    - Tested on MacOS 27

- Support 32 and 64 bits architectures

- Compute hash of file up to 128 GB 
    - See limits (cpu, ram, filesystem) for some OS

Compilation :

git clone https://github.com/eanyx/hash-calculator-qt6.git 

For Linux:
	
	- Qt 6 IDE
	- gcc/g++ compilers

For Mac OS X:
	
	- Qt 6 IDE
	- X Code compiler

For Windows:
	
	- Qt 6 IDE
	- MinGW
	
Or command line build:

	mkdir build
    cd build
    cmake
	make

Launch:

	./hash-calculator

Enjoy !

