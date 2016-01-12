################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CC_SRCS += \
../src/CubeAsset.cc \
../src/GameAssetManager.cc \
../src/GameWorld.cc \
../src/main.cc 

O_SRCS += \
../src/CubeAsset.o \
../src/GameAssetManager.o \
../src/GameWorld.o \
../src/main.o 

CC_DEPS += \
./src/CubeAsset.d \
./src/GameAssetManager.d \
./src/GameWorld.d \
./src/main.d 

OBJS += \
./src/CubeAsset.o \
./src/GameAssetManager.o \
./src/GameWorld.o \
./src/main.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cc
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


