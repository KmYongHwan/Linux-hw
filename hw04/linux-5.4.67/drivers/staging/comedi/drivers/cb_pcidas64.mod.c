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
	{ 0xbb52fc7f, "range_bipolar10" },
	{ 0x84e0848a, "comedi_pci_auto_unconfig" },
	{ 0xd691a3e2, "comedi_pci_driver_unregister" },
	{ 0xf6c69ae0, "comedi_pci_driver_register" },
	{ 0xa236be2f, "comedi_handle_events" },
	{ 0x548b84ec, "comedi_buf_write_samples" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xc2ea1e21, "subdev_8255_init" },
	{ 0xc961c821, "comedi_alloc_subdev_readback" },
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0x60a0537f, "subdev_8255_mm_init" },
	{ 0x76c6e165, "comedi_alloc_subdevices" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x4d87e644, "pci_ioremap_bar" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x4b6705ee, "comedi_pci_enable" },
	{ 0x27fbb5a5, "comedi_alloc_devpriv" },
	{ 0xd068078a, "comedi_buf_read_samples" },
	{ 0x15d64b25, "comedi_nsamples_left" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xb50051b0, "comedi_to_pci_dev" },
	{ 0x77fb8504, "comedi_pci_disable" },
	{ 0xedc03953, "iounmap" },
	{ 0x590c9f82, "comedi_timeout" },
	{ 0x5ee557f2, "comedi_dio_insn_config" },
	{ 0x4aa2cad2, "comedi_dio_update_state" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x9aaa561b, "comedi_pci_auto_config" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi,comedi_pci,comedi_8255");

MODULE_ALIAS("pci:v00001307d0000001Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d0000001Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000035sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000036sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000037sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000052sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d0000005Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d0000005Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d0000005Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000060sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000061sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000062sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000063sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000064sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000065sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000066sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000067sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000068sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d0000006Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000078sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000079sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "DF936F84EBF1B399BA5B278");
