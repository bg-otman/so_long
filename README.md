# so_long

## 🕹️ About
so_long is a 2D game built using the **MiniLibX** graphics library. The game involves navigating a player through a maze, collecting items, avoiding enemies, and reaching the exit.

## 📸 Screenshots
![game screenshot 13-00-35](https://github.com/user-attachments/assets/f5749f92-4b30-4c50-9792-1b1cf11d58dd)

## 🚀 Features
- 2D grid-based movement
- Player movement tracking
- Collectibles and obstacles
- Enemy
- Exit conditions
- Simple animations

## 🛠️ Installation & Usage
### 1. Clone the repository
```sh
git clone https://github.com/yourusername/so_long.git
cd so_long
```

### 2. Compile the game
```sh
make bonus
```

### 3. Run the game
```sh
./so_long maps/your_map.ber
```

## 🎮 Controls
| Key | Action |
|-----|--------|
| W   | Move Up |
| A   | Move Left |
| S   | Move Down |
| D   | Move Right |
| ESC | Quit Game |

## 🗺️ Map Format
The game takes a **.ber** map file as input. The map file follows a specific format:
```
111111
100001
10C0E1
100001
111111
```
- `1` → Wall
- `0` → Walkable space
- `C` → Collectible
- `E` → Exit
- `P` → Player start position

## 🧩 Dependencies
- **MiniLibX** (included in the project)
- **Make**
- **cc** compiler

## 📝 Notes
- Make sure your map is correctly formatted.
- The game window size is limited by MiniLibX.

## 🤝 Contributing
Feel free to fork this project and submit pull requests!
