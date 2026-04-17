# Pokemon fun game Design Doc

## 1. Project Overview
I mean we making pokemon basically

## 2. Core Goals
Build a playable game in c++ with:
 - Player
 - Pokemon
 - Turn battles
 - Abilities
 - Evolution
 - Team Manangement
 - Items
 - Turn from terminal to 2d rendered game (Finish the colsole game first)

 ## 3. Core Gameplay Loop
 1. Player gets to pick a starter pokemon
 2. Player enter battles
 3. Pokemon gain EXP from winning and player gets money
 4. Pokemon level up and increase stats
 5. Pokemon learn and can change abilities
 6. Some pokemon can evolve at specific levels or conditions
 7. Player builds a stronger team to defeat harder enemies

## 4. Main Systems

### 4.1 Player System
The player should have:
 - Name
 - Money
 - Team of up to 6
 - Inventory

 ### 4.2 Pokemon
 Each pokemon instance should have:
  - Species (i.e charmader pikachu squirtle)
  - Level
  - XP
  - Current HP
  - Max HP
  - Damage
  - Defense
  - Abilites
  - Faint status
  - Wild stat

### 4.3 Species System
Species data should define:
 - Name (of species)
 - Type
 - Base stats
 - Growth/Scaling rules
 - Evolution targer (what does it evolve to)
 - Evolution requirement
 - List of learnable abilites

### 4.4 Battle System
Battles are turn-based.
A turn should allow:
 - Use of abilites
 - Use of items
 - Running
 - Switching Pokemon
 - Capturing if wild

 ### 4.5 Ability System
 Abilities Should have:
  - Name
  - Some effect (damage/healing)
  - Number of uses
  - Specific Target
  - Message for use out of combat

### 4.6 Evolution System
Evolution should happen when conditions are met, such as
 - Reaching a required level
 - Using a specific item
 - Defeating certain enemies
 - Having certain pokemon in Team
 - Trading?

When evolved:
 - Species changes?
 - Stats increase
 - Now able to learn only from new set
 - Scalings change?

## 5 System Balence

### 5.1 Progress
 - Should progress through winning battles
 - Overall progress is beating specific characters
 - Enemies should lvl scale to area

 ### 5.2 Scaling
  - Levels add a state multiplied by TUNING values
  - Abilites should scale with stats
  - Evolving should be a buff

### 6. Data / Class Plan
Planned core classes or structs:
 - `Player`
 - `Pokemon`
 - `Species`
 - `Ability`
 - `Battle`

Possible relationship:
- `Species` = shared base data
- `Pokemon` = one actual creature with current state
- `Ability` = pokemon moves
- `Player` = owns a team of Pokemon

## 7. Initial Scope
Version 1 should include:
 - Create a few different pokemon
 - Create a player
 - Add pokemon to a team
 - Basic battle system
 - XP and leveling
 - One evolution example
 - A few abilities

## 8. Out of Scope For Now
Do not build yet:
 - Full map/world exploration
 - Complex UI
 - Items/shop system
 - Status effects
 - 2D renderer

## 9. Questions / Decisions To Finalize
- How should damage be calculated?
- How much XP is needed per level?
- Should type advantage be included now or later?



## 9. Milestones

### Milestone 1
Basic `Player` and `Pokemon` classes work ✔️

### Milestone 2
Battle system works with attack and fainting

### Milestone 3
XP, leveling, and stat scaling work

### Milestone 4
Abilities work

### Milestone 5
Evolution works

## 10. Notes
Keep the design flexible.
// Avoid making one class per Pokemon unless a Pokemon truly needs unique behavior.
// Prefer shared data + reusable systems.