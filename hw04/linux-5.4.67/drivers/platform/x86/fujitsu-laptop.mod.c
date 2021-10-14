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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xeec78261, "acpi_bus_unregister_driver" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x8818748e, "acpi_bus_register_driver" },
	{ 0x9f08d1ab, "platform_device_del" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xf5ee1308, "platform_device_put" },
	{ 0xf39aaf26, "platform_device_add" },
	{ 0x4530cfec, "platform_device_alloc" },
	{ 0xe67878c0, "devm_led_classdev_register_ext" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x56470118, "__warn_printk" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xcb631780, "sparse_keymap_entry_from_scancode" },
	{ 0x502e851d, "devm_backlight_device_register" },
	{ 0xff76d558, "input_register_device" },
	{ 0x3d2bd84a, "sparse_keymap_setup" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1e9b82be, "acpi_device_hid" },
	{ 0x71af84e7, "devm_input_allocate_device" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0xd38a4a4e, "sparse_keymap_report_event" },
	{ 0xd8df08ac, "acpi_handle_printk" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc36a3bd4, "__acpi_handle_debug" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "sparse-keymap,video");

MODULE_ALIAS("acpi*:FUJ02B1:*");
MODULE_ALIAS("acpi*:FUJ02E3:*");

MODULE_INFO(srcversion, "D06F1AB91DC08FB496AA131");
