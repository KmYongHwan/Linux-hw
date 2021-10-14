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
	{ 0xd53f74e9, "fwnode_handle_put" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x5d17929d, "input_register_polled_device" },
	{ 0x2bc97e5a, "device_property_present" },
	{ 0x2f24b19e, "devm_input_allocate_polled_device" },
	{ 0xb8d89726, "fwnode_property_read_u32_array" },
	{ 0x6e626fc8, "device_get_next_child_node" },
	{ 0x5afa59fd, "device_get_child_node_count" },
	{ 0x3a8ba51f, "device_property_read_u32_array" },
	{ 0x768cca87, "iio_get_channel_type" },
	{ 0x865a3f99, "devm_iio_channel_get" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5ada0011, "input_event" },
	{ 0x475e1776, "iio_read_channel_processed" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "input-polldev,industrialio");


MODULE_INFO(srcversion, "C4B8EBAC856BA933DFDE3EA");
