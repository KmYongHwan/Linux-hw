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
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xf490d28c, "__iio_device_register" },
	{ 0x984d22a0, "regulator_get_voltage" },
	{ 0x1fa8ea04, "regulator_enable" },
	{ 0x4fc91a1f, "devm_regulator_get_optional" },
	{ 0xf1de7d06, "spi_get_device_id" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x85b7373, "spi_sync" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0xd567ba2c, "iio_device_unregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Clltc,ltc2632-l12");
MODULE_ALIAS("of:N*T*Clltc,ltc2632-l12C*");
MODULE_ALIAS("of:N*T*Clltc,ltc2632-l10");
MODULE_ALIAS("of:N*T*Clltc,ltc2632-l10C*");
MODULE_ALIAS("of:N*T*Clltc,ltc2632-l8");
MODULE_ALIAS("of:N*T*Clltc,ltc2632-l8C*");
MODULE_ALIAS("of:N*T*Clltc,ltc2632-h12");
MODULE_ALIAS("of:N*T*Clltc,ltc2632-h12C*");
MODULE_ALIAS("of:N*T*Clltc,ltc2632-h10");
MODULE_ALIAS("of:N*T*Clltc,ltc2632-h10C*");
MODULE_ALIAS("of:N*T*Clltc,ltc2632-h8");
MODULE_ALIAS("of:N*T*Clltc,ltc2632-h8C*");
MODULE_ALIAS("spi:ltc2632-l12");
MODULE_ALIAS("spi:ltc2632-l10");
MODULE_ALIAS("spi:ltc2632-l8");
MODULE_ALIAS("spi:ltc2632-h12");
MODULE_ALIAS("spi:ltc2632-h10");
MODULE_ALIAS("spi:ltc2632-h8");

MODULE_INFO(srcversion, "9499609E22C66F89FAAACAA");
