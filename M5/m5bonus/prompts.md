# Prompt:

## Starting prompt
"I need help understanding this assignment and breaking it down into steps so I can work through it myself." (I pasted the assignment page and the
four files: vault.cpp, gym.cpp, overflow.cpp, Binary_Bench.html).

## How I used the AI
The first reply gave a full overview, including the flags and a sample passphrase. I then asked for the assignment to be explained step by step so I could run each command myself without getting confused.

## Pivot points
1. **File not found.** g++ said vault.cpp didn't exist. I sent a screenshot of my Explorer and found it was in M5/m5bonus, so I ran `cd M5/m5bonus`.
2. **Flag 1.** I ran `strings vault | grep -i -E "flag|cool"` and `./vault` myself and got the flag and the password from my own screen.
3. **Confusing output.** I asked what the new `vault` file was and why VS Code wouldn't open it. The AI explained it is the compiled program.
4. **Sum Gate arithmetic.** I didn't understand how the letters were chosen, so I asked for it to be explained. The AI walked through 531 - 99 = 432 and how swapping V for X fixes the gap. I ran the Python check and
   `./gym cVVVVX` myself.
5. **Second passphrase.** The AI suggested `cWVVVW` (raise one letter by 1, lower another by 1). I ran it and it printed correct.
6. **Stretch.** I didn't understand overflow.cpp, so the AI explained it in more detail using an egg-carton analogy.
7. **Write-up.** I answered both questions and then asked the AI to help fix my wording and put my answers together.

## What I did myself
Compiled both programs, ran every command captured both flags, and checked the sums in Python.

## What the AI did
The AI helped break down the assignment into smaller steps and explain things I didn't fully understand. I used it as a resource when I needed clarification so I could understand what I was doing and complete each part of the assignment myself.