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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0x9f8e5a9e, "device_remove_file" },
	{ 0xe7ccd3bc, "backlight_device_unregister" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0xf5ee1308, "platform_device_put" },
	{ 0x9f08d1ab, "platform_device_del" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc0b05922, "i8042_remove_filter" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xf559a7e9, "device_create_file" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x2a26e84c, "input_free_device" },
	{ 0x3f69beeb, "input_unregister_device" },
	{ 0xf030674d, "i8042_install_filter" },
	{ 0xff76d558, "input_register_device" },
	{ 0x3d2bd84a, "sparse_keymap_setup" },
	{ 0xeebd5754, "input_allocate_device" },
	{ 0xff282521, "rfkill_register" },
	{ 0x8d448251, "rfkill_alloc" },
	{ 0xf39aaf26, "platform_device_add" },
	{ 0x4530cfec, "platform_device_alloc" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0xc973710c, "backlight_device_register" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0xc708f1fe, "ec_write" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xaa00fdc0, "ec_transaction" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd38a4a4e, "sparse_keymap_report_event" },
	{ 0x8a490c90, "rfkill_set_sw_state" },
	{ 0x97999817, "rfkill_set_hw_state" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfc4152fc, "ec_read" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "sparse-keymap,video");


MODULE_INFO(srcversion, "4D84D2043F3CDE570BC874D");
