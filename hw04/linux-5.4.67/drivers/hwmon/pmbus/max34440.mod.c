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
	{ 0xdfec67c9, "i2c_smbus_read_word_data" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0x71f3c1d7, "pmbus_do_probe" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x1c3cb19e, "pmbus_set_page" },
	{ 0xdb214bf7, "pmbus_read_word_data" },
	{ 0x8bdd022b, "pmbus_write_word_data" },
	{ 0x5c67de57, "pmbus_get_driver_info" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pmbus_core");

MODULE_ALIAS("i2c:max34440");
MODULE_ALIAS("i2c:max34441");
MODULE_ALIAS("i2c:max34446");
MODULE_ALIAS("i2c:max34451");
MODULE_ALIAS("i2c:max34460");
MODULE_ALIAS("i2c:max34461");

MODULE_INFO(srcversion, "299887BDBF60BAF2910EDC6");
