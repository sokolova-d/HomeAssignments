CXX = g++
CXXFLAGS = -std=c++17 -Wall
LDFLAGS = -lgtest -lgtest_main -pthread

SRC = Rational.cpp

TESTS = testRational.cpp testMatrix.cpp

OBJS = $(SRC:.cpp=.o)
TEST_OBJS = $(TESTS:.cpp=.o)

TARGET = Matrix

all: $(TARGET)

$(TARGET): $(OBJS) $(TEST_OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS) $(TEST_OBJS) $(LDFLAGS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f *.o $(TARGET)

run: $(TARGET)
	./$(TARGET)
