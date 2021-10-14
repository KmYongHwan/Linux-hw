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
	{ 0x39932179, "i2c_del_adapter" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xcb077337, "pci_dev_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2f586e32, "pci_dev_get" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xb7146edb, "i2c_add_adapter" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x3ada9e06, "acpi_check_region" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0xd34c971d, "pci_get_device" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xf9a482f9, "msleep" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001039d00000008sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "ABF753D3B5115E8E6856ABA");
