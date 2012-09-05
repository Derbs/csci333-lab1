COMP = g++
WARNINGS = -Wall -Wextra -Werror -pedantic -Weffc++

hello: hello.cpp
	$(COMP) $(WARNINGS) -o hello hello.cpp
euler34: Euler34.cpp
	$(COMP) $(WARNINGS) -o euler34 Euler34.cpp 
