CC= clang++
FLAGS=-g -O0 -Wall -Wextra -std=c++11

# ------------------------------------------------------------------
SUBJECT=Programming# Algorithms/Programming
LAB_NUM=16
TASK_NUM=1
# ------------------------------------------------------------------
LAB_DIR=./$(SUBJECT)/Laba $(LAB_NUM)
SOURCE=$(LAB_DIR)/task$(TASK_NUM).cpp
# SOURCE=$(SUBJECT)/class.cpp
# ------------------------------------------------------------------

BUILD_DIR=build
EXEC=./$(BUILD_DIR)/main

all:
	@$(CC) $(FLAGS) "$(SOURCE)" -o ./build/main
	@echo "Done!"

clear:
	@rm -rf ./$(BUILD_DIR)/*
