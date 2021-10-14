#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x66984dba, "send_sig" },
	{ 0x5fbccbbb, "find_vpid" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xe6f9ebc7, "kernel_read" },
	{ 0x419b17f3, "bpfilter_ops" },
	{ 0xba312d7b, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0xcbee8302, "fork_usermode_blob" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5c84462b, "__put_task_struct" },
	{ 0x8d783de6, "__kernel_write" },
	{ 0x679ecdd0, "get_pid_task" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6C5B1AEA34CD0EE830D1D3A");
