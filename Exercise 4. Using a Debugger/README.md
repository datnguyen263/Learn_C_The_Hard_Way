# Exercise 4. Using a Debugger

GBD Tricks:

Here is a list of simple tricks you can do with GNU Debugger (GDB):
* **gdb --args** Normally, gdb takes arguments you give it and assumes they are for itself. Using --arg passes them to the program 

* **thread apply all bt** Dump a backtrace for all threads. It’s very useful.

* **gdb --batch --ex r --ex bt --ex q --args** Run the program so that if it bombs, you get a backtrace.

GDB Quick Reference

The video is good for learning how to use a debugger, but you’ll need to refer
back to the commands as you work. Here is a quick reference to the GDB
commands that I used in the video so you can use them later in the book: