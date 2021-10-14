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
	{ 0xb4792dec, "gpiod_get_value_cansleep" },
	{ 0x4ebbffb7, "devm_spi_register_controller" },
	{ 0x963cf8c8, "get_device" },
	{ 0x8d490e31, "spi_bitbang_init" },
	{ 0xe7aa24b2, "spi_bitbang_setup_transfer" },
	{ 0xe3e9bf89, "devm_gpiod_get" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0x78fedf54, "devm_gpiod_get_index" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x3abeb957, "devm_add_action" },
	{ 0xdd8a71cf, "__spi_alloc_controller" },
	{ 0x7ea19302, "put_device" },
	{ 0x1508d110, "spi_bitbang_setup" },
	{ 0xaa50c655, "spi_bitbang_cleanup" },
	{ 0x30e70d02, "gpiod_direction_output" },
	{ 0xf82a295d, "gpiod_direction_input" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "spi-bitbang");


MODULE_INFO(srcversion, "ADD917F979EFEB8E0EB3900");
