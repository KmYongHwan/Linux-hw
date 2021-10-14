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
	{ 0x84e0848a, "comedi_pci_auto_unconfig" },
	{ 0xd691a3e2, "comedi_pci_driver_unregister" },
	{ 0xf6c69ae0, "comedi_pci_driver_register" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x12a38747, "usleep_range" },
	{ 0xc2ea1e21, "subdev_8255_init" },
	{ 0xc961c821, "comedi_alloc_subdev_readback" },
	{ 0xbb52fc7f, "range_bipolar10" },
	{ 0x8982a2a9, "comedi_load_firmware" },
	{ 0x76c6e165, "comedi_alloc_subdevices" },
	{ 0x4d87e644, "pci_ioremap_bar" },
	{ 0x4b6705ee, "comedi_pci_enable" },
	{ 0x27fbb5a5, "comedi_alloc_devpriv" },
	{ 0xb50051b0, "comedi_to_pci_dev" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe28f10a6, "comedi_pci_detach" },
	{ 0xedc03953, "iounmap" },
	{ 0x590c9f82, "comedi_timeout" },
	{ 0x9aaa561b, "comedi_pci_auto_config" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi_pci,comedi_8255,comedi");

MODULE_ALIAS("pci:v00001616d00000409sv00001616sd00000002bc*sc*i*");
MODULE_ALIAS("pci:v00001616d00000409sv00001616sd00000004bc*sc*i*");

MODULE_INFO(srcversion, "A54EAA07A1948CBE7EE9BD3");
