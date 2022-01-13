cd .. &&
g++ -c -DBUILD_MY_DLL ./src/core/*.cpp -shared -D AMP_PLATFORM_WINDOWS -D AMP_BUILD_DLL &&
g++ -o ./bin/ampere.dll ./*.o -Wl,--out-implib,./lib/libampere.a
$SHELL