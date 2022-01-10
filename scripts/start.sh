cd .. &&
g++ ./src/*.cpp ./src/graphics/*.cpp -I ./include -L ./lib -lglfw3dll -lopengl32 -lglew32 -o ./bin/ampere &&
./bin/ampere.exe