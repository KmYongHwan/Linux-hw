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
	{ 0xd727ef13, "param_ops_charp" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x6bb624d0, "mfd_add_devices" },
	{ 0x848d372e, "iowrite8" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xf10de535, "ioread8" },
	{ 0x4d87e644, "pci_ioremap_bar" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xb93527f1, "mfd_remove_devices" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010B5d00009030sv000013C3sd00000101bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009050sv000013C3sd00000100bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009030sv000013C3sd00000201bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009030sv000013C3sd00000202bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009050sv000013C3sd00000201bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009050sv000013C3sd00000202bc*sc*i*");

MODULE_INFO(srcversion, "B7DA180C0ABF83DC2E619FE");
