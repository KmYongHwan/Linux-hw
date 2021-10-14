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
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x12b678d5, "platform_device_register" },
	{ 0x3580f6ff, "__platform_driver_probe" },
	{ 0xc5850110, "printk" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:GOOG9999:*");
MODULE_ALIAS("dmi*:bvn*coreboot*:bvr*Google_*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:pn*Alex*:");
MODULE_ALIAS("dmi*:svn*IEC*:pn*Mario*:");
MODULE_ALIAS("dmi*:svn*ACER*:pn*ZGB*:");

MODULE_INFO(srcversion, "1972FBBA8F856D4227CD148");
