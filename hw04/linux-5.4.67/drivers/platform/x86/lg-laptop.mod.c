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
	{ 0x2a26e84c, "input_free_device" },
	{ 0xf18bdd75, "wmi_install_notify_handler" },
	{ 0xff76d558, "input_register_device" },
	{ 0x3d2bd84a, "sparse_keymap_setup" },
	{ 0xeebd5754, "input_allocate_device" },
	{ 0x2af4b11a, "led_classdev_register_ext" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x3d32ae7, "platform_device_register_full" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xc36a3bd4, "__acpi_handle_debug" },
	{ 0xf3f8906b, "sparse_keymap_report_entry" },
	{ 0xcb631780, "sparse_keymap_entry_from_scancode" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x17b0f8ca, "wmi_get_event_data" },
	{ 0x3f69beeb, "input_unregister_device" },
	{ 0x76ae31fd, "wmi_remove_notify_handler" },
	{ 0xd52dbe7d, "led_classdev_unregister" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8df08ac, "acpi_handle_printk" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "wmi,sparse-keymap");

MODULE_ALIAS("acpi*:LGEX0815:*");

MODULE_INFO(srcversion, "1FFFFEC007ACEDDD77889AB");
