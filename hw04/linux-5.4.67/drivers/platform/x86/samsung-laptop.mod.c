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
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0x7681946c, "unregister_pm_notifier" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xe7ccd3bc, "backlight_device_unregister" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0xc81b2440, "debugfs_create_blob" },
	{ 0xb74f842f, "debugfs_create_u8" },
	{ 0xe31ef352, "debugfs_create_u32" },
	{ 0x5c344b83, "debugfs_create_u16" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0x2af4b11a, "led_classdev_register_ext" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc973710c, "backlight_device_register" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x37a0cba, "kfree" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0x11089ac7, "_ctype" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x3d32ae7, "platform_device_register_full" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0xe92ca535, "acpi_video_set_dmi_backlight_type" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xa0f493d9, "efi" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0xedc03953, "iounmap" },
	{ 0xc4142837, "seq_printf" },
	{ 0x70691c99, "single_open" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xd52dbe7d, "led_classdev_unregister" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x8a490c90, "rfkill_set_sw_state" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0xff282521, "rfkill_register" },
	{ 0xaad6d92f, "rfkill_init_sw_state" },
	{ 0x8d448251, "rfkill_alloc" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x754d539c, "strlen" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "video");

MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:ct*8*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:ct*9*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:ct*10*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:ct*14*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:pn*R40/R41*:rn*R40/R41*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:pn*N150P*:rn*N150P*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:pn*N145P/N250P/N260P*:rn*N145P/N250P/N260P*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:pn*N150/N210/N220*:rn*N150/N210/N220*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:pn*NF110/NF210/NF310*:rn*NF110/NF210/NF310*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:pn*X360*:rn*X360*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:pn*N250P*:rn*N250P*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:pn*NC210/NC110*:rn*NC210/NC110*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:pn*730U3E/740U3E*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:pn*300V3Z/300V4Z/300V5Z*:");

MODULE_INFO(srcversion, "A6D879B8A61AB407D47C976");
