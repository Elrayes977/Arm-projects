################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include MCAL/MUART/subdir.mk
-include MCAL/MSysTick/subdir.mk
-include MCAL/MSPI/subdir.mk
-include MCAL/MRCC/subdir.mk
-include MCAL/MNVIC/subdir.mk
-include MCAL/MGPIO/subdir.mk
-include MCAL/MEXTI/subdir.mk
-include MCAL/MDMA/subdir.mk
-include MCAL/MAFIO/subdir.mk
-include HAL/LED/subdir.mk
-include HAL/HSWITCH/subdir.mk
-include HAL/HLED_MRX/subdir.mk
-include APP/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := ARM_UART
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX := 
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME).$(BUILD_ARTIFACT_EXTENSION)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
ARM_UART.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
ARM_UART.list \

OBJCOPY_HEX += \
ARM_UART.hex \

OBJCOPY_BIN += \
ARM_UART.bin \


# All Target
all: main-build

# Main-build Target
main-build: ARM_UART.elf secondary-outputs

# Tool invocations
ARM_UART.elf: $(OBJS) $(USER_OBJS) G:\All\ emportant\ studies\NTI-embedded\ARM\NTI\MY\ workspace\ARM_UART\STM32F103C8TX_FLASH.ld makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-gcc -o "ARM_UART.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m3 -T"G:\All emportant studies\NTI-embedded\ARM\NTI\MY workspace\ARM_UART\STM32F103C8TX_FLASH.ld" --specs=nosys.specs -Wl,-Map="ARM_UART.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

ARM_UART.list: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "ARM_UART.list"
	@echo 'Finished building: $@'
	@echo ' '

ARM_UART.hex: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objcopy  -O ihex $(EXECUTABLES) "ARM_UART.hex"
	@echo 'Finished building: $@'
	@echo ' '

ARM_UART.bin: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "ARM_UART.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_HEX) $(OBJCOPY_BIN)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents fail-specified-linker-script-missing warn-no-linker-script-specified
.SECONDARY:

-include ../makefile.targets
