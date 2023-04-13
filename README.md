# Godot Judgement Day

There are a lot of bugs in Godot 4, time to judge them with the power of GDExtension.

## Build from source
```sh
git clone https://github.com/RechieKho/godot-judgement-day.git # clone this repo
cd godot-judgement-day
git submodule init thirdparty # initialize all the thirdparty
git submodule update --recursive # pull submodule content; this will take a while
mkdir build
cd build
cmake ..
cmake --build . # building the project; this will take a while; add `-j` flag to make it faster
```

After this, you can test things out by opening Godot project in `sample/` directory.
