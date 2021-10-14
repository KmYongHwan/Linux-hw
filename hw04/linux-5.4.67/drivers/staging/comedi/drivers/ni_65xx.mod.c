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
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x84e0848a, "comedi_pci_auto_unconfig" },
	{ 0xd691a3e2, "comedi_pci_driver_unregister" },
	{ 0xf6c69ae0, "comedi_pci_driver_register" },
	{ 0xe28f10a6, "comedi_pci_detach" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0x76c6e165, "comedi_alloc_subdevices" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xedc03953, "iounmap" },
	{ 0x4d87e644, "pci_ioremap_bar" },
	{ 0x4b6705ee, "comedi_pci_enable" },
	{ 0xb50051b0, "comedi_to_pci_dev" },
	{ 0xa236be2f, "comedi_handle_events" },
	{ 0x548b84ec, "comedi_buf_write_samples" },
	{ 0x9aaa561b, "comedi_pci_auto_config" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi_pci,comedi");

MODULE_ALIAS("pci:v00001093d00001710sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00007085sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00007086sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00007087sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00007088sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070C3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070C9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070CCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070CDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070D1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070D2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070D3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00007124sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00007125sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00007126sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00007127sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00007128sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d0000718Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d0000718Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000071C5sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "0438D18A221A16C7E642BEA");
