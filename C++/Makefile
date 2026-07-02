CXX      := g++
CXXFLAGS := -std=c++17 -O2 -Wall -Wextra -pedantic
BINARY   := bin/main

ifndef FILE
  FILE := $(shell find . \( -name '*.cc' -o -name '*.cpp' \) \
             -not -path './bin/*' -not -name 'main.cpp' -not -name '1.cpp' -not -path './.git/*' \
             | xargs ls -t 2>/dev/null | head -1)
endif

.PHONY: all clean run list $(BINARY)

all: $(BINARY)

$(BINARY): main.cpp $(FILE)
	@mkdir -p bin
	@echo "  Building: $(FILE)"
	$(CXX) $(CXXFLAGS) -DPROBLEM_INCLUDE='"$(FILE)"' -o $(BINARY) main.cpp

run: all
	@echo "  Running:  $(FILE)"
	./$(BINARY)

list:
	@echo "Available problems:"
	@find . \( -name '*.cc' -o -name '*.cpp' \) \
	  -not -path './bin/*' -not -name 'main.cpp' -not -name '1.cpp' -not -path './.git/*' | sort

clean:
	rm -rf bin
