obj-m += device_driver.o

KDIR := /root/WSL2-Linux-Kernel
PWD := $(shell pwd)

all:
	make -C $(KDIR) M=$(PWD) modules

clean:
	make -C $(KDIR) M=$(PWD) clean
