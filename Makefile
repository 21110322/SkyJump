all:
    g++ -I include/ src/*.cpp -o bin/doodlejump

run:
    ./bin/doodlejump

    //Compila con make all 
    make run para ejecutar
    