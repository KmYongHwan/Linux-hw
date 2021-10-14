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
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0x8113872c, "range_unipolar10" },
	{ 0x76c6e165, "comedi_alloc_subdevices" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x4b6705ee, "comedi_pci_enable" },
	{ 0x27fbb5a5, "comedi_alloc_devpriv" },
	{ 0xb50051b0, "comedi_to_pci_dev" },
	{ 0xe28f10a6, "comedi_pci_detach" },
	{ 0x590c9f82, "comedi_timeout" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x12a38747, "usleep_range" },
	{ 0x4aa2cad2, "comedi_dio_update_state" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9aaa561b, "comedi_pci_auto_config" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi_pci,comedi");

MODULE_ALIAS("pci:v000010B5d00001050sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "95DF75E00B454AB47DFD6F0");
