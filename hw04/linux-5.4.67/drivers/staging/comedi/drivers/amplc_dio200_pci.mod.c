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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xe28f10a6, "comedi_pci_detach" },
	{ 0x84e0848a, "comedi_pci_auto_unconfig" },
	{ 0xd691a3e2, "comedi_pci_driver_unregister" },
	{ 0xf6c69ae0, "comedi_pci_driver_register" },
	{ 0x33e8492a, "amplc_dio200_common_attach" },
	{ 0xe48589b9, "amplc_dio200_set_enhance" },
	{ 0xedc03953, "iounmap" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x4d87e644, "pci_ioremap_bar" },
	{ 0x4b6705ee, "comedi_pci_enable" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xb50051b0, "comedi_to_pci_dev" },
	{ 0x9aaa561b, "comedi_pci_auto_config" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi_pci,amplc_dio200_common");

MODULE_ALIAS("pci:v000014DCd0000000Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014DCd0000000Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014DCd00000011sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014DCd00000012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014DCd00000014sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "5E36431195A9EF1CDAB1593");
