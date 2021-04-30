
#include <iostream>
#include <libchessviz/move.h>
#include <libchessviz/print.h>
using namespace std;

int main()
{
     char sline1='p';
     char sline2='p';

     int column1=2;
     int column2=3;
    char chessboard[11][11]
            = {"1rnbqkbnr",
               "2pppppppp",
               "3        ",
               "4        ",
               "5        ",
               "6        ",
               "7PPPPPPPP",
               "8RNBQKBNR"};
    print(chessboard);
    while (1) {
        move(chessboard,"p","p",2,3);
    }
    return 0;
}
