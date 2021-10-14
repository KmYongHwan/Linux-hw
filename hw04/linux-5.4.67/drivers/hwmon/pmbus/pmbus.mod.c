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
	{ 0x71f3c1d7, "pmbus_do_probe" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x180a7579, "pmbus_clear_faults" },
	{ 0x1c3cb19e, "pmbus_set_page" },
	{ 0x3d6b934d, "pmbus_read_byte_data" },
	{ 0x4890a33d, "pmbus_check_word_register" },
	{ 0xb7feba7a, "pmbus_check_byte_register" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pmbus_core");

MODULE_ALIAS("i2c:adp4000");
MODULE_ALIAS("i2c:bmr453");
MODULE_ALIAS("i2c:bmr454");
MODULE_ALIAS("i2c:dps460");
MODULE_ALIAS("i2c:dps650ab");
MODULE_ALIAS("i2c:dps800");
MODULE_ALIAS("i2c:mdt040");
MODULE_ALIAS("i2c:ncp4200");
MODULE_ALIAS("i2c:ncp4208");
MODULE_ALIAS("i2c:pdt003");
MODULE_ALIAS("i2c:pdt006");
MODULE_ALIAS("i2c:pdt012");
MODULE_ALIAS("i2c:pmbus");
MODULE_ALIAS("i2c:sgd009");
MODULE_ALIAS("i2c:tps40400");
MODULE_ALIAS("i2c:tps544b20");
MODULE_ALIAS("i2c:tps544b25");
MODULE_ALIAS("i2c:tps544c20");
MODULE_ALIAS("i2c:tps544c25");
MODULE_ALIAS("i2c:udt020");

MODULE_INFO(srcversion, "96893715ECAA0AD668C6C1C");
