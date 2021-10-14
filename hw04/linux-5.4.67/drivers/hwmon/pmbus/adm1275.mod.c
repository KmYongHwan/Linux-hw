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
	{ 0xdb214bf7, "pmbus_read_word_data" },
	{ 0x1d39a3c5, "_dev_notice" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x71f3c1d7, "pmbus_do_probe" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x756785cc, "i2c_smbus_read_block_data" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3d6b934d, "pmbus_read_byte_data" },
	{ 0x8bdd022b, "pmbus_write_word_data" },
	{ 0x5c67de57, "pmbus_get_driver_info" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0xc6810ec2, "i2c_smbus_read_byte_data" },
	{ 0x2f4e42e1, "i2c_smbus_write_word_data" },
	{ 0xdfec67c9, "i2c_smbus_read_word_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pmbus_core");

MODULE_ALIAS("i2c:adm1075");
MODULE_ALIAS("i2c:adm1272");
MODULE_ALIAS("i2c:adm1275");
MODULE_ALIAS("i2c:adm1276");
MODULE_ALIAS("i2c:adm1278");
MODULE_ALIAS("i2c:adm1293");
MODULE_ALIAS("i2c:adm1294");

MODULE_INFO(srcversion, "88CD351557D76A3C2CFCBC6");
