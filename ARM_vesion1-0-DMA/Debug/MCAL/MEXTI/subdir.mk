################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAL/MEXTI/MEXTI_prog.c 

OBJS += \
./MCAL/MEXTI/MEXTI_prog.o 

C_DEPS += \
./MCAL/MEXTI/MEXTI_prog.d 


# Each subdirectory must supply rules for building sources it contributes
MCAL/MEXTI/MEXTI_prog.o: ../MCAL/MEXTI/MEXTI_prog.c MCAL/MEXTI/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C8Tx -c -I"E:/Abdo/embedded/NTI-embedded/ARM/NTI/MY workspace/ARM_vesion1-0-DMA/MCAL/MAFIO" -I"E:/Abdo/embedded/NTI-embedded/ARM/NTI/MY workspace/ARM_vesion1-0-DMA/MCAL/MEXTI" -I"E:/Abdo/embedded/NTI-embedded/ARM/NTI/MY workspace/ARM_vesion1-0-DMA/MCAL/MNVIC" -I../Inc -I"E:/Abdo/embedded/NTI-embedded/ARM/NTI/MY workspace/ARM_vesion1-0-DMA/HAL/HLED_MRX" -I"E:/Abdo/embedded/NTI-embedded/ARM/NTI/MY workspace/ARM_vesion1-0-DMA/MCAL/MSysTick" -I"E:/Abdo/embedded/NTI-embedded/ARM/NTI/MY workspace/ARM_vesion1-0-DMA/HAL/HSWITCH" -I"E:/Abdo/embedded/NTI-embedded/ARM/NTI/MY workspace/ARM_vesion1-0-DMA/HAL/LED" -I"E:/Abdo/embedded/NTI-embedded/ARM/NTI/MY workspace/ARM_vesion1-0-DMA/MCAL/MGPIO" -I"E:/Abdo/embedded/NTI-embedded/ARM/NTI/MY workspace/ARM_vesion1-0-DMA/MCAL/MRCC" -I"E:/Abdo/embedded/NTI-embedded/ARM/NTI/MY workspace/ARM_vesion1-0-DMA/HAL" -I"E:/Abdo/embedded/NTI-embedded/ARM/NTI/MY workspace/ARM_vesion1-0-DMA/LIB" -I"E:/Abdo/embedded/NTI-embedded/ARM/NTI/MY workspace/ARM_vesion1-0-DMA/MCAL" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"MCAL/MEXTI/MEXTI_prog.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

