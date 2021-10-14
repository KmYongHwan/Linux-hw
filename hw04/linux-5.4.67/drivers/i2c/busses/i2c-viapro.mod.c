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
	{ 0x722a53d5, "param_ops_ushort" },
	{ 0x39932179, "i2c_del_adapter" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xcb077337, "pci_dev_put" },
	{ 0xb7146edb, "i2c_add_adapter" },
	{ 0x2f586e32, "pci_dev_get" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x3ada9e06, "acpi_check_region" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001106d00003050sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003051sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003057sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003074sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003147sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003177sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003227sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003337sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003372sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00008235sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003287sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00008324sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00008353sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00008409sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00008410sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D2F41B8110F31D831E1E9E2");
