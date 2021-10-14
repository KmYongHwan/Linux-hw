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
	{ 0x722a53d5, "param_ops_ushort" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0xf39aaf26, "platform_device_add" },
	{ 0x40b69005, "platform_device_add_resources" },
	{ 0xf5ee1308, "platform_device_put" },
	{ 0xeab6f4c4, "acpi_check_resource_conflict" },
	{ 0x6cbe5161, "platform_device_add_data" },
	{ 0x4530cfec, "platform_device_alloc" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x81e6b37f, "dmi_get_system_info" },
	{ 0x2f9e7f8e, "vid_which_vrm" },
	{ 0xd8a8ad6d, "devm_hwmon_device_register_with_groups" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xfef6ccb5, "__devm_request_region" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x446615bd, "vid_from_reg" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc5850110, "printk" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hwmon-vid");


MODULE_INFO(srcversion, "3110631AB0DC79320487169");
