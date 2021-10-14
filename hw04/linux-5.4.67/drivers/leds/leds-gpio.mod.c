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
	{ 0x9a43e199, "_dev_info" },
	{ 0x91226d06, "gpio_to_desc" },
	{ 0x690e053c, "devm_gpio_request_one" },
	{ 0x78fedf54, "devm_gpiod_get_index" },
	{ 0xd53f74e9, "fwnode_handle_put" },
	{ 0xf464add, "fwnode_property_read_string" },
	{ 0x5fb56dbf, "devm_fwnode_get_index_gpiod_from_child" },
	{ 0x6e626fc8, "device_get_next_child_node" },
	{ 0x13d9b37d, "gpiod_set_consumer_name" },
	{ 0x250dc6c8, "fwnode_property_present" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x5afa59fd, "device_get_child_node_count" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb4792dec, "gpiod_get_value_cansleep" },
	{ 0xe67878c0, "devm_led_classdev_register_ext" },
	{ 0x30e70d02, "gpiod_direction_output" },
	{ 0x5f46ef43, "gpiod_cansleep" },
	{ 0x2477c80f, "gpiod_set_value" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgpio-leds");
MODULE_ALIAS("of:N*T*Cgpio-ledsC*");

MODULE_INFO(srcversion, "0B46879BE05BCD6BAC86B7E");
