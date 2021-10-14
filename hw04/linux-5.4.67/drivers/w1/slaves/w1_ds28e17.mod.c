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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x84972054, "param_ops_byte" },
	{ 0xab334ebf, "w1_unregister_family" },
	{ 0xa02639dc, "w1_register_family" },
	{ 0xb7146edb, "i2c_add_adapter" },
	{ 0xe914e41e, "strcpy" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x8c74c1d3, "w1_reset_resume_command" },
	{ 0xf765945, "w1_read_block" },
	{ 0xbd6841d4, "crc16" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x12a38747, "usleep_range" },
	{ 0x887dbb12, "w1_touch_bit" },
	{ 0xf4358872, "devm_kfree" },
	{ 0x39932179, "i2c_del_adapter" },
	{ 0xccb61200, "w1_read_8" },
	{ 0x13cb80df, "w1_write_8" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x6a2a0a37, "w1_write_block" },
	{ 0xde3f3b95, "w1_reset_select_slave" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "wire");


MODULE_INFO(srcversion, "15E89FF0209D7B4579CC792");
