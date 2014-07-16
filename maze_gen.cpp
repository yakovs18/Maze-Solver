#include "maze_gen.h"

using namespace std;
int main(int argc, char *argv[]) {

  MazeGen maze;
  
  maze.buildMaze();
  maze.printMaze();
  return 0;
}
