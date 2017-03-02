#Learn about TDD
This project aims an implementation of Soudex using TDD strategy based on book *Modern C++ Programming with Test-Driven Development*

##Pre-requisites
1. Gtest
https://github.com/google/googletest/tree/master/googletest -automatic!
[GTest](https://github.com/google/googletest/tree/master/googletest)
2. GMock
https://github.com/google/googletest/tree/master/googlemock -automatic!
[GTest](https://github.com/google/googletest/tree/master/googlemock)

##HOW TO INSTALL PRE-REQUESITES
1. Gtest
	sudo apt-get install cmake
	sudo apt-get install libgtest-dev
	cd /usr/src/gtest
	sudo mkdir build; cd build
	sudo cmake ../
	sudo make
	sudo cp *.a /usr/lib
2. GMock
	sudo apt-get install cmake
	sudo apt-get install google-mock
	cd /usr/src/gmock
	sudo mkdir build; cd build
	sudo cmake ../
	sudo make
	sudo cp *.a /usr/lib
