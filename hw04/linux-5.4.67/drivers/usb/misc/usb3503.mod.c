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
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xc5850110, "printk" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x8b097b63, "devm_clk_get_optional" },
	{ 0x815588a6, "clk_enable" },
	{ 0x690e053c, "devm_gpio_request_one" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xc88d8e8e, "gpiod_set_raw_value_cansleep" },
	{ 0x91226d06, "gpio_to_desc" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:usb3503");

MODULE_INFO(srcversion, "4932CE9AE7F50006979ADFA");
