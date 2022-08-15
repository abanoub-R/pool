#!/bin/bash

# THIS SCRIPT WAS TAKEN FROM WIKI.GENTOO.ORG WITH BOOT OPTIONS ADDED 
# IN ITS CURRENT STATE, THIS IS MEANT FOR A GENTOO ISO, TO USE IT ON
# YOUR SYSTEM, CHANGE THE OPTIONS BELOW.

exec qemu-system-x86_64 -enable-kvm \
        -cpu host \
        -drive file=images/vm-gentoo.img,if=virtio \
        -netdev user,id=vmnic,hostname=gentoo-vm \
        -device virtio-net,netdev=vmnic \
        -device virtio-rng-pci \
        -m 512M \
        -smp 2 \
        -monitor stdio \
        -name "VM" \
	-boot d \
	-cdrom isos/gentoo.iso \
        $@
