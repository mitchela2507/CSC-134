1. The game is a text adventure about escaping the Mayor’s haunted mansion.
2. The player can explore any of the mansion’s rooms.
3. The mansion contains collectible items. Some items are cursed; taking a cursed item causes the player to lose the game.
4. The player must find a blue key and use it to unlock the back door in the laundry room/mudroom to escape.
5. The player interacts using text commands, including `look`, `take` or `get`, and `go`.

Assited with luna(copilot) and mitchela

## Design

Use fixed-size arrays and enums. Do not use vectors, classes, structs, or `switch`; use `if` statements for command choices and `for`/`while` loops for repeated work.

Define enums for:
- **Room:** Foyer, Hall, Parlor, Dining Room, Kitchen, Study, Upstairs Hall, Bedroom, Laundry/Mudroom, and a `None` value.
- **Item:** Blue Key, Flashlight, Cursed Doll, Cursed Mirror, and a `None` value.
- **Game state:** Playing, Won, or Lost.

The blue key is placed in the Study as a proposed starting location. The cursed items can be placed in other rooms. All mansion rooms are connected so the player can explore them in any order; the back door is the only locked exit.

### Arrays

- `roomNames`: the display name for each room.
- `roomDescriptions`: a short description for each room.
- `roomConnections`: a two-dimensional array showing which rooms connect directly.
- `roomItems`: a two-dimensional array listing the items currently in each room. `None` marks an empty spot.
- `itemNames`: the display name for each item.
- `itemIsCursed`: whether each item is cursed.
- `playerInventory`: whether the player currently has each item.
- `commandInput`: the text the player types, such as `look`, `take blue key`, or `go study`.

Track the current room and game state with simple variables. When the player tries to take an item, check whether it is cursed first. If it is, set the game state to Lost; otherwise, move it from the room into the inventory.

## Game Loop

1. Set the player’s starting room to the Foyer and the game state to Playing.
2. While the game state is Playing:
   1. Show the current room’s name and description.
   2. Show the items in the room and the rooms directly connected to it.
   3. Ask the player to enter a command.
   4. Use `if` statements to decide what the command means:
      - `look`: describe the current room again.
      - `take` or `get`: find the named item in the room. If it is cursed, end the game as a loss. Otherwise, add it to the inventory and remove it from the room.
      - `go`: move to the named room if it is connected.
      - Going to the back door from the Laundry/Mudroom opens it and wins the game if the player has the Blue Key; otherwise, explain that it is locked.
      - For an unrecognized or invalid command, explain what went wrong and ask again.
3. When the game state changes to Won or Lost, display the matching ending message.