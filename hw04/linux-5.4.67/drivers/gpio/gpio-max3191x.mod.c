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
	{ 0xaa8106bc, "crc8_populate_msb" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x56fc2c8e, "devm_gpiod_put_array" },
	{ 0x68a82987, "gpiochip_add_data_with_key" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x20a39986, "gpiod_set_array_value_cansleep" },
	{ 0xfb578fc5, "memset" },
	{ 0x20dbf27, "bitmap_alloc" },
	{ 0x2bc97e5a, "device_property_present" },
	{ 0x3a8ba51f, "device_property_read_u32_array" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xcb81dd8d, "devm_gpiod_get_array_optional" },
	{ 0xa1017bf3, "gpiod_count" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xe2aae5cc, "crc8" },
	{ 0xb4792dec, "gpiod_get_value_cansleep" },
	{ 0x85b7373, "spi_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4a95d625, "gpiochip_get_data" },
	{ 0xa77e039e, "gpiochip_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "crc8");

MODULE_ALIAS("spi:max31910");
MODULE_ALIAS("spi:max31911");
MODULE_ALIAS("spi:max31912");
MODULE_ALIAS("spi:max31913");
MODULE_ALIAS("spi:max31953");
MODULE_ALIAS("spi:max31963");

MODULE_INFO(srcversion, "5F57BFB4B34703F9E2DCAE5");
