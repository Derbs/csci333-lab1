COMP = g++
WARNINGS = -Wall -Wextra -Werror -pedantic -Weffc++

hello: hello.cpp
	$(COMP) -o hello hello.cpp $(WARNINGS)
