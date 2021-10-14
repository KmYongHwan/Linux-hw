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
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xa071f2c6, "single_release" },
	{ 0xcec6343e, "seq_read" },
	{ 0x830d73d4, "seq_lseek" },
	{ 0x752832c, "noop_llseek" },
	{ 0xeec78261, "acpi_bus_unregister_driver" },
	{ 0x8818748e, "acpi_bus_register_driver" },
	{ 0xf47b3d97, "proc_mkdir" },
	{ 0x77456e0a, "acpi_root_dir" },
	{ 0xff76d558, "input_register_device" },
	{ 0xf030674d, "i8042_install_filter" },
	{ 0xff282521, "rfkill_register" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xc973710c, "backlight_device_register" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0xe92ca535, "acpi_video_set_dmi_backlight_type" },
	{ 0xadfd6f08, "proc_create_single_data" },
	{ 0xac1637ea, "proc_create_data" },
	{ 0x8d448251, "rfkill_alloc" },
	{ 0xf490d28c, "__iio_device_register" },
	{ 0x2a26e84c, "input_free_device" },
	{ 0x3d2bd84a, "sparse_keymap_setup" },
	{ 0xeebd5754, "input_allocate_device" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xd17973a6, "iio_device_alloc" },
	{ 0x2af4b11a, "led_classdev_register_ext" },
	{ 0x47fda759, "misc_register" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xc9d4d6d1, "wmi_has_guid" },
	{ 0xd38a4a4e, "sparse_keymap_report_event" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1d07e365, "memdup_user_nul" },
	{ 0x97999817, "rfkill_set_hw_state" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x70691c99, "single_open" },
	{ 0x2ac0e6e, "PDE_DATA" },
	{ 0xc4142837, "seq_printf" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x45081703, "ec_get_handle" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc0b05922, "i8042_remove_filter" },
	{ 0xd52dbe7d, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0xe7ccd3bc, "backlight_device_unregister" },
	{ 0x3f69beeb, "input_unregister_device" },
	{ 0x1351965, "iio_device_free" },
	{ 0xd567ba2c, "iio_device_unregister" },
	{ 0xb4c99b4e, "remove_proc_entry" },
	{ 0x343f1816, "misc_deregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc5850110, "printk" },
	{ 0xf09dc6d3, "led_classdev_notify_brightness_hw_changed" },
	{ 0x74754435, "acpi_bus_generate_netlink_event" },
	{ 0x2d721cca, "sysfs_update_group" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "video,industrialio,sparse-keymap,wmi");

MODULE_ALIAS("acpi*:TOS6200:*");
MODULE_ALIAS("acpi*:TOS6207:*");
MODULE_ALIAS("acpi*:TOS6208:*");
MODULE_ALIAS("acpi*:TOS1900:*");

MODULE_INFO(srcversion, "ABC0069A5EAE610DD4FCF2D");
