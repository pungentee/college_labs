CC= clang++
FLAGS=-g -O0 -Wall -Wextra -std=c++20

# ------------------------------------------------------------------
# Algorithms/Programming
SUBJECT=Algorithms
LAB_NUM=5
TASK_NUM=1

SOURCE=./$(SUBJECT)/$(LAB_NUM)/$(TASK_NUM).cpp
# SOURCE=$(SUBJECT)/class.cpp

BUILD_DIR=build
EXEC=./$(BUILD_DIR)/main

all:
	@mkdir -p $(BUILD_DIR)
	@$(CC) $(FLAGS) "$(SOURCE)" -o ./build/main
	@echo "Compiled successfully!"

clear:
	@rm -rf ./$(BUILD_DIR)

run: all
	@./$(EXEC)
