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
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x7af53031, "mcb_bus_add_devices" },
	{ 0x492b7a54, "chameleon_parse_cells" },
	{ 0x35e8a95c, "mcb_alloc_bus" },
	{ 0x5c415271, "devm_ioremap" },
	{ 0xfef6ccb5, "__devm_request_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x34a712e0, "mcb_release_bus" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mcb");

MODULE_ALIAS("pci:v00001A88d00004D45sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001172d00004D45sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D973DDE4E6174DFFC7827C1");
