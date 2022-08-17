#!/bin/sh

# sh launcher for qemu vms, change accordingly for your system #

case $1 in
	"gentoo")
		exec qemu-system-x86_64 -enable-kvm \
        	-cpu host \
        	-drive file=images/vm-gentoo.img,if=virtio \
        	-netdev user,id=vmnic,hostname=gentoo-vm \
        	-device virtio-net,netdev=vmnic \
        	-device virtio-rng-pci \
        	-m 512M \
        	-smp 2 \
        	-monitor stdio \
        	-name "Gentoo" \
		-boot d \
		-cdrom isos/gentoo.iso
	;;

	"windows")
		qemu-system-x86_64 -enable-kvm \
        	-cpu host \
        	-drive file=images/vm-windows.img,if=virtio \
        	-net nic -net user,hostname=windowsvm \
        	-m 4G \
        	-monitor stdio \
        	-name "Windows" \
        	-drive file=isos/virtio-win.iso,media=cdrom
	;;
esac
