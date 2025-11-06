PROJECT = Transformers
CXX = g++ C
XXFLAGS = -Wall -Wextra
SRC = main.cpp Transformer.cpp Autobot.cpp Decepticon.cpp Maximal.cpp Weapon.cpp TargetSys.cpp
OBJ = $(SRC:.cpp=.o)

.PHONY: all clean

all: $(PROJECT)

$(PROJECT): $(OBJ)
  $(CXX) -o $@ $^ $(CXXFLAGS)

%.o: %.cpp
  $(CXX) -c -o $@ $< $(CXXFLAGS)

clean:
  rm -f $(OBJ) $(PROJECT)
