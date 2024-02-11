CC=clang++
CFALGS=-std=c++11

LABA_SRC=./Laba $(l)
SOURCE=$(LABA_SRC)/task$(t).cpp

BUILD=./build/l$(l)_t$(t)

all:
	@$(CC) $(CFALGS) "$(SOURCE)" -o $(BUILD)
	@echo "Done!"

clear:
	@rm -rf ./build/*

run:
	@$(BUILD)
