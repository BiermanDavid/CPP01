CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++17
OBJ_DIR = objects

SRC =	main.cpp \
		HumanA.cpp \
		HumanB.cpp \

OBJ = $(patsubst %.cpp,$(OBJ_DIR)/%.o,$(SRC))

TARGET = fight

GREEN = \033[1;32m
WHITE = \033[0m

all: $(TARGET)
	@echo "$(GREEN)Build Completed -> Run with ./fight$(WHITE)"

$(TARGET): $(OBJ)
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(TARGET)

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR) $(TARGET)

re: clean all