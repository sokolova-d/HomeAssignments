CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -Wpedantic -Werror -I.
LDFLAGS = -lgtest -lgtest_main -pthread

SRC = Transformer.cpp Autobot.cpp Decepticon.cpp Maximal.cpp Weapon.cpp TargetSys.cpp

TESTS = test_transformer.cpp test_autobot.cpp test_decepticon.cpp test_maximal.cpp

OBJS = $(SRC:.cpp=.o)
TEST_OBJS = $(TESTS:.cpp=.o)

TARGET = Transformers

all: $(TARGET)

$(TARGET): $(OBJS) $(TEST_OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS) $(TEST_OBJS) $(LDFLAGS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f *.o $(TARGET)

run: $(TARGET)
	./$(TARGET)
