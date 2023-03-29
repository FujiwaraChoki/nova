/*
This program takes a Word-File-Path from the System Commands
and converts it into a PDF-File.

MIT License:
Copyright (c) 2023 Sami Hindi

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

Author: Sami Hindi
Date: 2023-29-03
*/

#include <iostream>
#include "WordToPDF.hpp"

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        std::cout << "Please enter a Word-File-Path as a System Command." << std::endl;
        return 0;
    }

    std::string wordFilePath = argv[1];
    std::string pdfFilePath = wordFilePath.substr(0, wordFilePath.find_last_of('.')) + ".pdf";

    WordToPDF::convert(wordFilePath, pdfFilePath);

    return 0;
}