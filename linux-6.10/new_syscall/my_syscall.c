#include <linux/kernel.h>
#include <linux/syscalls.h>

asmlinkage long __arm64_sys_my_syscall(void){
	printk(KERN_INFO "This is the new system call Coral Jimenez Gudino implmented.\n");
	return 0;
}
