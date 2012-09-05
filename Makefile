COMP = g++
WARNINGS = -Wall -Wextra -Werror -pedantic -Weffc++

hello: hello.cpp
	$(COMP) -o hello hello.cpp $(WARNINGS)
euler34: Euler34.cpp
	$(COMP) -o euler34 Euler34.cpp $(WARNINGS)
