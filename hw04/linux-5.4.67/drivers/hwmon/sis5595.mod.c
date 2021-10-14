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
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xf5ee1308, "platform_device_put" },
	{ 0xc5850110, "printk" },
	{ 0xf39aaf26, "platform_device_add" },
	{ 0x40b69005, "platform_device_add_resources" },
	{ 0x4530cfec, "platform_device_alloc" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0xcb077337, "pci_dev_put" },
	{ 0xeab6f4c4, "acpi_check_resource_conflict" },
	{ 0x2f586e32, "pci_dev_get" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0xd34c971d, "pci_get_device" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0x4788e517, "hwmon_device_register" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xfef6ccb5, "__devm_request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x6ce22f0f, "hwmon_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001039d00000008sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D2163AA718F1B485F8CBE18");
