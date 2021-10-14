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
	{ 0xf3744f5f, "netdev_info" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x336d6dcb, "m_can_class_register" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x1fa8ea04, "regulator_enable" },
	{ 0xeb74317, "__devm_regmap_init" },
	{ 0x8392a4c1, "spi_setup" },
	{ 0x4fc91a1f, "devm_regulator_get_optional" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0xe3e9bf89, "devm_gpiod_get" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x670f8a03, "m_can_class_get_clocks" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xd7667509, "m_can_class_allocate_dev" },
	{ 0x8b591624, "m_can_class_unregister" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0xf96caeff, "m_can_init_ram" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2477c80f, "gpiod_set_value" },
	{ 0x4a96006f, "gpiod_get_value" },
	{ 0xb2c20827, "regmap_read" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x85b7373, "spi_sync" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc7666132, "spi_write_then_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "m_can");

MODULE_ALIAS("spi:tcan4x5x");
MODULE_ALIAS("of:N*T*Cti,tcan4x5x");
MODULE_ALIAS("of:N*T*Cti,tcan4x5xC*");

MODULE_INFO(srcversion, "0284881BBC8EA1C26BB8582");
