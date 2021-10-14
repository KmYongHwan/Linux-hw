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
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0xf5ee1308, "platform_device_put" },
	{ 0x9f08d1ab, "platform_device_del" },
	{ 0x3580f6ff, "__platform_driver_probe" },
	{ 0xf39aaf26, "platform_device_add" },
	{ 0x4530cfec, "platform_device_alloc" },
	{ 0xa3f09781, "acpi_initialize_hp_context" },
	{ 0x2a26e84c, "input_free_device" },
	{ 0xff76d558, "input_register_device" },
	{ 0xa89177c8, "input_set_capability" },
	{ 0x71af84e7, "devm_input_allocate_device" },
	{ 0x8507f9b1, "acpi_bus_trim" },
	{ 0x605e35f4, "bus_for_each_dev" },
	{ 0x1f58e882, "platform_bus_type" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x5ada0011, "input_event" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0xaba842fe, "wmi_query_block" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc5850110, "printk" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xec2b8a42, "acpi_walk_namespace" },
	{ 0x1e9b82be, "acpi_device_hid" },
	{ 0x6cb881cb, "acpi_bus_get_device" },
	{ 0x9caa394e, "is_acpi_device_node" },
	{ 0x49b163b8, "acpi_bus_scan" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "wmi");


MODULE_INFO(srcversion, "D7BCF7015133D39E5BA5D1A");
