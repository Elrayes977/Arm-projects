################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAL/MRCC/MRCC_prg.c 

OBJS += \
./MCAL/MRCC/MRCC_prg.o 

C_DEPS += \
./MCAL/MRCC/MRCC_prg.d 


# Each subdirectory must supply rules for building sources it contributes
MCAL/MRCC/MRCC_prg.o: ../MCAL/MRCC/MRCC_prg.c MCAL/MRCC/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C8Tx -c -I"F:/All emportant studies/NTI-embedded/ARM/NTI/MY workspace/ARM_Labs/MCAL/MAFIO" -I"F:/All emportant studies/NTI-embedded/ARM/NTI/MY workspace/ARM_Labs/MCAL/MEXTI" -I"F:/All emportant studies/NTI-embedded/ARM/NTI/MY workspace/ARM_Labs/MCAL/MNVIC" -I../Inc -I"F:/All emportant studies/NTI-embedded/ARM/NTI/MY workspace/ARM_Labs/HAL/HLED_MRX" -I"F:/All emportant studies/NTI-embedded/ARM/NTI/MY workspace/ARM_Labs/MCAL/MSysTick" -I"F:/All emportant studies/NTI-embedded/ARM/NTI/MY workspace/ARM_Labs/HAL/HSWITCH" -I"F:/All emportant studies/NTI-embedded/ARM/NTI/MY workspace/ARM_Labs/HAL/LED" -I"F:/All emportant studies/NTI-embedded/ARM/NTI/MY workspace/ARM_Labs/MCAL/MGPIO" -I"F:/All emportant studies/NTI-embedded/ARM/NTI/MY workspace/ARM_Labs/MCAL/MRCC" -I"F:/All emportant studies/NTI-embedded/ARM/NTI/MY workspace/ARM_Labs/HAL" -I"F:/All emportant studies/NTI-embedded/ARM/NTI/MY workspace/ARM_Labs/LIB" -I"F:/All emportant studies/NTI-embedded/ARM/NTI/MY workspace/ARM_Labs/MCAL" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"MCAL/MRCC/MRCC_prg.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

