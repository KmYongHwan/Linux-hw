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
	{ 0xc1514a3b, "free_irq" },
	{ 0x77fb8504, "comedi_pci_disable" },
	{ 0xedc03953, "iounmap" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6ed03b47, "comedi_8254_subdevice_init" },
	{ 0xaedaec7e, "comedi_8254_mm_init" },
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0xc961c821, "comedi_alloc_subdev_readback" },
	{ 0x76c6e165, "comedi_alloc_subdevices" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0x4d87e644, "pci_ioremap_bar" },
	{ 0x4b6705ee, "comedi_pci_enable" },
	{ 0x27fbb5a5, "comedi_alloc_devpriv" },
	{ 0xb50051b0, "comedi_to_pci_dev" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa236be2f, "comedi_handle_events" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x548b84ec, "comedi_buf_write_samples" },
	{ 0x5ee557f2, "comedi_dio_insn_config" },
	{ 0x590c9f82, "comedi_timeout" },
	{ 0x4aa2cad2, "comedi_dio_update_state" },
	{ 0x9aaa561b, "comedi_pci_auto_config" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi_pci,comedi_8254,comedi");

MODULE_ALIAS("pci:v00001435d00007520sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001435d00004520sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "7CC60684A33AF3C843433D6");
