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
	{ 0x9a43e199, "_dev_info" },
	{ 0xd53f74e9, "fwnode_handle_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x571d537c, "device_property_read_u8_array" },
	{ 0xb2c20827, "regmap_read" },
	{ 0xe67878c0, "devm_led_classdev_register_ext" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf464add, "fwnode_property_read_string" },
	{ 0x250dc6c8, "fwnode_property_present" },
	{ 0xb8d89726, "fwnode_property_read_u32_array" },
	{ 0x6e626fc8, "device_get_next_child_node" },
	{ 0x3a8ba51f, "device_property_read_u32_array" },
	{ 0xfd1f31f7, "devm_regulator_get" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x5afa59fd, "device_get_child_node_count" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1fa8ea04, "regulator_enable" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0x30e70d02, "gpiod_direction_output" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:lm3532-led");
MODULE_ALIAS("of:N*T*Cti,lm3532");
MODULE_ALIAS("of:N*T*Cti,lm3532C*");

MODULE_INFO(srcversion, "C36D594631B2C9E5BE2B2F8");
