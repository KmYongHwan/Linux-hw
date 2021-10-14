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
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xa236be2f, "comedi_handle_events" },
	{ 0x548b84ec, "comedi_buf_write_samples" },
	{ 0x590c9f82, "comedi_timeout" },
	{ 0x9219beeb, "comedi_8254_cascade_ns_to_timer" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x54cf66e8, "comedi_8254_set_busy" },
	{ 0x6ed03b47, "comedi_8254_subdevice_init" },
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc961c821, "comedi_alloc_subdev_readback" },
	{ 0x76c6e165, "comedi_alloc_subdevices" },
	{ 0x5f916ef7, "comedi_8254_init" },
	{ 0x4b6705ee, "comedi_pci_enable" },
	{ 0x27fbb5a5, "comedi_alloc_devpriv" },
	{ 0xb50051b0, "comedi_to_pci_dev" },
	{ 0xe6ec9b7a, "comedi_8254_update_divisors" },
	{ 0x8cb1ad78, "comedi_8254_pacer_enable" },
	{ 0x4aa2cad2, "comedi_dio_update_state" },
	{ 0x9aaa561b, "comedi_pci_auto_config" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi_pci,comedi,comedi_8254");

MODULE_ALIAS("pci:v000013FEd00001710sv000010B5sd00009050bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001710sv000013FEsd00000000bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001710sv000013FEsd0000B100bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001710sv000013FEsd0000B200bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001710sv000013FEsd0000C100bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001710sv000013FEsd0000C200bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001710sv00001000sd0000D100bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001710sv000013FEsd00000002bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001710sv000013FEsd0000B102bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001710sv000013FEsd0000B202bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001710sv000013FEsd0000C102bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001710sv000013FEsd0000C202bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001710sv00001000sd0000D102bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001711sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001713sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001731sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8E9592DCCF4418E63926636");
