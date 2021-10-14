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
	{ 0x656e4a6e, "snprintf" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x13cb80df, "w1_write_8" },
	{ 0x63757e92, "w1_calc_crc8" },
	{ 0xf765945, "w1_read_block" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xccb61200, "w1_read_8" },
	{ 0x6a2a0a37, "w1_write_block" },
	{ 0xde3f3b95, "w1_reset_select_slave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "wire");


MODULE_INFO(srcversion, "9428EE5BAB623D22A8886E7");
