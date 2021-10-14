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
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x80f7ee42, "__devm_iio_device_register" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0xe93f923f, "regmap_bulk_read" },
	{ 0x3abeb957, "devm_add_action" },
	{ 0x1fa8ea04, "regulator_enable" },
	{ 0xfd1f31f7, "devm_regulator_get" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("i2c:noa1305");
MODULE_ALIAS("of:N*T*Connn,noa1305");
MODULE_ALIAS("of:N*T*Connn,noa1305C*");

MODULE_INFO(srcversion, "31883DBDDF097B296FBA87A");
