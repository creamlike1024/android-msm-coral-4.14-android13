# Pixel 4 XL KernelSU kernel

Integrated [KernelSU](https://github.com/tiann/KernelSU)

Device: Pixel 4 XL  
Android version:13
Baseband version: g8150-00123-220708-B-8810441  
Kernel version: 4.14.276  
Build number: TP1A.221005.002.B2

Built with ThinLTO enabled, which is not compatible with KernelSU kprobe intergration, so modifying source code manually is necessary.

You can apply [this patch](https://github.com/creamlike1024/android-msm-coral-4.14-android13/raw/master/kernelsu.patch) to kernel source tree.

Download flashable boot image from release.