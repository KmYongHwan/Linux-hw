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
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0xe7ccd3bc, "backlight_device_unregister" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0xf5ee1308, "platform_device_put" },
	{ 0x9f08d1ab, "platform_device_del" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0xff282521, "rfkill_register" },
	{ 0x8d448251, "rfkill_alloc" },
	{ 0xf39aaf26, "platform_device_add" },
	{ 0x4530cfec, "platform_device_alloc" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xc973710c, "backlight_device_register" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0x479247f1, "power_supply_unregister" },
	{ 0x97999817, "rfkill_set_hw_state" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x6114f186, "power_supply_register" },
	{ 0x96848186, "scnprintf" },
	{ 0xd8a8ad6d, "devm_hwmon_device_register_with_groups" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x3a0b85fb, "power_supply_get_drvdata" },
	{ 0xaa00fdc0, "ec_transaction" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc708f1fe, "ec_write" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xfc4152fc, "ec_read" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "video");

MODULE_ALIAS("dmi*:rn*IFL90*:rvr*IFT00*:");
MODULE_ALIAS("dmi*:rn*IFL90*:rvr*REFERENCE*:");
MODULE_ALIAS("dmi*:rn*IFL91*:rvr*IFT00*:");
MODULE_ALIAS("dmi*:rn*JFL92*:rvr*IFT00*:");
MODULE_ALIAS("dmi*:rn*IFT00*:rvr*IFT00*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*Inspiron910*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*Inspiron1010*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*Inspiron1011*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*Inspiron1012*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*Inspiron1110*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*Inspiron1210*:");
MODULE_ALIAS("dmi*:rn*JHL90*:rvr*REFERENCE*:");
MODULE_ALIAS("dmi*:rn*KHLB2*:rvr*REFERENCE*:");

MODULE_INFO(srcversion, "AB6AA2EAB0A0327EB578839");
