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
	{ 0x890b3d61, "_dev_err" },
	{ 0xcb077337, "pci_dev_put" },
	{ 0xe1ca0830, "device_get_named_child_node" },
	{ 0x98d87b25, "pci_get_class" },
	{ 0xeca5d40d, "software_node_find_by_name" },
	{ 0x8db2c04f, "software_node_register_nodes" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xa4f2a83, "acpi_dev_gpio_irq_get" },
	{ 0xc1573d6a, "regulator_put" },
	{ 0x7d2aee27, "regulator_get_optional" },
	{ 0xb4577003, "acpi_dev_present" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x19c08435, "i2c_acpi_new_device" },
	{ 0x3048d52f, "device_reprobe" },
	{ 0xd7645c18, "i2c_for_each_dev" },
	{ 0x16779475, "i2c_unregister_device" },
	{ 0xd53f74e9, "fwnode_handle_put" },
	{ 0x3d70e9c5, "software_node_fwnode" },
	{ 0x4bfba5f1, "software_node_unregister_nodes" },
	{ 0x1e9b82be, "acpi_device_hid" },
	{ 0x9caa394e, "is_acpi_device_node" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:INT33FE:*");

MODULE_INFO(srcversion, "37F0ABEF05FE9EFCE5E16F2");
