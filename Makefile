CC= clang++
FLAGS=-g -O0 -Wall -Wextra -std=c++20

# ------------------------------------------------------------------
# Algorithms/Programming
SUBJECT=Programming
LAB_NUM=21
TASK_NUM=1

SOURCE=./$(SUBJECT)/$(LAB_NUM)/$(TASK_NUM).cpp
# SOURCE=$(SUBJECT)/class.cpp

BUILD_DIR=build
EXEC=./$(BUILD_DIR)/main

all:
	@mkdir -p $(BUILD_DIR)
	@$(CC) $(FLAGS) "$(SOURCE)" -o ./build/main
	@echo "Compiled successfully!"
	@./$(EXEC)

clear:
	@rm -rf ./$(BUILD_DIR)

