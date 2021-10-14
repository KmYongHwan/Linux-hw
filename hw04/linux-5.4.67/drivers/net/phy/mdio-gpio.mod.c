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
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xf82a295d, "gpiod_direction_input" },
	{ 0x30e70d02, "gpiod_direction_output" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x168728b, "__mdiobus_register" },
	{ 0x67e5836a, "alloc_mdio_bitbang" },
	{ 0xfee2bce, "devm_gpiod_get_index_optional" },
	{ 0x78fedf54, "devm_gpiod_get_index" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0xb4792dec, "gpiod_get_value_cansleep" },
	{ 0x40faf735, "free_mdio_bitbang" },
	{ 0x4b28aef1, "mdiobus_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mdio-bitbang");

MODULE_ALIAS("of:N*T*Cvirtual,mdio-gpio");
MODULE_ALIAS("of:N*T*Cvirtual,mdio-gpioC*");

MODULE_INFO(srcversion, "C655288A20CBC671EFF277C");
