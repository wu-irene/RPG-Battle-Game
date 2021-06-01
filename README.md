# RPG
 Authors: [Irene Wu](https://github.com/iwu021), [Jiaxing Lin](https://github.com/jlin1110) , [Xinyu Tong](https://github.com/xtong019) 

### Introduction 
All of the group members enjoy gaming as a hobby and know that many others do as well. Therefore, we wanted to create a short, but interesting and fun RPG game that is text interactive. The overall purpose of our game is demonstrate how multiple characters are used throughout the game. For example, the player will select a hero to play from and fight different bosses to level up to defeat the final boss. The user will enter a certain command to be performed and the program will execute that command. We created several interfaces with templates that can suit each character and to effectively determine attack strategies with a level up system. The enemies are designed to scale with level and their item drops are randomized. The user can manuver through several menus to buy, consume, view inventory or view their player information. 
### Languages/input & output
 We are going to be using C++ to create the program using linux/Github/UIDs and more. User input will be from a list of options that are provided at each turn of the game entered from the keyboard and the output is text that is generated from the project to the monitor. 
## Design patterns 
A design pattern we will be using is the Strategy Pattern where we can switch our attack and defense algorithms as well as swap out which character or enemy to be in battle that is instantiated in a function based on the player's level. Different difficulties of bosses have different strategies for attack and defense. For example, we created a class Godzilla as a final boss that utilizes a different attack and defense pattern from the rest of the enemies. By using strategy pattern, we can switch out which algorithm to use in game (as factors are not known until runtime) where algorithms are switched based on the type of character and is reusable for every enemy. The battle class refrences CharacterStrategies that is encapsulated separately to efficiently validate which algorithm to use. 

Another design pattern we will be using is the Factory pattern which is an abstract class implemented in our project that will return prototype objects of the enemy class as well as equipping and leveling them. We created two classes of enemies, a basic and elder(higher level) class of enemies that generates a battlable character through the function GetMonster(). Furthermore, through the factory producer, the type of enemy used is based on the player's progress or level in the game and is decided during run-time. Through this pattern, we are able to construct new enemies throughout the game by cloning prototypers, such as godzilla, and dispatch them to battle. 

Our third design pattern we will be using is the Decorator pattern where we can dynamically add items to “decorate” our character without affecting the behavior of other objects. During run-time, the user has the option to level up, therefore increasing his stats as the player progresses through the game. Additionally, the user is given the option to view their information within every menu with everything added through our Info() function that can be invoked to view the player's stats. The pattern is utilized to drive our menu system to equip, buy, and consume objects that affects the stats of our player based on which items they use. By subclassing, we can extend the functionality of items through backpacks and further how this is employed throughout the game. For example, when constructing enemies, their stats are automatically equipped by calling on the LeveledMonster class based on what type of enemy they are. 



## Class Diagram
!![Untitled Diagram](https://user-images.githubusercontent.com/81549188/120366958-20d35a00-c2c5-11eb-9b1b-d7d2f3325dca.png)

 
 ## Screenshots
 > Screenshots of the input/output after running your application
 > ![1](https://user-images.githubusercontent.com/81549188/120361949-5bd28f00-c2bf-11eb-9cf4-f5c782aeea12.png)
 > ![2](https://user-images.githubusercontent.com/81549188/120361981-668d2400-c2bf-11eb-8db1-d1c281830585.png)
 > ![3](https://user-images.githubusercontent.com/81549188/120361993-6a20ab00-c2bf-11eb-8206-a6d932fcb6a1.png)


 ## Installation/Usage
The user would need to clone or upload all the files in order to install the program but running Program.cpp will directly run the entire game. 
 ## Testing
 We created test classes that tested constructing objects such as items, heros, backpacks and more with several values. We tested if the values from the Get functions for statistics matched what we constructed. We also created tests for switching to different attack algorithms using strategy as well as testing buying/selling/updating an item from the store as well as using a consumable. 
 
