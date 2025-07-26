CC = gcc
CFLAGS = -Wall -Wextra -O2 -std=c99
SRCDIR = src
BUILDDIR = build
BINDIR = bin
SRCS = $(wildcard $(SRCDIR)/*.c)
OBJS = $(patsubst $(SRCDIR)/%.c,$(BUILDDIR)/%.o,$(SRCS))
TARGET = $(BINDIR)/turnoflife

.PHONY: all render clean dirs test

# Default target
all: $(TARGET)

# Ensure build and bin directories exist
dirs:
	mkdir -p $(BUILDDIR) $(BINDIR)

# Link executable (after dirs are created)
$(TARGET): $(OBJS) | dirs
	$(CC) $(CFLAGS) -o $@ $^

# Compile source files into build directory (ensuring dirs exist)
$(BUILDDIR)/%.o: $(SRCDIR)/%.c | dirs
	$(CC) $(CFLAGS) -c $< -o $@

# Build with rendering enabled
render: CFLAGS += -DRENDER
render: clean all

# Run tests (stubbed)
test: all
	@echo "Running test suite (no tests defined)"

# Clean build artifacts (removes build and bin directories)
clean:
	rm -rf $(BUILDDIR) $(BINDIR)
