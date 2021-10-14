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
	{ 0x9a43e199, "_dev_info" },
	{ 0xe6ec9b7a, "comedi_8254_update_divisors" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4b6e81b7, "comedi_set_hw_dev" },
	{ 0xd34c971d, "pci_get_device" },
	{ 0xcb077337, "pci_dev_put" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xe28f10a6, "comedi_pci_detach" },
	{ 0x2f586e32, "pci_dev_get" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0xc961c821, "comedi_alloc_subdev_readback" },
	{ 0xbb52fc7f, "range_bipolar10" },
	{ 0x76c6e165, "comedi_alloc_subdevices" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0x5f916ef7, "comedi_8254_init" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x4b6705ee, "comedi_pci_enable" },
	{ 0x27fbb5a5, "comedi_alloc_devpriv" },
	{ 0xb50051b0, "comedi_to_pci_dev" },
	{ 0x548b84ec, "comedi_buf_write_samples" },
	{ 0xa236be2f, "comedi_handle_events" },
	{ 0x15d64b25, "comedi_nsamples_left" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9219beeb, "comedi_8254_cascade_ns_to_timer" },
	{ 0x8cb1ad78, "comedi_8254_pacer_enable" },
	{ 0x590c9f82, "comedi_timeout" },
	{ 0x35ad3c35, "comedi_8254_load" },
	{ 0x4aa2cad2, "comedi_dio_update_state" },
	{ 0x9aaa561b, "comedi_pci_auto_config" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi_pci,comedi_8254,comedi");

MODULE_ALIAS("pci:v000010E8d000080D9sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8CB119DC9EE5F34ED81F922");
