#include <iostream>
#include <string>
#include "Direction.hpp"
using namespace std;

namespace ariel
{
    class Notebook{
        public:
        void write(int p, int row, int col, Direction dir, string str);
        static string read(int p, int row, int col, Direction dir, int length);
        void erase(int p, int row, int col, Direction dir, int length);
        void show(int p);
    };
}