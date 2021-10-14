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
	{ 0x85bd1608, "__request_region" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0x3ada9e06, "acpi_check_region" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xb7146edb, "i2c_add_adapter" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x39932179, "i2c_del_adapter" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x656e4a6e, "snprintf" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001022d0000740Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00007413sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00007443sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000746Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000001B4sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "9430059A97542C108C5BEDE");
