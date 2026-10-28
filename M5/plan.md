# Plan: The Spooky House

## Story
You find an old, spooky house while walking at night. The front door is locked, but the back door is open. Once inside, you can explore the kitchen, bedroom, and basement. Each room has its own choices, and some choices lead to different endings. You might find treasure, escape the house, or make a bad decision that ends your adventure.

## Story Map
main_menu
- 1 -> choice_front_door
  - 1 -> choice_back_door
  - 2 -> choice_go_home
- 2 -> choice_back_door
  - 1 -> choice_kitchen
    - 1 -> choice_pie_ending
    - 2 -> Continue exploring
    - Bedroom choice -> choice_bedroom
    - Basement choice -> choice_basement
    - Go home -> choice_go_home
  - 2 -> choice_bedroom
    - 1 -> Take a nap, then choose the next destination
    - 2 -> Leave the bedroom, then choose the next destination
    - Basement -> choice_basement
    - Go home -> choice_go_home
  - 3 -> choice_basement
    - 1 -> choice_treasure_ending
    - 2 -> choice_go_home
  - 4 -> choice_go_home
- 3 -> choice_go_home
- 4 -> Quit the game

choice_kitchen
- 1 -> choice_pie_ending
- 2 -> Leave the pie and continue exploring
- Bedroom choice -> choice_bedroom
- Basement choice -> choice_basement
- Go home -> choice_go_home

choice_bedroom
- 1 -> Take a nap, then choose the next destination
- 2 -> Leave the bedroom, then choose the next destination
- 1 -> choice_basement
- 2 -> choice_go_home

choice_basement
- 1 -> choice_treasure_ending
- 2 -> choice_go_home

## Endings
- choice_pie_ending -> The player eats the pumpkin pie, feels sick, and the adventure ends.
- choice_treasure_ending -> The player finds ancient gold, but a ghost curses them and haunts them forever.
- choice_go_home -> The player leaves the spooky house and goes home.

## Functions
- main_menu (starter)
- choice_front_door (starter)
- choice_back_door (starter, filled in)
- choice_go_home (starter, ending)
- choice_kitchen (new story function)
- choice_bedroom (new story function)
- choice_basement (new story function)
- choice_pie_ending (new, ending)
- choice_treasure_ending (new, ending)