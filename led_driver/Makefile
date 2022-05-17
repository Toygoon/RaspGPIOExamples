KDIR = /lib/modules/$(shell uname -r)/build
MODULE_NAME = led_driver
APP_NAME = led_driver
TOOLCHAIN = arm-linux-gnueabihf-
CC := $(TOOLCHAIN)gcc
obj-m := $(MODULE_NAME).o
all: app driver
driver:
	$(MAKE) -C $(KDIR) M=$$PWD modules
app:
	$(MAKE) --ignore-errors -C /lib/modules/5.15.36-v7l+/build M=$$PWD modules
clean:
	$(MAKE) -C $(KDIR) M=$$PWD clean
