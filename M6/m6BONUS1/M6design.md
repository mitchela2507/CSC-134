1. The game is a text adventure about escaping the Mayor's haunted mansion.
2. The player can explore the mansion's rooms by walking north, east, south, and west.
3. The mansion contains collectible items. Some items are cursed; taking a cursed item causes the player to lose the game.
4. The player must find a blue key and use it to unlock the back door in the Laundry Room to escape.
5. The player interacts using text commands, including `look`, `take` or `get`, `north`/`east`/`south`/`west` (or `n`/`e`/`s`/`w`), `open door`, and `quit`.

Assisted by Luna (Copilot) with mitchela.

## Design

Use fixed-size arrays and enums. Do not use vectors, classes, structs, or `switch`; use `if` statements for command choices and `for`/`while` loops for repeated work.

Define enums for:
- **Direction:** North, East, South, West, and a count value.
- **Room:** Entrance Hall, Library, Kitchen, Garden, Basement, Laundry Room, and a count value.
- **Item:** Blue Key, Flashlight, Cursed Doll, Cursed Mirror, and a count value.

Game state is tracked with the booleans `gameRunning`, `gameWon`, and `gameLost`.

The blue key starts in the Kitchen, the flashlight in the Basement, the Cursed Doll in the Garden, and the Cursed Mirror in the Library. The Laundry Room connects only to the Basement, and the back door there is the only locked exit.

### Arrays

- `roomNames`: the display name for each room.
- `roomDescriptions`: a short description for each room.
- `connections`: a two-dimensional array of `[room][direction]` holding the room you reach, or -1 for no exit.
- `itemNames`: the display name for each item.
- `itemRoom`: the room number where each item is. The value -1 means the player is carrying it.
- `itemIsCursed`: whether each item is cursed.
- `command`: the line the player types, split into a `verb` and a `target` (for example `take` and `blue key`).

Track the current room and game state with simple variables. When the player tries to take an item, check whether it is cursed first. If it is, set `gameLost` to true; otherwise, set the item's `itemRoom` to -1 so the player is carrying it.

## Game Loop

1. Set the player's starting room to the Entrance Hall and `gameRunning` to true.
2. While the game is running and has not been won or lost:
   1. Show the current room's name and description.
   2. Show the items in the room and the exits (directions).
   3. Ask the player to enter a command.
   4. Use `if` statements to decide what the command means:
      - `north`, `east`, `south`, `west` (or `n`, `e`, `s`, `w`): move if there is an exit that way.
      - `look`: show the room again.
      - `take` or `get`: find the named item in the room. If it is cursed, set `gameLost`. Otherwise, set its `itemRoom` to -1.
      - `open door`: in the Laundry Room, win if the player has the Blue Key; otherwise, explain that it is locked. In other rooms, say there is no door.
      - `quit`: stop the game.
      - For an unrecognized command, explain what went wrong and ask again.
3. When the game ends, display the win or lose message.