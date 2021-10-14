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
	{ 0xc961c821, "comedi_alloc_subdev_readback" },
	{ 0xc2ea1e21, "subdev_8255_init" },
	{ 0x76c6e165, "comedi_alloc_subdevices" },
	{ 0x5f916ef7, "comedi_8254_init" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x4b6705ee, "comedi_pci_enable" },
	{ 0x27fbb5a5, "comedi_alloc_devpriv" },
	{ 0xb50051b0, "comedi_to_pci_dev" },
	{ 0x548b84ec, "comedi_buf_write_samples" },
	{ 0xa236be2f, "comedi_handle_events" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x49951708, "sev_enable_key" },
	{ 0xd068078a, "comedi_buf_read_samples" },
	{ 0x15d64b25, "comedi_nsamples_left" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9219beeb, "comedi_8254_cascade_ns_to_timer" },
	{ 0xe28f10a6, "comedi_pci_detach" },
	{ 0x37a0cba, "kfree" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x8cb1ad78, "comedi_8254_pacer_enable" },
	{ 0xe6ec9b7a, "comedi_8254_update_divisors" },
	{ 0x590c9f82, "comedi_timeout" },
	{ 0x9aaa561b, "comedi_pci_auto_config" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi_pci,comedi,comedi_8255,comedi_8254");

MODULE_ALIAS("pci:v00001307d00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d0000000Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000019sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d0000001Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d0000004Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d0000001Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d0000001Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E86DFA6C7B95626C45821ED");
