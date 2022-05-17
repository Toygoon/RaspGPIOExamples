MODULE_NAME = hello_driver
KDIR = /lib/modules/$(shell uname -r)/build
obj-m := $(MODULE_NAME).o
default:
	$(MAKE) -C $(KDIR) M=$$PWD modules
install:
	scp ./* pi@192.168.0.220:/home/pi
clean:
	$(MAKE) -C $(KDIR) M=$$PWD clean
