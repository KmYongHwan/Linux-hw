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
	{ 0x95d3e473, "dw_spi_suspend_host" },
	{ 0x73633a3, "pcim_enable_device" },
	{ 0x1e4d26af, "pcim_iomap_table" },
	{ 0x3e733cdf, "dw_spi_add_host" },
	{ 0x9bb3a9ee, "dw_spi_resume_host" },
	{ 0x9df75a65, "pcim_iomap_regions" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x310d223f, "dw_spi_remove_host" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0xedc03953, "iounmap" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x74a69856, "devm_kmalloc" },
};

MODULE_INFO(depends, "spi-dw");

MODULE_ALIAS("pci:v00008086d00000800sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000812sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B84sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B85sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B86sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B87sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "447478A0C84C0AC67E6A8FA");
