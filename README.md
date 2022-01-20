## Setup cmake
### Prepare envirment
wget https://boostorg.jfrog.io/artifactory/main/release/1.71.0/source/boost_1_71_0.tar.gz
tar xzf  boost_1_71_0.tar.gz




```bash
mkdir bin
cd bin
cmake ..
```

## Buid
```bash
make
```

## Run
1. Add your API keys to the clients
2. Run the examples:
```bash
./src/example/rest_test
./src/example/ws_test
```
