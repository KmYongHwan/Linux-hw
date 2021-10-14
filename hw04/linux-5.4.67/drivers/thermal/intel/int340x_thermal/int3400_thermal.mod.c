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
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x1887763e, "acpi_thermal_rel_misc_device_add" },
	{ 0xe0cf7d08, "thermal_zone_device_register" },
	{ 0xf0f9fe0d, "acpi_parse_trt" },
	{ 0x111eefed, "acpi_parse_art" },
	{ 0xb89b6e6b, "guid_parse" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x9caa394e, "is_acpi_device_node" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb26b8c8, "acpi_run_osc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37480d59, "kobject_uevent_env" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5a921311, "strncmp" },
	{ 0x86c998e6, "acpi_thermal_rel_misc_device_remove" },
	{ 0x37a0cba, "kfree" },
	{ 0xd8d49ad4, "thermal_zone_device_unregister" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "acpi_thermal_rel");

MODULE_ALIAS("acpi*:INT3400:*");

MODULE_INFO(srcversion, "6137DA5E13119A3A0CF8516");
