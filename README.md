# The Magic Calculator

The most magical and most fast calculator there ever was, that makes absolutely *no* mistakes at all!

Check out [the website for more information!](https://nbiancolin.github.io/magic-calculator/)
(currently, compilation only works on Linux Machines, but using the source code you can compile it however you need with the source files)

# NOTE - Trying to exit the program leads to an infinite loop that I forgot to fix, so if something like that happens, make sure to exit

I don't have the time presently to go back and update this code, so its behaviour is a little weird sometimes

## What this actually does

It functions as a text-based calculator until the user tries to input 5 x 5, to which the response is incorrect. Then, the user can correct the calculator, and it will return to functioning as expected, until the user asks it 5 x 5 again, at which point it becomes sentient. Fun stuff.

## What happens under the hood

Uses stringstreams to parse user input, and a switch statement to control game logic. I was working on using a game-object to store game state as opposed to a single integer and a switch statement, maybe if I go back at some point and work on it I'll make the changes but for now it's fine. 

Produced for my friends and I to prepare for our finals in ECE244 (C++ Programming) and MAT291/290 (Multivariable Calculus / Electromagnetism & Advanced Engineering Mathematics)
