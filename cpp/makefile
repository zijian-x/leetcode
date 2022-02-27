SRC_DIR := stringToIntegerAtoi
BIN_DIR := bin
NAME := $(BIN_DIR)/a.out

src := $(shell find $(SRC_DIR) -type f -name "*cpp")
obj := $(src:.cpp=.o)

UTILS_DIR := utils
utils_src := $(shell find $(UTILS_DIR) -type f -name "*cpp")
utils_obj := $(utils_src:.cpp=.o)

CC := g++
CFLAGS := -x c++ -std=c++20 -g -I$(UTILS_DIR)
ARGS :=

all: run

run: generate_cc $(NAME)
	./$(NAME) $(ARGS)

rerun: fclean run

$(NAME): $(utils_obj) $(obj)
	$(CC) $(utils_obj) $(obj) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $^ -o $@

leak: $(NAME)
	valgrind --leak-check=full $(NAME)

clean:
	$(RM) $(obj)

fclean: clean
	$(RM) $(NAME)

generate_cc:
	@echo $(CFLAGS) | sed 's/\s/\n/g' > compile_flags.txt

test:
	@echo $(utils_obj)