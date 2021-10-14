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
	{ 0xf438100, "intel_lpss_resume" },
	{ 0xb10e6ff5, "intel_lpss_suspend" },
	{ 0xa77522e2, "intel_lpss_prepare" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x8f309c4d, "intel_lpss_probe" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x7f2dd6c6, "devm_kmemdup" },
	{ 0xd52c37ad, "acpi_match_device" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0x9eb30623, "intel_lpss_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "intel-lpss");

MODULE_ALIAS("acpi*:INT3440:*");
MODULE_ALIAS("acpi*:INT3441:*");
MODULE_ALIAS("acpi*:INT3442:*");
MODULE_ALIAS("acpi*:INT3443:*");
MODULE_ALIAS("acpi*:INT3444:*");
MODULE_ALIAS("acpi*:INT3445:*");
MODULE_ALIAS("acpi*:INT3446:*");
MODULE_ALIAS("acpi*:INT3447:*");
MODULE_ALIAS("acpi*:INT3448:*");
MODULE_ALIAS("acpi*:INT3449:*");
MODULE_ALIAS("acpi*:INT344A:*");
MODULE_ALIAS("acpi*:80860AAC:*");
MODULE_ALIAS("acpi*:80860ABC:*");
MODULE_ALIAS("acpi*:80860AC2:*");
MODULE_ALIAS("acpi*:80865AAC:*");
MODULE_ALIAS("acpi*:80865ABC:*");
MODULE_ALIAS("acpi*:80865AC2:*");

MODULE_INFO(srcversion, "F2E4C2F8850061AB04CB257");
