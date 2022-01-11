cd .. &&
g++ -c -DBUILD_MY_DLL ./src/*.cpp -o ./bin/ampere.o
g++ -I ./include -L ./lib -lglfw3dll -lopengl32 -lglew32 -shared -o ./bin/ampere.dll ./bin/ampere.o -Wl,--out-implib,./lib/libampere.a &&
