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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x4552a702, "gpiochip_generic_config" },
	{ 0x9cb39373, "seq_puts" },
	{ 0xdae1d8d2, "devm_gpiochip_add_data" },
	{ 0x1b8822d8, "pinctrl_gpio_direction_output" },
	{ 0x88a1a04c, "irq_find_mapping" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x610e5078, "gpiochip_generic_free" },
	{ 0xc4142837, "seq_printf" },
	{ 0x6733e8b8, "handle_edge_irq" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf846f9b6, "gpiochip_line_is_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x148fa2d1, "gpiochip_irqchip_add_key" },
	{ 0x3a0d0767, "device_get_match_data" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6bec4894, "gpiochip_is_requested" },
	{ 0x88059487, "devm_pinctrl_register" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x4a95d625, "gpiochip_get_data" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x10c2341a, "handle_bad_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd9cde342, "pinctrl_dev_get_drvdata" },
	{ 0x9ff82536, "gpiochip_add_pin_range" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x94dd729a, "gpiochip_set_chained_irqchip" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x70ad75fb, "radix_tree_lookup" },
	{ 0xcd9be279, "gpiochip_generic_request" },
	{ 0x1bc5eebe, "pinctrl_gpio_direction_input" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xc07c9d98, "handle_level_irq" },
	{ 0x9caa394e, "is_acpi_device_node" },
	{ 0xd1b279c, "devm_platform_ioremap_resource" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FDABD698FC0C0DAFA018A36");
