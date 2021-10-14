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
	{ 0x9f8e5a9e, "device_remove_file" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0x8a490c90, "rfkill_set_sw_state" },
	{ 0xb2389708, "pci_scan_single_device" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0x70691c99, "single_open" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0x1e6eae8, "battery_hook_unregister" },
	{ 0x65b4695, "wmi_get_acpi_device_uid" },
	{ 0x7a4d5f5c, "pci_stop_and_remove_bus_device" },
	{ 0xa071f2c6, "single_release" },
	{ 0x8d4d8561, "pci_get_slot" },
	{ 0x9cab34a6, "rfkill_set_led_trigger_name" },
	{ 0xc973710c, "backlight_device_register" },
	{ 0xc4142837, "seq_printf" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x5790e7a0, "pci_unlock_rescan_remove" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5c49fb86, "debugfs_create_x32" },
	{ 0xff282521, "rfkill_register" },
	{ 0xd38240bf, "pci_bus_assign_resources" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x39e87584, "battery_hook_register" },
	{ 0x141271bf, "acpi_dev_found" },
	{ 0x15a1a86f, "__pci_hp_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0xcec6343e, "seq_read" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x4677f1b5, "pci_hp_deregister" },
	{ 0x3d2bd84a, "sparse_keymap_setup" },
	{ 0xd38a4a4e, "sparse_keymap_report_event" },
	{ 0xd8a8ad6d, "devm_hwmon_device_register_with_groups" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x8d448251, "rfkill_alloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x2af4b11a, "led_classdev_register_ext" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xf18bdd75, "wmi_install_notify_handler" },
	{ 0xe92ca535, "acpi_video_set_dmi_backlight_type" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc9d4d6d1, "wmi_has_guid" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0xfbfe990b, "pci_find_bus" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0xcd8ce890, "acpi_format_exception" },
	{ 0xf559a7e9, "device_create_file" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x6068bedf, "wmi_evaluate_method" },
	{ 0xaad6d92f, "rfkill_init_sw_state" },
	{ 0xbf51fdd3, "pci_bus_read_config_dword" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xff76d558, "input_register_device" },
	{ 0xfbc34524, "__platform_create_bundle" },
	{ 0x2a26e84c, "input_free_device" },
	{ 0xf09dc6d3, "led_classdev_notify_brightness_hw_changed" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xddbeeecc, "pci_lock_rescan_remove" },
	{ 0xd52dbe7d, "led_classdev_unregister" },
	{ 0x830d73d4, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3f69beeb, "input_unregister_device" },
	{ 0x96848186, "scnprintf" },
	{ 0xd34c971d, "pci_get_device" },
	{ 0xcb077337, "pci_dev_put" },
	{ 0x76ae31fd, "wmi_remove_notify_handler" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0xeaeec424, "backlight_force_update" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0xe7ccd3bc, "backlight_device_unregister" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x133ee616, "pci_bus_add_device" },
	{ 0x17b0f8ca, "wmi_get_event_data" },
	{ 0xeebd5754, "input_allocate_device" },
	{ 0x81e6b37f, "dmi_get_system_info" },
};

MODULE_INFO(depends, "wmi,sparse-keymap,video");


MODULE_INFO(srcversion, "F9552BDB9D7BEED35963943");
