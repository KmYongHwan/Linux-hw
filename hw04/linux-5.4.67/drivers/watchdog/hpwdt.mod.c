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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xb3a2dfdf, "nmi_panic" },
	{ 0x7129e5f8, "hex_asc" },
	{ 0x637d18c6, "watchdog_register_device" },
	{ 0x2ee76e44, "watchdog_init_timeout" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xde4eeab5, "__register_nmi_handler" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x6aa619a8, "pci_match_id" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0x7137f851, "watchdog_unregister_device" },
	{ 0xe64ad8ea, "unregister_nmi_handler" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x848d372e, "iowrite8" },
	{ 0xf10de535, "ioread8" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xc5534d64, "ioread16" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00000E11d0000B203sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003306sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C12C578AC284DCD2DE264B9");
