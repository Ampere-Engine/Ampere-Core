cd .. &&
g++ -c -DBUILD_MY_DLL ./src/**/*.cpp -o ./bin/ampere.o -D AMP_PLATFORM_WINDOWS -D AMP_BUILD_DLL
g++ -I ./include -L ./lib -lglfw3dll -lopengl32 -lglew32 -shared -o ./bin/ampere.dll ./bin/ampere.o -Wl,--out-implib,./lib/libampere.a &&