#include <Arduino.h>

const byte charWidth = 7;
const byte charHeight = 13; // There are enough bits for 16, but Ivan's clock only uses 13 rows of marbles.

//--- Character bitmap --
int charbitmap[][charWidth] = {
    //-- 0 --
    {0b0000000000000000
    ,0b0000011110111100
    ,0b0000100000000010
    ,0b0000100000000010
    ,0b0000100000000010
    ,0b0000100000000010
    ,0b0000011110111100},

    //-- 1 --
    {0b0000000000000000
    ,0b0000011110111100
    ,0b0000000000000000
    ,0b0000000000000000
    ,0b0000000000000000
    ,0b0000000000000000
    ,0b0000000000000000},

    //-- 2 --
    {0b0000000000000000
    ,0b0000011110000000
    ,0b0000100001000010
    ,0b0000100001000010
    ,0b0000100001000010
    ,0b0000100001000010
    ,0b0000000000111100},

    //-- 3 --
    {0b0000000000000000
    ,0b0000011110111100
    ,0b0000100001000010
    ,0b0000100001000010
    ,0b0000100001000010
    ,0b0000100001000010
    ,0b0000000000000000},

    //-- 4 --
    {0b0000000000000000
    ,0b0000011110111100
    ,0b0000000001000000
    ,0b0000000001000000
    ,0b0000000001000000
    ,0b0000000001000000
    ,0b0000011110000000},

    //-- 5 --
    {0b0000000000000000
    ,0b0000000000111100
    ,0b0000100001000010
    ,0b0000100001000010
    ,0b0000100001000010
    ,0b0000100001000010
    ,0b0000011110000000},

    //-- 6 --
    {0b0000000000000000
    ,0b0000000000111100
    ,0b0000100001000010
    ,0b0000100001000010
    ,0b0000100001000010
    ,0b0000100001000010
    ,0b0000011110111100},

    //-- 7 --
    {0b0000000000000000
    ,0b0000011110111100
    ,0b0000100000000000
    ,0b0000100000000000
    ,0b0000100000000000
    ,0b0000100000000000
    ,0b0000000000000000},

    //-- 8 --
    {0b0000000000000000
    ,0b0000011110111100
    ,0b0000100001000010
    ,0b0000100001000010
    ,0b0000100001000010
    ,0b0000100001000010
    ,0b0000011110111100},

    //-- 9 --
    {0b0000000000000000
    ,0b0000011110111100
    ,0b0000100001000010
    ,0b0000100001000010
    ,0b0000100001000010
    ,0b0000100001000010
    ,0b0000011110000000}

};