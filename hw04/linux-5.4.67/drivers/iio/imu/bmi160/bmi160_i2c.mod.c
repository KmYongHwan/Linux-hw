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
	{ 0x890b3d61, "_dev_err" },
	{ 0x73bacf92, "bmi160_core_probe" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0xee213657, "bmi160_regmap_config" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "bmi160_core");

MODULE_ALIAS("acpi*:BMI0160:*");
MODULE_ALIAS("i2c:bmi160");

MODULE_INFO(srcversion, "E5184F0E4A06B2456E3DCB4");
