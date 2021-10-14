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
	{ 0xab334ebf, "w1_unregister_family" },
	{ 0xa02639dc, "w1_register_family" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6a2a0a37, "w1_write_block" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xccb61200, "w1_read_8" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x6b505f55, "w1_triplet" },
	{ 0x13cb80df, "w1_write_8" },
	{ 0xa0f3a603, "w1_reset_bus" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "wire");


MODULE_INFO(srcversion, "817EE9100E3D984B7D7F93D");
