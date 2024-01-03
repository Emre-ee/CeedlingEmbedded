# Scripts Usage

There are scripts for code beautification and static analysis. The use of these scripts is explained.


# Uncrustify

A source code beautifier for C, C++, C#, Objective-C, D, Java, Pawn and Vala.
For code beautification, the ```./code_beautifier.sh``` command should be run from the terminal line under the ```scripts``` folder. All codes are organized according to the ```uncrustify.cfg ``` configuration file.

# Cppcheck

Cppcheck is a static analysis tool for C/C++ code. It focuses on catching dangerous coding structures and undefined behavior and provides unique code analysis to catch errors. Cppcheck is designed to analyze C/C++ code if it is not in standard syntax (common in embedded projects). Cppcheck is available as open source.

The production code is analyzed by running the ```./html-report-stats/static_run.sh``` command under the ```scripts``` folder.
