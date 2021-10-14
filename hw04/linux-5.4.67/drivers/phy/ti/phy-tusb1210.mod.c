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
	{ 0xfc840a1d, "ulpi_unregister_driver" },
	{ 0x4384268f, "__ulpi_register_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x766a9ea1, "phy_create_lookup" },
	{ 0xbff0e314, "phy_create" },
	{ 0x571d537c, "device_property_read_u8_array" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xdff168db, "phy_destroy" },
	{ 0x1e2e8645, "phy_remove_lookup" },
	{ 0xe51be03e, "ulpi_read" },
	{ 0xec79ead4, "ulpi_write" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ulpi");

MODULE_ALIAS("ulpi:v0451p1507");
MODULE_ALIAS("ulpi:v0451p1508");

MODULE_INFO(srcversion, "43DBFC02588A51CA77ABD15");
