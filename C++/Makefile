CXX := g++
CXXFLAGS := -std=c++17 -O2 -Wall -Wextra -pedantic

# Find all .cc sources in the repo (excluding bin and .git)
SRCS := $(shell find . -name '*.cc' -not -path './bin/*' -not -path './.git/*')
BINARY := bin/main

.PHONY: all clean run

all: $(BINARY)

$(BINARY):
	@mkdir -p bin
	$(CXX) $(CXXFLAGS) -o $(BINARY) $(SRCS)

run: all
	./$(BINARY)

clean:
	rm -rf bin
