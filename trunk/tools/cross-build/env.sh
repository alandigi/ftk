#export ARCH=arm
#export HOST_PARAM=--host=arm-linux
#export TARGET_CC=arm-linux-gcc
#export PATH=/usr/local/arm-linux-4.1.1/bin/:$PATH

export ARCH=mipsel
export HOST_PARAM=--host=mipsel-linux
export TARGET_CC=mipsel-linux-gcc
export PATH=/work/lab/mipseltools-gcc412-glibc261/bin:$PATH

export BUILD_DIR=$PWD/$ARCH
export PREFIX=$BUILD_DIR/usr
export PKG_CONFIG_PATH=$PREFIX/lib/pkgconfig/
export LDFLAGS="-L$PREFIX/lib"
export CFLAGS="-I$PREFIX/include"