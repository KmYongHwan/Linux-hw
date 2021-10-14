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
	{ 0x97f60368, "pmbus_do_remove" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4120826d, "pmbus_get_fan_rate_device" },
	{ 0xdb214bf7, "pmbus_read_word_data" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0x1c3cb19e, "pmbus_set_page" },
	{ 0x3d6b934d, "pmbus_read_byte_data" },
	{ 0xbe1c08eb, "pmbus_update_fan" },
	{ 0xf6b14355, "pmbus_get_fan_rate_cached" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x71f3c1d7, "pmbus_do_probe" },
	{ 0xdfec67c9, "i2c_smbus_read_word_data" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pmbus_core");

MODULE_ALIAS("of:N*T*Cmaxim,max31785");
MODULE_ALIAS("of:N*T*Cmaxim,max31785C*");
MODULE_ALIAS("of:N*T*Cmaxim,max31785a");
MODULE_ALIAS("of:N*T*Cmaxim,max31785aC*");
MODULE_ALIAS("i2c:max31785");
MODULE_ALIAS("i2c:max31785a");

MODULE_INFO(srcversion, "8FBA639A66EABB1E33FD3CE");
