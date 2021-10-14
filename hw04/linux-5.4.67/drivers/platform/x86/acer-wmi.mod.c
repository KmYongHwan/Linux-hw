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
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0x3f69beeb, "input_unregister_device" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0xe31ef352, "debugfs_create_u32" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0xf5ee1308, "platform_device_put" },
	{ 0xf39aaf26, "platform_device_add" },
	{ 0x4530cfec, "platform_device_alloc" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x6cc0246e, "input_set_abs_params" },
	{ 0x7ea19302, "put_device" },
	{ 0x2a26e84c, "input_free_device" },
	{ 0x76ae31fd, "wmi_remove_notify_handler" },
	{ 0x605e6974, "acpi_dev_get_first_match_dev" },
	{ 0xff76d558, "input_register_device" },
	{ 0xf18bdd75, "wmi_install_notify_handler" },
	{ 0x3d2bd84a, "sparse_keymap_setup" },
	{ 0xeebd5754, "input_allocate_device" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0xe92ca535, "acpi_video_set_dmi_backlight_type" },
	{ 0x141271bf, "acpi_dev_found" },
	{ 0xaba842fe, "wmi_query_block" },
	{ 0x7c983a5d, "dmi_walk" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x2af4b11a, "led_classdev_register_ext" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc973710c, "backlight_device_register" },
	{ 0xff282521, "rfkill_register" },
	{ 0x8d448251, "rfkill_alloc" },
	{ 0x97999817, "rfkill_set_hw_state" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0xfc4152fc, "ec_read" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0xe7ccd3bc, "backlight_device_unregister" },
	{ 0xd52dbe7d, "led_classdev_unregister" },
	{ 0xc9d4d6d1, "wmi_has_guid" },
	{ 0x1b8b95ad, "i8042_unlock_chip" },
	{ 0x4fdee897, "i8042_command" },
	{ 0x17f341a0, "i8042_lock_chip" },
	{ 0x8a490c90, "rfkill_set_sw_state" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xd38a4a4e, "sparse_keymap_report_event" },
	{ 0xcb631780, "sparse_keymap_entry_from_scancode" },
	{ 0x17b0f8ca, "wmi_get_event_data" },
	{ 0x5ada0011, "input_event" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x37a0cba, "kfree" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc708f1fe, "ec_write" },
	{ 0x6068bedf, "wmi_evaluate_method" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "wmi,sparse-keymap,video");


MODULE_INFO(srcversion, "2F6CCC13420339B9FEA4F8F");
