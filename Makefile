CXX := g++
CXXFLAGS := -std=c++17 -Wall

BUILD_DIR := build

SRCS := $(wildcard *.cpp)
BINS := $(patsubst %.cpp,$(BUILD_DIR)/%,$(SRCS))

.PHONY: all clean

all: $(BINS)

$(BUILD_DIR)/%: %.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -o $@ $<

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

clean:
	rm -rf $(BUILD_DIR)
