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
	{ 0x6acbefae, "comedi_pcmcia_disable" },
	{ 0xb896d779, "comedi_pcmcia_auto_unconfig" },
	{ 0xdbdfc625, "comedi_pcmcia_driver_unregister" },
	{ 0x9ef0a57c, "comedi_pcmcia_driver_register" },
	{ 0xc961c821, "comedi_alloc_subdev_readback" },
	{ 0x2f0ad9d3, "range_bipolar5" },
	{ 0x76c6e165, "comedi_alloc_subdevices" },
	{ 0xe94d2b89, "pcmcia_request_irq" },
	{ 0x5374d021, "comedi_pcmcia_enable" },
	{ 0x27fbb5a5, "comedi_alloc_devpriv" },
	{ 0xa214aeaf, "comedi_to_pcmcia_dev" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa236be2f, "comedi_handle_events" },
	{ 0x548b84ec, "comedi_buf_write_samples" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x590c9f82, "comedi_timeout" },
	{ 0x4aa2cad2, "comedi_dio_update_state" },
	{ 0x2ad503bc, "comedi_pcmcia_auto_config" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi_pcmcia,comedi,pcmcia");

MODULE_ALIAS("pcmcia:m0137c0027f*fn*pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "E05BF286CE7A81CC7FB973F");
