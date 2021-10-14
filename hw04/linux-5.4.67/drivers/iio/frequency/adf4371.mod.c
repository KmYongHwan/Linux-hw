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
	{ 0x890b3d61, "_dev_err" },
	{ 0x80f7ee42, "__devm_iio_device_register" },
	{ 0x2bc97e5a, "device_property_present" },
	{ 0x4074809f, "regmap_multi_reg_write" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x3abeb957, "devm_add_action" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x42d6f363, "__devm_regmap_init_spi" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0xf1de7d06, "spi_get_device_id" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0x2057f44d, "regmap_bulk_write" },
	{ 0xea124bd1, "gcd" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Cadi,adf4371");
MODULE_ALIAS("of:N*T*Cadi,adf4371C*");
MODULE_ALIAS("of:N*T*Cadi,adf4372");
MODULE_ALIAS("of:N*T*Cadi,adf4372C*");
MODULE_ALIAS("spi:adf4371");
MODULE_ALIAS("spi:adf4372");

MODULE_INFO(srcversion, "08D52E85D36446444C4EA5C");
