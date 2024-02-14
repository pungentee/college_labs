CC=clang++
CFALGS=-g -O0 -Wall -Wextra -std=c++11

# Algorithms/Programming
SUBJECT=Programming
LAB_NUM=13
TASK_NUM=1

LAB_SRC=./$(SUBJECT)/Laba $(LAB_NUM)
SOURCE=$(LAB_SRC)/task$(TASK_NUM).cpp

BUILD=./build/main

all:
	@$(CC) $(CFALGS) "$(SOURCE)" -o ./build/main
	@echo "Done!"

clear:
	@rm -rf ./build/*