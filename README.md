# Rutherford's Scattering Experiment Simulation

This is an engine for replicating the alpha particle (blue dots) interaction with atom's nuclei (red dots)

# Requirements
>g++ compiler

>make

SDL2 Library is used for rendering graphics. It should automatically determine nVidia GPU specs. If not working, upload a compatible SDL2 release from [here](https://github.com/libsdl-org/SDL/releases/)

# Manually Build the program
```
git clone https://github.com/Yedi278/Rutherford-Scattering-Sim.git

cd Rutherford-Scattering-Sim

make all
```

if this doesn't run use:
```
./build/Build
```
# Check for dll library in build folder:
for the program to work it is required that the SDL2.dll file is stored in the same directory as build file.

# Examples.
![Alt Text](https://github.com/Yedi278/Rutherford-Scattering-Sim/blob/b45558b9e6e09e934655df0450ac1152b2aeab62/videos/first_video.gif)
