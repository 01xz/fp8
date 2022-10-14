CC = clang
CXX = clang++

FLAGS = -Ilib -O2 -Wall -g
CFLAGS = -std=c99 $(FLAGS)
CXXFLAGS = -std=c++11 $(FLAGS)

LIB_TARGET = lib/libfp8.a
LIB_OBJ = lib/fp8.o lib/utils.o

TARGET = fp8
OBJ = main.o $(LIB_TARGET)

all: $(TARGET) $(TEST_TARGET)

clean:
	-rm -f lib/*.o $(LIB_TARGET)
	-rm -f *.o $(TARGET)

$(LIB_TARGET): $(LIB_OBJ)
	ar rcs $@ $^

$(TARGET): $(OBJ)
	$(CXX) -o $@ $^

%.o: %.cpp
	$(CXX) -o $@ $(CXXFLAGS) -c $^

%.o: %.c
	$(CC) -o $@ $(CFLAGS) -c $^
