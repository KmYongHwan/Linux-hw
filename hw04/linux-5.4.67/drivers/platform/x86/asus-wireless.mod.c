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
	{ 0xeec78261, "acpi_bus_unregister_driver" },
	{ 0x8818748e, "acpi_bus_register_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8df08ac, "acpi_handle_printk" },
	{ 0xc36a3bd4, "__acpi_handle_debug" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xe67878c0, "devm_led_classdev_register_ext" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1e9b82be, "acpi_device_hid" },
	{ 0xff76d558, "input_register_device" },
	{ 0x71af84e7, "devm_input_allocate_device" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xb5d89060, "devm_led_classdev_unregister" },
	{ 0x1d39a3c5, "_dev_notice" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x5ada0011, "input_event" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:ATK4001:*");
MODULE_ALIAS("acpi*:ATK4002:*");

MODULE_INFO(srcversion, "913FBDC88F43454A51F783C");
