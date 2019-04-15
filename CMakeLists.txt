cmake_minimum_required(VERSION 3.12)
project(GenGpsMessage C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

#设置动态库链接目录
link_directories(/home/mrz/桌面/GenGpsMessage)

#设置要链接的库文件
set(GenGpsMessage libbdnma.so)

add_executable(GenGpsMessage
        getopt.c
        getopt.h
        gpssim.c
        gpssim.h
        brdc3540.14n
        bdnma.h
        bdnma_ds.h
        bdnma_keychain.h
        bdnma_mac.h
        bdnma_md.h
        bdnma_prng.h
        libbdnma.so
        utils.c
        utils.h
        )

TARGET_LINK_LIBRARIES(GenGpsMessage libm.so)
TARGET_LINK_LIBRARIES(GenGpsMessage libbdnma.so)

