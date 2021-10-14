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
	{ 0x250dc6c8, "fwnode_property_present" },
	{ 0xf464add, "fwnode_property_read_string" },
	{ 0xb8d89726, "fwnode_property_read_u32_array" },
	{ 0x49b323d8, "device_property_read_string" },
	{ 0x3a8ba51f, "device_property_read_u32_array" },
	{ 0x2bc97e5a, "device_property_present" },
	{ 0x5afa59fd, "device_get_child_node_count" },
	{ 0x5fb56dbf, "devm_fwnode_get_index_gpiod_from_child" },
	{ 0x6e626fc8, "device_get_next_child_node" },
	{ 0x5d17929d, "input_register_polled_device" },
	{ 0xd53f74e9, "fwnode_handle_put" },
	{ 0x6cc0246e, "input_set_abs_params" },
	{ 0xa89177c8, "input_set_capability" },
	{ 0x91226d06, "gpio_to_desc" },
	{ 0x690e053c, "devm_gpio_request_one" },
	{ 0x2f24b19e, "devm_input_allocate_polled_device" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xb4792dec, "gpiod_get_value_cansleep" },
	{ 0x5ada0011, "input_event" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "input-polldev");

MODULE_ALIAS("of:N*T*Cgpio-keys-polled");
MODULE_ALIAS("of:N*T*Cgpio-keys-polledC*");

MODULE_INFO(srcversion, "ADCCFC7978BDDC83FFA2B4C");
