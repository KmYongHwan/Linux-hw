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
	{ 0xff76d558, "input_register_device" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd53f74e9, "fwnode_handle_put" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0xb8d89726, "fwnode_property_read_u32_array" },
	{ 0x6e626fc8, "device_get_next_child_node" },
	{ 0x5afa59fd, "device_get_child_node_count" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0x71af84e7, "devm_input_allocate_device" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x5ada0011, "input_event" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmicrochip,qt1050");
MODULE_ALIAS("of:N*T*Cmicrochip,qt1050C*");

MODULE_INFO(srcversion, "B9B75C146A1BE4A230C1D47");
